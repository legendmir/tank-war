#pragma once
#include<iostream>
#include<vector>
#include<windows.h>
#include<time.h>
#define HIGH 40                          //�߽��
#define LEN 50                           //�߽糤
enum map_data {
	map_iron_data=100,				 //�����ͼ��ά�����ǽ����
	map_soil_data,					 //��ǽ����
	map_grass_data,					 //�ݵ�����
	map_river_data,					 //��������
	map_boss_data				     //�ܲ�����
};
enum tank_map_data {
	tank0_data=200,				 //����̹�˶�ά�����p1̹������
	tank1_data,					 //����̹�˶�ά�����p2̹������
	tank2_data,				 //����̹�˶�ά����ĵз�1̹������
	tank3_data,				 //����̹�˶�ά����ĵз�2̹������
	tank4_data,				 //����̹�˶�ά����ĵз�3̹������
	tank5_data,				 //����̹�˶�ά����ĵз�4̹������
	tank6_data,				 //����̹�˶�ά����ĵз�5̹������
	tank7_data, 				 //����̹�˶�ά����ĵз�6̹������
	tank8_data,                 //����̹�˶�ά����ĵз�7̹������
	bullet_data               //����̹�˶�ά������ӵ�����
};									
enum bullet_data {
	bullet1_data=300,				 //����̹�˶�ά������ӵ�1����
	bullet2_data,					 //����̹�˶�ά������ӵ�2����
	bullet3_data                     //����̹�˶�ά������ӵ�2����
};
class Map 
{
public:
	Map() {
		for (int i = 0;i < LEN;i++)
		{
			for (int j = 0;j < HIGH;j++)
			{
				map_data_arr[i][j] = 0 ;//��ʼ��Ϊ0
				tank_data_arr[i][j] = 0 ;//��ʼ��0
			}
		}
		////map_data_arr[LEN][HIGH] = { 0 };//��ʼ��Ϊ0
		////tank_data_arr[LEN][HIGH] = { 0 };//��ʼ��0
	};
	~Map() {};
	void set_map_data(int x,int y,int ndata);                //���õ�ͼ����
	int get_map_data(int x,int y);				             //��ȡ��ͼ����
	void set_tank_data(int x, int y, int ndata);			 //����̹������
	int get_tank_data(int x, int y);			             //��ȡ̹������
	void data_init();                                        //���ݳ�ʼ��  
	//void data_save();
private:
    int map_data_arr[LEN][HIGH];         //��ͼ���ݶ�ά����,��ȡ��ͼ����
	int tank_data_arr[LEN][HIGH];        //̹�����ݶ�ά����,��ȡ̹�˺��ӵ�(*����*)��*����*��//���������ж�̹�˼����ײ���߲ݴԵ�
};