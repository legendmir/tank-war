#include"data.h"
void Map::set_map_data(int x, int y, int ndata)             //���õ�ͼ����
{
	map_data_arr[x][y] = ndata;
}
int Map::get_map_data(int x, int y)             			 //��ȡ��ͼ����
{
	return map_data_arr[x][y];
}
void Map::set_tank_data(int x, int y, int ndata)			 //����̹������
{
	tank_data_arr[x][y] = ndata;
}
int Map::get_tank_data(int x, int y)             			 //��ȡ̹������
{
	return tank_data_arr[x][y];
}
void Map::data_init()                                        //���ݳ�ʼ��  
{
	for (int i = 0;i < LEN;i++)
	{
		for (int j = 0;j < HIGH;j++)
		{
			map_data_arr[i][j] = 0;//��ʼ��Ϊ0
			tank_data_arr[i][j] = 0;//��ʼ��0
		}
	}
}