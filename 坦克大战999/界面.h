#pragma once
#include<iostream>
#include<windows.h>
#include<time.h>
#define HIGH 40                          //�߽��
#define LEN 50                           //�߽糤
#define WHITE 0x07                       //��ɫ
#define YELLOW 0x06 					 //��ɫ
#define GREEN 0x0A						 //��ɫ
#define BLUE 0x01						 //��ɫ
#define BOSS_COLOR 0x04                          
using namespace std;          
class Draw
{
public:
	Draw() {};
	~Draw() {};
	void draw_start_itf();           //��ʼ����
	void draw_edit_itf();			 //�༭��Ϸ����������
	void draw_rungame_itf(int mode);		 //��Ϸ���е����Խ���
	void draw_choose_single();       //ѡ����ģʽ֮��Ľ���
	void draw_choose_double();       //ѡ��˫��ģʽ֮��Ľ���
	void draw_choose_easy();         //ѡ���ģʽ֮��Ľ���
	void draw_choose_difficult();    //ѡ������ģʽ֮��Ľ���
	void draw_choose_iron();         //ѡ���ǽ�Ľ���	
	void draw_choose_soil();         //ѡ����ǽ�Ľ���
	void draw_choose_grass();        //ѡ��ݵصĽ���
	void draw_choose_river();        //ѡ������Ľ���
	void draw_gameover_itf();         //��Ϸ��������
	void draw_saved_itf();             //����ɹ�����
	void draw_win_itf();               //������Ϸʤ������
	void draw_p1_state(int nblood, int nrank, int nlifes);          //��ʾp1Ѫ������Ϣ
	void draw_p2_state(int nblood, int nrank, int nlifes);
	void show_char(SHORT x, SHORT y, char* fig, WORD color=WHITE);  
	void show_info(SHORT x, SHORT y, int info, WORD color = WHITE);//��ʾ������Ϣ
private:
	void write_char(SHORT x,          //x����
		            SHORT y,          //y����
		            char*fig,         //ͼ����״
		            WORD color=WHITE);     //��ɫ Ĭ��Ϊ��ɫ
	void setCursor_info(int x=0,       //cci.bVisible ���ɼ��� Ĭ������Ϊ���ɼ�
		                int y=1);      //cci.dwSize   �����
};

