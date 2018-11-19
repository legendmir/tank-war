#pragma once
#include<iostream>
#include<vector>
#include<windows.h>
#include<time.h>
#define HIGH 40                          //边界高
#define LEN 50                           //边界长
enum map_data {
	map_iron_data=100,				 //存入地图二维数组钢墙数据
	map_soil_data,					 //土墙数据
	map_grass_data,					 //草地数据
	map_river_data,					 //河流数据
	map_boss_data				     //总部数据
};
enum tank_map_data {
	tank0_data=200,				 //存入坦克二维数组的p1坦克数据
	tank1_data,					 //存入坦克二维数组的p2坦克数据
	tank2_data,				 //存入坦克二维数组的敌方1坦克数据
	tank3_data,				 //存入坦克二维数组的敌方2坦克数据
	tank4_data,				 //存入坦克二维数组的敌方3坦克数据
	tank5_data,				 //存入坦克二维数组的敌方4坦克数据
	tank6_data,				 //存入坦克二维数组的敌方5坦克数据
	tank7_data, 				 //存入坦克二维数组的敌方6坦克数据
	tank8_data,                 //存入坦克二维数组的敌方7坦克数据
	bullet_data               //存入坦克二维数组的子弹数据
};									
enum bullet_data {
	bullet1_data=300,				 //存入坦克二维数组的子弹1数据
	bullet2_data,					 //存入坦克二维数组的子弹2数据
	bullet3_data                     //存入坦克二维数组的子弹2数据
};
class Map 
{
public:
	Map() {
		for (int i = 0;i < LEN;i++)
		{
			for (int j = 0;j < HIGH;j++)
			{
				map_data_arr[i][j] = 0 ;//初始化为0
				tank_data_arr[i][j] = 0 ;//初始化0
			}
		}
		////map_data_arr[LEN][HIGH] = { 0 };//初始化为0
		////tank_data_arr[LEN][HIGH] = { 0 };//初始化0
	};
	~Map() {};
	void set_map_data(int x,int y,int ndata);                //设置地图数据
	int get_map_data(int x,int y);				             //获取地图数据
	void set_tank_data(int x, int y, int ndata);			 //设置坦克数据
	int get_tank_data(int x, int y);			             //获取坦克数据
	void data_init();                                        //数据初始化  
	//void data_save();
private:
    int map_data_arr[LEN][HIGH];         //地图数据二维数组,存取地图数据
	int tank_data_arr[LEN][HIGH];        //坦克数据二维数组,存取坦克和子弹(*坐标*)（*数据*）//用来方便判断坦克间的碰撞和走草丛等
};