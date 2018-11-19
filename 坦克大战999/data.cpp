#include"data.h"
void Map::set_map_data(int x, int y, int ndata)             //设置地图数据
{
	map_data_arr[x][y] = ndata;
}
int Map::get_map_data(int x, int y)             			 //获取地图数据
{
	return map_data_arr[x][y];
}
void Map::set_tank_data(int x, int y, int ndata)			 //设置坦克数据
{
	tank_data_arr[x][y] = ndata;
}
int Map::get_tank_data(int x, int y)             			 //获取坦克数据
{
	return tank_data_arr[x][y];
}
void Map::data_init()                                        //数据初始化  
{
	for (int i = 0;i < LEN;i++)
	{
		for (int j = 0;j < HIGH;j++)
		{
			map_data_arr[i][j] = 0;//初始化为0
			tank_data_arr[i][j] = 0;//初始化0
		}
	}
}