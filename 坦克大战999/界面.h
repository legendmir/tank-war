#pragma once
#include<iostream>
#include<windows.h>
#include<time.h>
#define HIGH 40                          //边界高
#define LEN 50                           //边界长
#define WHITE 0x07                       //白色
#define YELLOW 0x06 					 //黄色
#define GREEN 0x0A						 //绿色
#define BLUE 0x01						 //蓝色
#define BOSS_COLOR 0x04                          
using namespace std;          
class Draw
{
public:
	Draw() {};
	~Draw() {};
	void draw_start_itf();           //开始界面
	void draw_edit_itf();			 //编辑游戏操作栏界面
	void draw_rungame_itf(int mode);		 //游戏运行的属性界面
	void draw_choose_single();       //选择单人模式之后的界面
	void draw_choose_double();       //选择双人模式之后的界面
	void draw_choose_easy();         //选择简单模式之后的界面
	void draw_choose_difficult();    //选择困难模式之后的界面
	void draw_choose_iron();         //选择钢墙的界面	
	void draw_choose_soil();         //选择土墙的界面
	void draw_choose_grass();        //选择草地的界面
	void draw_choose_river();        //选择河流的界面
	void draw_gameover_itf();         //游戏结束界面
	void draw_saved_itf();             //保存成功界面
	void draw_win_itf();               //保存游戏胜利界面
	void draw_p1_state(int nblood, int nrank, int nlifes);          //显示p1血量等信息
	void draw_p2_state(int nblood, int nrank, int nlifes);
	void show_char(SHORT x, SHORT y, char* fig, WORD color=WHITE);  
	void show_info(SHORT x, SHORT y, int info, WORD color = WHITE);//显示数据信息
private:
	void write_char(SHORT x,          //x坐标
		            SHORT y,          //y坐标
		            char*fig,         //图案形状
		            WORD color=WHITE);     //颜色 默认为白色
	void setCursor_info(int x=0,       //cci.bVisible 光标可见性 默认设置为不可见
		                int y=1);      //cci.dwSize   光标宽度
};

