#pragma once
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include"data.h"
#include"����.h"
#include<conio.h>
#pragma comment(lib,"winmm.lib")

#define HIGH 40                          //�߽��
#define LEN 50                           //�߽糤
#define P1_SPEED 10				     //���1�ٶ�
#define P2_SPEED 10					     //���2�ٶ�
#define ENEMY_SPEED1 150                   //�з��ٶ�
#define ENEMY_SPEED2 75                   //�з��ٶ�
#define ENEMY_SPEED3 50                   //�з��ٶ�
#define BULLET_SPEED 50                   //�ӵ��ٶ�
#define P1_COLOR 0x0C					 //���1��ɫ
#define P2_COLOR 0x0F					 //���2��ɫ
#define ENEMY_COLOR1 0x0D				 //�з�1��ɫ
#define ENEMY_COLOR2 0x0B				 //�з�2��ɫ
#define ENEMY_COLOR3 0x0E				 //�з�3��ɫ
#define P_TANK_BLOOD 3				     //���Ѫ��
#define ENEMY_BLOOD1 1					 //�з�1Ѫ��
#define ENEMY_BLOOD2 2				     //�з�2Ѫ��
#define ENEMY_BLOOD3 3					 //�з�3Ѫ��
#define TANK_CNT 9                       //̹������
#define REC_TIME 50                      //����ʱ��
#define P_LIFE 5                        //�������
#define KEY_DOWN(key)GetAsyncKeyState(key)==(SHORT)0x8001?1:0//����KEY_DOWNΪ�������뺯��
enum key_board_event//���̽����¼�
{
	dir_up, 								 //��
	dir_down,								 //��
	dir_left,								 //��
	dir_right,								 //��
	bullet_fire                              //�����ӵ�
};
enum bullet_source
{
	p_source,                                //����ӵ�
	enemy_source                             //�з��ӵ�
};
enum mode
{
	m_single,                                //����ģʽ
	m_double                                 //˫��ģʽ
};
enum difficulty
{
	m_easy,									 //��ģʽ
	m_difficult								 //����ģʽ
};
enum op 
{
	op_erase,								 //����
	op_write  								 //д��
};
class Tank;
class Bullet
{
public:
	Bullet() :m_bullet_shape("��"), m_bullet_life(1){};
	~Bullet() {};
	//int m_bullet_collison(Map* p_map_obj);//�ӵ���ײ,������ײ����
	void m_bullet_erase_print(Map* p_map_obj,int op);//�ӵ���д
	void m_bullet_init(Map* p_map_objint, int x, int y, int dir, int source);
	void m_bullet_move(Map* p_map_obj,Tank* tank_arr);
	int get_bullet_life();
	void set_bullet_life(int val);
private:
	int m_bullet_x;
	int m_bullet_y;
	int m_bullet_source;//�ӵ�����
	int m_bullet_speed;
	char* m_bullet_shape;
	int m_bullet_dir;
	int m_attack;
	int m_bullet_life;
	Draw m_draw_obj;     //draw�������ڴ�ӡ�ӵ�ͼ��
	Map* p_map_obj;      //��ͼ����ָ��
};
class Tank {
public:
	Tank(){};
	~Tank() {};
	void erase_and_print(int op);	   
	void mod_tank_data(int op);//���ݷ����̹������д��Ͳ�������
public:
	int m_tankmap_data[6];//�洢̹�����ݵĶ�λ������̹�˵�����
	int m_map_data[6];    //�洢��ͼ���ݵĶ�λ������̹�˵�����
	static int m_if_defeated;//�Ƿ�ʧ��
	static int m_scores;//̹�˵÷�
	bool tank_collision(Map* p_map_obj,int move_dir,int num);//���ݷ����ж���ײ,numΪ̹�������±꣬������Ϊ���ж�̹�˼����ײ

	void ai_tank_move_astep();
	void tank_move_astep(Map* p_map_obj, vector<Bullet>& m_vecBullet_obj, int move_dir, int num);//̹���ƶ�һ��/numΪ̹�������±�
	void easy_mode_tank_init(int tank_map_savedata);//���̹�˳�ʼ��
    ///////////////////////////////////////
	void set_m_x(int x);
	void set_m_y(int y);
	void set_m_speed(int speed);
	void set_blood(int blood);
	void set_m_dir(int dir);
	void set_m_color(int color);
	void set_m_tank_save_data(int data);
	void set_m_tank_life(int life);
	void set_p_map_obj(Map* obj);
	void set_scores(int nval);
    void set_defeated();//����Ϊ��Ϸʧ��
    ///////////////////////////////////////����˽������
	int get_scores();
	int get_m_x();
	int get_m_y();
	int get_m_speed();
	int get_blood();
	int get_m_dir();
	int get_m_color();
	int get_m_tank_save_data();
	int get_m_tank_life();
	/////////////////////////////////////��ȡ˽������
private:
	int m_x;			  //x����
	int m_y;			  //y����
	int m_dest_x;		  //
	int m_dest_y;		  //
	int m_speed;		  //�ٶ�
	int m_blood;		  //Ѫ��
	int m_dir;			  //����
	int m_color;          //��ɫ
	int m_tank_save_data;//��λ������̹�˵Ĵ洢����
	int m_tank_life;     //̹������
	int m_tank_type;     //�з������ѷ�̹��
	Draw m_draw_obj;     //draw�������ڴ�ӡ̹��ͼ��
	Map* p_map_obj;      //��ͼ����ָ��
};
class Game
{
public:
	Game():game_mode(m_single),game_difficulty(m_easy),m_is_edit_mod(0){};//��ʼ���ѶȺ�ģʽ
	~Game() {};
	void run_start_menu();//������ʼ�˵�
	int key_down_p1_event();//���ղٿ�
	int key_down_p2_event();
	void map_edit(Map& map_obj);//��ͼ�༭
	int get_game_mode();//��ȡģʽ
	void set_game_mode(int n_mode);//����ģʽ
	int get_game_difficulty();//��ȡģʽ
	void set_game_difficulty(int n_difc);//����ģʽ
	void gameframe_init(Map& map_obj);//��Ϸ������ܳ�ʼ��
	void m_game_init(int mode, int difficulty, int num);
	void m_p1_run(time_t& run_time, time_t& start_time, int& move_dir);
	void m_p2_run(time_t& run_time, time_t& start_time, int& move_dir);
	void m_enemy_run(time_t* run_time, time_t* start_time, int* move_dir);
	void m_bullet_run(time_t& bullet_run_time, time_t& bullet_start_time);
	void m_show_data();//��ʾ���������÷�
	void run_game1(int num);//��ģʽ
	void run_game2();//ج��ģʽ
	void savegame();//������Ϸ
	void load_data();//������Ϸ
	void save_map();//ֻ�����ͼ
	void load_nlev_map_data(int num);//�����ͼ����
	void map_init(Map& map_obj,int map_num);//��ͼ��ʼ��
private:
	Map map_obj;
	Draw draw_obj;
	//bool m_is_gameover;//�ж���Ϸ�Ƿ�ʧ��
	int m_p1_life;//���1����
	int m_p2_life;//���2����
	int game_mode;//��Ϸģʽ
	int game_difficulty;//��Ϸ�Ѷ�/��/ج��
	bool m_is_edit_mod;//�Ƿ�Ϊ�༭ģʽ
	Tank  m_tank_arr[TANK_CNT]; //̹������
	vector<Bullet> m_vecBullet_obj;//�ӵ�����
};