#pragma once
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include"data.h"
#include"界面.h"
#include<conio.h>
#pragma comment(lib,"winmm.lib")

#define HIGH 40                          //边界高
#define LEN 50                           //边界长
#define P1_SPEED 10				     //玩家1速度
#define P2_SPEED 10					     //玩家2速度
#define ENEMY_SPEED1 150                   //敌方速度
#define ENEMY_SPEED2 75                   //敌方速度
#define ENEMY_SPEED3 50                   //敌方速度
#define BULLET_SPEED 50                   //子弹速度
#define P1_COLOR 0x0C					 //玩家1颜色
#define P2_COLOR 0x0F					 //玩家2颜色
#define ENEMY_COLOR1 0x0D				 //敌方1颜色
#define ENEMY_COLOR2 0x0B				 //敌方2颜色
#define ENEMY_COLOR3 0x0E				 //敌方3颜色
#define P_TANK_BLOOD 3				     //玩家血量
#define ENEMY_BLOOD1 1					 //敌方1血量
#define ENEMY_BLOOD2 2				     //敌方2血量
#define ENEMY_BLOOD3 3					 //敌方3血量
#define TANK_CNT 9                       //坦克总数
#define REC_TIME 50                      //重生时间
#define P_LIFE 5                        //玩家生命
#define KEY_DOWN(key)GetAsyncKeyState(key)==(SHORT)0x8001?1:0//设置KEY_DOWN为键盘输入函数
enum key_board_event//键盘接收事件
{
	dir_up, 								 //上
	dir_down,								 //下
	dir_left,								 //左
	dir_right,								 //右
	bullet_fire                              //发射子弹
};
enum bullet_source
{
	p_source,                                //玩家子弹
	enemy_source                             //敌方子弹
};
enum mode
{
	m_single,                                //单人模式
	m_double                                 //双人模式
};
enum difficulty
{
	m_easy,									 //简单模式
	m_difficult								 //困难模式
};
enum op 
{
	op_erase,								 //擦除
	op_write  								 //写入
};
class Tank;
class Bullet
{
public:
	Bullet() :m_bullet_shape("○"), m_bullet_life(1){};
	~Bullet() {};
	//int m_bullet_collison(Map* p_map_obj);//子弹碰撞,返回碰撞类型
	void m_bullet_erase_print(Map* p_map_obj,int op);//子弹擦写
	void m_bullet_init(Map* p_map_objint, int x, int y, int dir, int source);
	void m_bullet_move(Map* p_map_obj,Tank* tank_arr);
	int get_bullet_life();
	void set_bullet_life(int val);
private:
	int m_bullet_x;
	int m_bullet_y;
	int m_bullet_source;//子弹出处
	int m_bullet_speed;
	char* m_bullet_shape;
	int m_bullet_dir;
	int m_attack;
	int m_bullet_life;
	Draw m_draw_obj;     //draw对象用于打印子弹图像
	Map* p_map_obj;      //地图对象指针
};
class Tank {
public:
	Tank(){};
	~Tank() {};
	void erase_and_print(int op);	   
	void mod_tank_data(int op);//根据方向对坦克数组写入和擦除操作
public:
	int m_tankmap_data[6];//存储坦克数据的二位数组中坦克的坐标
	int m_map_data[6];    //存储地图数据的二位数组中坦克的坐标
	static int m_if_defeated;//是否失败
	static int m_scores;//坦克得分
	bool tank_collision(Map* p_map_obj,int move_dir,int num);//根据方向判断碰撞,num为坦克数组下标，传入是为了判断坦克间的碰撞

	void ai_tank_move_astep();
	void tank_move_astep(Map* p_map_obj, vector<Bullet>& m_vecBullet_obj, int move_dir, int num);//坦克移动一步/num为坦克数组下标
	void easy_mode_tank_init(int tank_map_savedata);//玩家坦克初始化
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
    void set_defeated();//设置为游戏失败
    ///////////////////////////////////////设置私有数据
	int get_scores();
	int get_m_x();
	int get_m_y();
	int get_m_speed();
	int get_blood();
	int get_m_dir();
	int get_m_color();
	int get_m_tank_save_data();
	int get_m_tank_life();
	/////////////////////////////////////获取私有数据
private:
	int m_x;			  //x坐标
	int m_y;			  //y坐标
	int m_dest_x;		  //
	int m_dest_y;		  //
	int m_speed;		  //速度
	int m_blood;		  //血量
	int m_dir;			  //方向
	int m_color;          //颜色
	int m_tank_save_data;//二位数组中坦克的存储数据
	int m_tank_life;     //坦克生命
	int m_tank_type;     //敌方或者友方坦克
	Draw m_draw_obj;     //draw对象用于打印坦克图像
	Map* p_map_obj;      //地图对象指针
};
class Game
{
public:
	Game():game_mode(m_single),game_difficulty(m_easy),m_is_edit_mod(0){};//初始化难度和模式
	~Game() {};
	void run_start_menu();//创建开始菜单
	int key_down_p1_event();//接收操控
	int key_down_p2_event();
	void map_edit(Map& map_obj);//地图编辑
	int get_game_mode();//获取模式
	void set_game_mode(int n_mode);//设置模式
	int get_game_difficulty();//获取模式
	void set_game_difficulty(int n_difc);//设置模式
	void gameframe_init(Map& map_obj);//游戏基本框架初始化
	void m_game_init(int mode, int difficulty, int num);
	void m_p1_run(time_t& run_time, time_t& start_time, int& move_dir);
	void m_p2_run(time_t& run_time, time_t& start_time, int& move_dir);
	void m_enemy_run(time_t* run_time, time_t* start_time, int* move_dir);
	void m_bullet_run(time_t& bullet_run_time, time_t& bullet_start_time);
	void m_show_data();//显示生命数及得分
	void run_game1(int num);//简单模式
	void run_game2();//噩梦模式
	void savegame();//保存游戏
	void load_data();//载入游戏
	void save_map();//只保存地图
	void load_nlev_map_data(int num);//载入地图数据
	void map_init(Map& map_obj,int map_num);//地图初始化
private:
	Map map_obj;
	Draw draw_obj;
	//bool m_is_gameover;//判断游戏是否失败
	int m_p1_life;//玩家1生命
	int m_p2_life;//玩家2生命
	int game_mode;//游戏模式
	int game_difficulty;//游戏难度/简单/噩梦
	bool m_is_edit_mod;//是否为编辑模式
	Tank  m_tank_arr[TANK_CNT]; //坦克数组
	vector<Bullet> m_vecBullet_obj;//子弹数组
};