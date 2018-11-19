#include"engine.h"
int Tank::m_scores = 0;//tank类静态分数
int Tank::m_if_defeated = 0;//tank类静态数据 是否游戏失败
void Tank::erase_and_print(int op)
{
	if (m_dir ==dir_left )
	{
		if (p_map_obj->get_map_data(m_x, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y - 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y - 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y + 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y + 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y + 1, "  ");
			}
		}
	}
	if (m_dir == dir_right)
	{
		if (p_map_obj->get_map_data(m_x, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x+1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x+1, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y-1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y-1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y - 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y+1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y+1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y + 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "  ");
			}
		}
	}
	if (m_dir == dir_up)
	{
		if (p_map_obj->get_map_data(m_x, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y - 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y + 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y + 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y + 1, "  ");
			}
		}
	}
	if (m_dir == dir_down)
	{
		if (p_map_obj->get_map_data(m_x,m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x,m_y+1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y+1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x-1,m_y)== map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x-1,m_y-1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y - 1, "■",GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x+1,m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x+1,m_y-1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y - 1, "■", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "■", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "  ");
			}
		}
	}
}
void Tank::mod_tank_data(int op)//根据方向将坦克6个点写入或者擦除
{
	if (m_dir == dir_left)
	{
		if (op == op_write)
		{
			p_map_obj->set_tank_data(m_x, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x, m_y - 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y - 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x, m_y + 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y + 1, m_tank_save_data);
		}
		if (op == op_erase)
		{
			p_map_obj->set_tank_data(m_x, m_y, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y, 0);
			p_map_obj->set_tank_data(m_x, m_y - 1, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y - 1, 0);
			p_map_obj->set_tank_data(m_x, m_y + 1, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y + 1, 0);
		}
	}
	if (m_dir == dir_right)
	{
		if (op == op_write)
		{
			p_map_obj->set_tank_data(m_x, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x, m_y - 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y - 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x, m_y + 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y + 1, m_tank_save_data);
		}
		if (op == op_erase)
		{
			p_map_obj->set_tank_data(m_x, m_y, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y, 0);
			p_map_obj->set_tank_data(m_x, m_y - 1, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y - 1, 0);
			p_map_obj->set_tank_data(m_x, m_y + 1, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y + 1, 0);
		}
	}
	if (m_dir == dir_up)
	{
		if (op == op_write)
		{
			p_map_obj->set_tank_data(m_x, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x, m_y - 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y + 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y + 1, m_tank_save_data);
		}
		if (op == op_erase)
		{
			p_map_obj->set_tank_data(m_x, m_y, 0);
			p_map_obj->set_tank_data(m_x, m_y - 1, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y + 1, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y + 1, 0);
		}
	}
	if (m_dir == dir_down)
	{
		if (op == op_write)
		{
			p_map_obj->set_tank_data(m_x, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x, m_y + 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x - 1, m_y - 1, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y, m_tank_save_data);
			p_map_obj->set_tank_data(m_x + 1, m_y - 1, m_tank_save_data);
		}
		if (op == op_erase)
		{
			p_map_obj->set_tank_data(m_x, m_y, 0);
			p_map_obj->set_tank_data(m_x, m_y + 1, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y, 0);
			p_map_obj->set_tank_data(m_x - 1, m_y - 1, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y, 0);
			p_map_obj->set_tank_data(m_x + 1, m_y - 1, 0);
		}
	}
}
bool Tank::tank_collision(Map* p_map_obj,int move_dir,int num)
{
	bool is_collision = 0;
	if (move_dir == dir_up)
	{
		//int flag = 1;
		if (p_map_obj->get_map_data(m_x, m_y - 2) == map_iron_data||p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_iron_data||
			p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_iron_data||p_map_obj->get_map_data(m_x, m_y - 2) == map_soil_data||
			p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_soil_data||p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_soil_data||
			p_map_obj->get_map_data(m_x, m_y - 2) == map_river_data||p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_river_data||
			p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_river_data)//判断碰撞钢墙，土墙，河流
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//坦克每一个在坦克数据区的存储数据分别是200-208，可以直接根据下标判断
		{
			if (m_tank_save_data != i + tank0_data)//当前坦克为i，与其余八个坦克的存储位置比较看是否碰撞
			{
				if (p_map_obj->get_tank_data(m_x, m_y - 2) == tank0_data + i ||               //坦克头碰撞
					p_map_obj->get_tank_data(m_x + 1, m_y - 1) == tank0_data + i || 	    //坦克右肩碰撞
					p_map_obj->get_tank_data(m_x - 1, m_y - 1) == tank0_data + i)			//左肩碰撞
				{
					//flag = 0;
					is_collision = 1;
					break;
				}
			}
		}
	}
	if (move_dir == dir_down)
	{
		//int flag = 1;
		if (p_map_obj->get_map_data(m_x, m_y + 2) == map_iron_data || p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_iron_data ||
			p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_iron_data || p_map_obj->get_map_data(m_x, m_y + 2) == map_soil_data ||
			p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_soil_data || p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_soil_data ||
			p_map_obj->get_map_data(m_x, m_y + 2) == map_river_data || p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_river_data ||
			p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_river_data)//判断碰撞钢墙，土墙，河流
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//坦克每一个在坦克数据区的存储数据分别是200-208，可以直接根据下标判断
		{
			if (m_tank_save_data != i + tank0_data)//当前坦克为i，与其八个坦克的存储位置比较看是否碰撞
			{
				if (p_map_obj->get_tank_data(m_x, m_y + 2) == tank0_data + i ||         //坦克头碰撞
					p_map_obj->get_tank_data(m_x + 1, m_y + 1) == tank0_data + i ||		//坦克右肩碰撞
					p_map_obj->get_tank_data(m_x - 1, m_y + 1) == tank0_data + i)		//左肩碰撞
				{
					//flag = 0;
					is_collision = 1;
					break;
				}
			}
		}
	}
	if (move_dir == dir_left)
	{
		if (p_map_obj->get_map_data(m_x - 2, m_y) == map_iron_data || p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_iron_data ||
			p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_iron_data || p_map_obj->get_map_data(m_x - 2, m_y) == map_soil_data ||
			p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_soil_data || p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_soil_data ||
			p_map_obj->get_map_data(m_x - 2, m_y) == map_river_data || p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_river_data ||
			p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_river_data)//判断碰撞钢墙，土墙，河流
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//坦克每一个在坦克数据区的存储数据分别是200-208，可以直接根据下标判断
		{
			if (m_tank_save_data != i + tank0_data)//当前坦克为i，与其余八个坦克的存储位置比较看是否碰撞
			{
				if (p_map_obj->get_tank_data(m_x - 2, m_y) == tank0_data + i ||               //坦克头碰撞
					p_map_obj->get_tank_data(m_x - 1, m_y - 1) == tank0_data + i || 	    //坦克右肩碰撞
					p_map_obj->get_tank_data(m_x - 1, m_y + 1) == tank0_data + i)			//左肩碰撞
				{
					is_collision = 1;
					break;
				}
			}
		}
	}
	if (move_dir == dir_right)
	{
		if (p_map_obj->get_map_data(m_x + 2, m_y) == map_iron_data || p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_iron_data ||
			p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_iron_data || p_map_obj->get_map_data(m_x + 2, m_y) == map_soil_data ||
			p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_soil_data || p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_soil_data ||
			p_map_obj->get_map_data(m_x + 2, m_y) == map_river_data || p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_river_data ||
			p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_river_data)//判断碰撞钢墙，土墙，河流
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//坦克每一个在坦克数据区的存储数据分别是200-208，可以直接根据下标判断
		{
			if (m_tank_save_data != i + tank0_data)//当前坦克为i，与其余八个坦克的存储位置比较看是否碰撞
			{
				if (p_map_obj->get_tank_data(m_x + 2, m_y) == tank0_data + i ||               //坦克头碰撞
					p_map_obj->get_tank_data(m_x + 1, m_y + 1) == tank0_data + i || 	    //坦克右肩碰撞
					p_map_obj->get_tank_data(m_x + 1, m_y - 1) == tank0_data + i)			//左肩碰撞
				{
					is_collision = 1;
					break;
				}
			}
		}
	}
	return is_collision;
}
void Tank::tank_move_astep(Map* p_map_obj, vector<Bullet>& m_vecBullet_obj,int move_dir ,int num)
{
	int is_collison = tank_collision(p_map_obj,move_dir,num);//接收是否碰撞
	if (move_dir == dir_up)
	{
		if (!is_collison)//没有碰撞
		{
			erase_and_print(op_erase);//擦除控制台图像
			mod_tank_data(op_erase);//擦除坦克数据
			m_y--;//向上移动
			m_dir = move_dir;
			erase_and_print(op_write);//打印新控制台图像
			mod_tank_data(op_write);//输入新坦克数据	
		}
	}
	if (move_dir == dir_down)
	{
		if (!is_collison)//没有碰撞
		{
			erase_and_print(op_erase);//擦除控制台图像
			mod_tank_data(op_erase);//擦除坦克数据
			m_y++;//向下移动
			m_dir = move_dir;
			erase_and_print(op_write);//打印新控制台图像
			mod_tank_data(op_write);//输入新坦克数据
			//m_dir = move_dir;
		}
	}
	if (move_dir == dir_left)
	{
		if (!is_collison)//没有碰撞
		{
			erase_and_print(op_erase);//擦除控制台图像
			mod_tank_data(op_erase);//擦除坦克数据
			m_x--;//向左移动
			m_dir = move_dir;
			erase_and_print(op_write);//打印新控制台图像
			mod_tank_data(op_write);//输入新坦克数据
			//m_dir = move_dir;
		}
	}
	if (move_dir == dir_right)
	{
		if (!is_collison)//没有碰撞
		{
			erase_and_print(op_erase);//擦除控制台图像
			mod_tank_data(op_erase);//擦除坦克数据
			m_x++;//向右移动
			m_dir = move_dir;
			erase_and_print(op_write);//打印新控制台图像
			mod_tank_data(op_write);//输入新坦克数据
			//m_dir = move_dir;
		}
	}
	if (move_dir == bullet_fire)
	{
		Bullet m_bullet;
		if (m_dir == dir_up)
		{
			m_bullet.m_bullet_init(p_map_obj,m_x, m_y - 2, m_dir, m_tank_type);
		}
		if (m_dir == dir_down)
		{
			m_bullet.m_bullet_init(p_map_obj,m_x, m_y + 2, m_dir, m_tank_type);
		}
		if (m_dir == dir_left)
		{
			m_bullet.m_bullet_init(p_map_obj,m_x-2, m_y, m_dir, m_tank_type);
		}
		if (m_dir == dir_right)
		{
			m_bullet.m_bullet_init(p_map_obj,m_x+2, m_y, m_dir, m_tank_type);
		}
		m_vecBullet_obj.push_back(m_bullet);
	}
}
void Tank::easy_mode_tank_init(int tank_map_savedata)//简单模式坦克初始化
{
	if (tank_map_savedata == tank0_data)
	{
		m_x = 10;
		m_y = 37;
		m_dir = dir_up;
		m_blood = P_TANK_BLOOD;
		m_color = P1_COLOR;
		m_tank_life = 1;
		m_tank_type = p_source;
		m_tank_save_data = tank_map_savedata;
		erase_and_print(op_write);
		mod_tank_data(op_write);//数据写入坦克二维数组
	}
	if (tank_map_savedata == tank1_data)
	{
		m_x = 40;
		m_y = 37;
		m_dir = dir_up;
		m_blood = P_TANK_BLOOD;
		m_color = P2_COLOR;
		m_tank_life = 1;
		m_tank_type = p_source;
		m_tank_save_data = tank_map_savedata;
		erase_and_print(op_write);
		mod_tank_data(op_write);//数据写入坦克二维数组
	}
	if (tank_map_savedata > tank1_data)
	{
		int x;
		int y;
		int dir;
		int color;
		srand(clock());
		dir = rand() % 4;
		color = rand() % 3;//随机生成颜色,根据颜色决定不同程度的敌方坦克
		while (1)
		{
			x = rand() % (LEN - 5) + 2;
			y = rand() % (HIGH - 15) + 2;//坦克出生位置在总部上方一定距离的位置
			int flag = 0;//是否出生在错误地点
			if (dir == dir_up)
			{
				//////////////////////////////////////
				m_tankmap_data[0] = p_map_obj->get_tank_data(x, y);
				m_tankmap_data[1] = p_map_obj->get_tank_data(x, y - 1);
				m_tankmap_data[2] = p_map_obj->get_tank_data(x - 1, y);
				m_tankmap_data[3] = p_map_obj->get_tank_data(x - 1, y + 1);
				m_tankmap_data[4] = p_map_obj->get_tank_data(x + 1, y);
				m_tankmap_data[5] = p_map_obj->get_tank_data(x + 1, y + 1);
				m_map_data[0] = p_map_obj->get_map_data(x, y);
				m_map_data[1] = p_map_obj->get_map_data(x, y - 1);
				m_map_data[2] = p_map_obj->get_map_data(x - 1, y);
				m_map_data[3] = p_map_obj->get_map_data(x - 1, y + 1);
				m_map_data[4] = p_map_obj->get_map_data(x + 1, y);
				m_map_data[5] = p_map_obj->get_map_data(x + 1, y + 1);
				///////////////////////////////////////
				//以上代码是对比坦克出生6个坐标位置是否与地图障碍重合/若重合则重生
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//看是否与障碍物,子弹等重合
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//比较初始的坦克与所有的坦克是否重合
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200直接对应坦克的存储数据
						{
							flag = 1;
							break;
						}
					}
					if (flag == 1)
					{
						break;
					}
				}
				if (flag == 0)//如果没有,退出无限重生循环
				{
					break;
				}
			}
			if (dir == dir_down)
			{
				m_tankmap_data[0] = p_map_obj->get_tank_data(x, y);
				m_tankmap_data[1] = p_map_obj->get_tank_data(x, y + 1);
				m_tankmap_data[2] = p_map_obj->get_tank_data(x - 1, y);
				m_tankmap_data[3] = p_map_obj->get_tank_data(x - 1, y - 1);
				m_tankmap_data[4] = p_map_obj->get_tank_data(x + 1, y);
				m_tankmap_data[5] = p_map_obj->get_tank_data(x + 1, y - 1);

				m_map_data[0] = p_map_obj->get_map_data(x, y);
				m_map_data[1] = p_map_obj->get_map_data(x, y + 1);
				m_map_data[2] = p_map_obj->get_map_data(x - 1, y);
				m_map_data[3] = p_map_obj->get_map_data(x - 1, y - 1);
				m_map_data[4] = p_map_obj->get_map_data(x + 1, y);
				m_map_data[5] = p_map_obj->get_map_data(x + 1, y - 1);
				///////////////////////////////////////
				//以上代码是对比坦克出生6个坐标位置是否与地图障碍重合/若重合则重生
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//看是否与障碍物,子弹等重合
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//比较初始的坦克与所有的坦克是否重合
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200直接对应坦克的存储数据
						{
							flag = 1;
							break;
						}
					}
					if (flag == 1)
					{
						break;
					}
				}
				if (flag == 0)//如果没有,退出无限重生循环
				{
					break;
				}
			}
			if (dir == dir_left)
			{
				m_tankmap_data[0] = p_map_obj->get_tank_data(x, y);
				m_tankmap_data[1] = p_map_obj->get_tank_data(x - 1, y);
				m_tankmap_data[2] = p_map_obj->get_tank_data(x, y - 1);
				m_tankmap_data[3] = p_map_obj->get_tank_data(x + 1, y - 1);
				m_tankmap_data[4] = p_map_obj->get_tank_data(x, y + 1);
				m_tankmap_data[5] = p_map_obj->get_tank_data(x + 1, y + 1);

				m_map_data[0] = p_map_obj->get_map_data(x, y);
				m_map_data[1] = p_map_obj->get_map_data(x - 1, y);
				m_map_data[2] = p_map_obj->get_map_data(x, y - 1);
				m_map_data[3] = p_map_obj->get_map_data(x + 1, y - 1);
				m_map_data[4] = p_map_obj->get_map_data(x, y + 1);
				m_map_data[5] = p_map_obj->get_map_data(x + 1, y + 1);
				///////////////////////////////////////
				//以上代码是对比坦克出生6个坐标位置是否与地图障碍重合/若重合则重生
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//看是否与障碍物,子弹等重合
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//比较初始的坦克与所有的坦克是否重合
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200直接对应坦克的存储数据
						{
							flag = 1;
							break;
						}
					}
					if (flag == 1)
					{
						break;
					}
				}
				if (flag == 0)//如果没有,退出无限重生循环
				{
					break;
				}
			}
			if (dir == dir_right)
			{
				m_tankmap_data[0] = p_map_obj->get_tank_data(x, y);
				m_tankmap_data[1] = p_map_obj->get_tank_data(x + 1, y);
				m_tankmap_data[2] = p_map_obj->get_tank_data(x, y - 1);
				m_tankmap_data[3] = p_map_obj->get_tank_data(x - 1, y - 1);
				m_tankmap_data[4] = p_map_obj->get_tank_data(x, y + 1);
				m_tankmap_data[5] = p_map_obj->get_tank_data(x - 1, y + 1);

				m_map_data[0] = p_map_obj->get_map_data(x, y);
				m_map_data[1] = p_map_obj->get_map_data(x + 1, y);
				m_map_data[2] = p_map_obj->get_map_data(x, y - 1);
				m_map_data[3] = p_map_obj->get_map_data(x - 1, y - 1);
				m_map_data[4] = p_map_obj->get_map_data(x, y + 1);
				m_map_data[5] = p_map_obj->get_map_data(x - 1, y + 1);
				///////////////////////////////////////
				//以上代码是对比坦克出生6个坐标位置是否与地图障碍重合/若重合则重生
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//看是否与障碍物,子弹等重合
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//比较初始的坦克与所有的坦克是否重合
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200直接对应坦克的存储数据
						{
							flag = 1;
							break;
						}
					}
					if (flag == 1)
					{
						break;
					}
				}
				if (flag == 0)//如果没有,退出无限重生循环
				{
					break;
				}
			}
		}
		m_x = x;
		m_y = y;
		m_dir = dir;
		if (color == 0)
		{
			m_color = ENEMY_COLOR1;
			m_blood = ENEMY_BLOOD1;
		}
		if (color == 1)
		{
			m_color = ENEMY_COLOR2;
			m_blood = ENEMY_BLOOD2;
		}
		if (color == 2)
		{
			m_color = ENEMY_COLOR3;
			m_blood = ENEMY_BLOOD3;
		}
		m_tank_life = 1;
		m_tank_save_data = tank_map_savedata;
		m_tank_type = enemy_source;
		erase_and_print(op_write);//打印坦克
		mod_tank_data(op_write);//数据写入坦克二维数组
	}
}
///////////////////////////////////////
void Tank::set_m_x(int x)
{
	m_x = x;
}
void Tank::set_m_y(int y) 
{
	m_y = y;
}
void Tank::set_m_speed(int speed)
{
	m_speed = speed;
}
void Tank::set_blood(int blood)
{
	m_blood = blood;
}
void Tank::set_m_dir(int dir)
{
	m_dir = dir;
}
void Tank::set_m_color(int color)
{
	m_color = color;
}
void Tank::set_m_tank_save_data(int data)
{
	m_tank_save_data = data;
}
void Tank::set_m_tank_life(int life)
{
	m_tank_life = life;
}
void Tank::set_scores(int nval)
{
	m_scores = nval;
}
void Tank::set_p_map_obj(Map* obj)
{
	p_map_obj = obj;
}
void Tank::set_defeated()
{
	m_if_defeated = 1;
}
///////////////////////////////////////设置私有数据
int Tank::get_m_x()
{
	return m_x;
}
int Tank::get_m_y()
{
	return m_y;
}
int Tank::get_m_speed()
{
	return m_speed;
}
int Tank::get_blood()
{
	return m_blood;
}
int Tank::get_m_dir()
{
	return m_dir;
}
int Tank::get_m_color()
{
	return m_color;
}
int Tank::get_m_tank_save_data()
{
	return m_tank_save_data;
}
int Tank::get_m_tank_life()
{
	return m_tank_life;
}
int Tank::get_scores()
{
	return m_scores;
}
/////////////////////////////////////////
void Bullet::m_bullet_erase_print(Map* p_map_obj,int op)//子弹擦写
{
	if (op == op_write)
	{
		if ((p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == 0
			|| p_map_obj->get_map_data(m_bullet_x, m_bullet_y)==map_river_data)&&
			p_map_obj->get_tank_data(m_bullet_x, m_bullet_y)==0)//如果子弹位置为河流或空地
		{
			if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == map_grass_data)//如果子弹位置为grass
			{
				p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, bullet_data);//只写子弹数据
			}
			else
			{
				m_draw_obj.show_char(m_bullet_x, m_bullet_y, m_bullet_shape);//打印子弹
				p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, bullet_data);//写子弹数据
			}
		}
	}
	if (op == op_erase)
	{
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == map_river_data)//如果子弹位置为grass
		{
			m_draw_obj.show_char(m_bullet_x, m_bullet_y, "■",BLUE);//擦除子弹
			p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, 0);//擦子弹数据
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == map_grass_data)//如果是草地只擦数据
		{
			p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, 0);//擦子弹数据
		}
		else
		{
			if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) != map_river_data&&
				p_map_obj->get_map_data(m_bullet_x, m_bullet_y) != map_iron_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank0_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank1_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank2_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank3_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank4_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank5_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank6_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank7_data&&
				p_map_obj->get_tank_data(m_bullet_x, m_bullet_y) != tank8_data)
			{
				m_draw_obj.show_char(m_bullet_x, m_bullet_y, "  ");//擦除子弹图形
				p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, 0);//擦子弹数据
			}
		}
	}
}
void Bullet::m_bullet_move(Map* p_map_obj, Tank* tank_arr)
{
	if (m_bullet_dir == dir_left)
	{
		if (p_map_obj->get_map_data(m_bullet_x - 1, m_bullet_y) == map_iron_data)//碰撞钢墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x - 1, m_bullet_y) == map_soil_data)//碰撞土墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			p_map_obj->set_map_data(m_bullet_x - 1, m_bullet_y, 0);//销毁土墙
			m_draw_obj.show_char(m_bullet_x - 1, m_bullet_y, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) != 0)//碰撞坦克或子弹
		{
			///////////////////////////////以下为tank减血功能
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) == i + tank0_data)//子弹碰坦克
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//分数增加
						tank_arr[i].set_blood(t_blood);//血量减少
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) ==tank0_data)//子弹碰坦克
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//血量减少
				}
				if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) == tank1_data)//子弹碰坦克
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//血量减少
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x - 1, m_bullet_y) == map_boss_data)
		{
			tank_arr[0].set_defeated();//游戏失败
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
		}
		else
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_x--;
			m_bullet_erase_print(p_map_obj, op_write);
		}
	}
	if (m_bullet_dir == dir_right)
	{
		if (p_map_obj->get_map_data(m_bullet_x + 1, m_bullet_y) == map_iron_data)//碰撞钢墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x + 1, m_bullet_y) == map_soil_data)//碰撞土墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			p_map_obj->set_map_data(m_bullet_x + 1, m_bullet_y, 0);//销毁土墙
			m_draw_obj.show_char(m_bullet_x + 1, m_bullet_y, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) != 0)//碰撞坦克或子弹
		{
			///////////////////////////////以下为tank减血功能
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) == i + tank0_data)//子弹碰坦克
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//分数增加
						tank_arr[i].set_blood(t_blood);//血量减少
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) == tank0_data)//子弹碰坦克
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//血量减少
				}
				if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) == tank1_data)//子弹碰坦克
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//血量减少
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x + 1, m_bullet_y) == map_boss_data)
		{
			tank_arr[0].set_defeated();//游戏失败
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
		}
		else
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_x++;
			m_bullet_erase_print(p_map_obj, op_write);
		}
	}
	if (m_bullet_dir == dir_up)
	{
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y - 1) == map_iron_data)//碰撞钢墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y - 1) == map_soil_data)//碰撞土墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			p_map_obj->set_map_data(m_bullet_x, m_bullet_y - 1, 0);//销毁土墙
			m_draw_obj.show_char(m_bullet_x, m_bullet_y - 1, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y - 1) != 0)//碰撞坦克或子弹
		{
			///////////////////////////////以下为tank减血功能
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y-1) == i + tank0_data)//子弹碰坦克
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//分数增加
						tank_arr[i].set_blood(t_blood);//血量减少
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y-1) == tank0_data)//子弹碰坦克
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//血量减少
				}
				if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y-1) == tank1_data)//子弹碰坦克
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//血量减少
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y - 1) == map_boss_data)
		{
			tank_arr[0].set_defeated();//游戏失败
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
		}
		else
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_y--;
			m_bullet_erase_print(p_map_obj, op_write);
		}
	}
	if (m_bullet_dir == dir_down)
	{
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y + 1) == map_iron_data)//碰撞钢墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y + 1) == map_soil_data)//碰撞土墙
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			p_map_obj->set_map_data(m_bullet_x, m_bullet_y + 1, 0);//销毁土墙
			m_draw_obj.show_char(m_bullet_x, m_bullet_y + 1, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y + 1) != 0)//碰撞坦克或子弹
		{
			///////////////////////////////以下为tank减血功能
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y+1) == i + tank0_data)//子弹碰坦克
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//分数增加
						tank_arr[i].set_blood(t_blood);//血量减少
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x , m_bullet_y+1) == tank0_data)//子弹碰坦克
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//血量减少
				}
				if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y+1) == tank1_data)//子弹碰坦克
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//血量减少
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y + 1) == map_boss_data)
		{
			tank_arr[0].set_defeated();//游戏失败
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//销毁子弹
		}
		else
		{
			m_bullet_erase_print(p_map_obj, op_erase);//擦除现有子弹
			m_bullet_y++;//坐标移动
			m_bullet_erase_print(p_map_obj, op_write);//打印新子弹
		}
	}
}
void Bullet::m_bullet_init(Map* p_map_obj, int x, int y, int dir, int source)
{
	if (p_map_obj->get_map_data(x, y) == map_iron_data)//初始位置在钢墙
	{
		return;
	}
	if (p_map_obj->get_map_data(x, y) == map_soil_data)//初始位置在土墙
	{
		p_map_obj->set_map_data(x, y, 0);//销毁土墙
		m_draw_obj.show_char(x, y, "  ");
		return;
	}
	if (p_map_obj->get_tank_data(x, y) == bullet_data)//初始位置在子弹
	{
		p_map_obj->set_tank_data(x, y, 0);
		return;
	}
	for (int i = 0;i < TANK_CNT;i++)
	{
		if (p_map_obj->get_tank_data(x, y) == i + tank0_data)//初始位置在坦克
		{
			return;
		}
	}
	if (p_map_obj->get_map_data(x, y) == map_boss_data)//初始位置在BOSS
	{
		while (1)
		{
			//死亡界面
		}
	}
	else
	{
		m_bullet_x = x;
		m_bullet_y = y;
		m_bullet_dir = dir;
		p_map_obj->set_tank_data(x, y, bullet_data);
		m_bullet_source = source;
		if (p_map_obj->get_map_data(x, y) == map_grass_data)
		{
			m_draw_obj.show_char(x, y,"■" ,GREEN);
		}
		else
		{
			m_draw_obj.show_char(x, y, m_bullet_shape);
		}
	}
}
int Bullet::get_bullet_life()
{
	return m_bullet_life;
}
void Bullet::set_bullet_life(int val)
{
	m_bullet_life = val;
}
/////////////////////////////////////////
int Game::key_down_p1_event()
{
	if (KEY_DOWN('W'))
		return dir_up;
	if (KEY_DOWN('S'))
		return dir_down;
	if (KEY_DOWN('A'))
		return dir_left;
	if (KEY_DOWN('D'))
		return dir_right;
	if (KEY_DOWN('G'))
		return bullet_fire;
	return -1;
}
int Game::key_down_p2_event()
{
	if (KEY_DOWN(VK_UP))
		return dir_up;
	if (KEY_DOWN(VK_DOWN))
		return dir_down;
	if (KEY_DOWN(VK_LEFT))
		return dir_left;
	if (KEY_DOWN(VK_RIGHT))
		return dir_right;
	if (KEY_DOWN('L'))
		return bullet_fire;
	return -1;
}
void Game::run_start_menu()//创建开始菜单
{
	draw_obj.draw_start_itf();//显示界面
	while (1)
	{
		m_is_edit_mod = 0;//非编辑模式
		int color = WHITE;
		HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
		INPUT_RECORD stcRecord = { 0 };
		DWORD dwRead;
		SetConsoleMode(hstdin, ENABLE_MOUSE_INPUT);
		ReadConsoleInput(hstdin, &stcRecord, 1, &dwRead);
		MOUSE_EVENT_RECORD mer = stcRecord.Event.MouseEvent;
		if (mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
		{
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 11)//
			{
				draw_obj.draw_choose_single();//选择单人模式
				set_game_mode(m_single);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 10)//
			{
				draw_obj.draw_choose_double();//选择双人模式
				set_game_mode(m_double);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 8)//
			{
				draw_obj.draw_choose_easy();//选择简单模式
				set_game_difficulty(m_easy);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 7)//
			{
				draw_obj.draw_choose_difficult();//选择困难模式
				set_game_difficulty(m_difficult);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 4)//新游戏
			{
					system("cls");
					m_game_init(game_mode, game_difficulty, 1);//初始化载入地图1
					run_game1(1);//运行
					if (Tank::m_scores == 5)
					{
						m_game_init(game_mode, game_difficulty, 2);//初始化载入地图2
						run_game1(2);//运行
					}
					if (Tank::m_scores == 10)
					{
						m_game_init(game_mode, game_difficulty, 3);//初始化载入地图2
						run_game1(3);//运行
						draw_obj.draw_win_itf();
						Sleep(2000);
						system("cls");
						draw_obj.draw_start_itf();
						Tank::m_scores = 0;
					}
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2)//编辑
			{
				system("cls");
				//gameframe_init(map_obj);
				map_edit(map_obj);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 2)//读档
			{
				system("cls");
				load_data();//载入数据
				map_init(map_obj, 0);//参数0，表示读取文件中的map_obj数据
				draw_obj.draw_rungame_itf(game_mode);
				if (Tank::m_scores < 5)
				{
					run_game1(1);//运行图1
					if (Tank::m_scores == 5)
					{
						m_game_init(game_mode, game_difficulty, 2);//初始化载入地图2
						run_game1(2);//运行
					}
					if (Tank::m_scores == 10)
					{
						m_game_init(game_mode, game_difficulty, 3);//初始化载入地图2
						run_game1(3);//运行
						draw_obj.draw_win_itf();
						Sleep(2000);
						system("cls");
						draw_obj.draw_start_itf();
						Tank::m_scores = 0;
					}
				}
				else if (Tank::m_scores >= 5 && Tank::m_scores < 10)
				{
					run_game1(2);//运行图2
					if (Tank::m_scores == 10)
					{
						m_game_init(game_mode, game_difficulty, 3);//初始化载入地图2
						run_game1(3);//运行
						draw_obj.draw_win_itf();
						Sleep(2000);
						system("cls");
						draw_obj.draw_start_itf();
						Tank::m_scores = 0;
					}
				}
				else if (Tank::m_scores < 15 && Tank::m_scores >= 10)
				{
					run_game1(3);//运行图2
					draw_obj.draw_win_itf();
					Sleep(2000);
					system("cls");
					draw_obj.draw_start_itf();
					Tank::m_scores = 0;
				}
			}
		}
	}
}
void Game::map_edit(Map& map_obj)//地图编辑
{
	map_obj.data_init();//清楚前面的数据
	int color = WHITE;
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD stcRecord = { 0 };
	DWORD dwRead;
	SetConsoleMode(hstdin, ENABLE_MOUSE_INPUT);
	draw_obj.draw_edit_itf();//打印编辑地图操作栏
	gameframe_init(map_obj);//打印框架
	m_is_edit_mod = 1;//设置编辑模式为1;
	while (1)
	{
		ReadConsoleInput(hstdin, &stcRecord, 1, &dwRead);
		MOUSE_EVENT_RECORD mer = stcRecord.Event.MouseEvent;
		if (mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)                                       //鼠标左键单击事件
		{
			if (mer.dwMousePosition.X / 2 > 0 && mer.dwMousePosition.X / 2 < LEN - 1 &&              //判断画图边界
				mer.dwMousePosition.Y > 0 && mer.dwMousePosition.Y < HIGH - 1)
			{
				draw_obj.show_char(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, "■", color);
				if (color == WHITE)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_iron_data);//每画上一个点将数据写入map数组
				}
				if (color == YELLOW)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_soil_data);//每画上一个点将数据写入map数组
				}
				if (color == GREEN)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_grass_data);//每画上一个点将数据写入map数组
				}
				if (color == BLUE)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_river_data);//每画上一个点将数据写入map数组
				}
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 2)
			{
				color = WHITE;
				draw_obj.draw_choose_iron();
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 4)
			{
				color = YELLOW;
				draw_obj.draw_choose_soil();
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 6)
			{
				color = GREEN;
				draw_obj.draw_choose_grass();
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 8)
			{
				color = BLUE;
				draw_obj.draw_choose_river();
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 11)//开始
			{
				if (get_game_mode() == 0)
				{
					m_game_init(game_mode, game_difficulty,0);
					run_game1(1);
					draw_obj.draw_win_itf();
					Sleep(2000);
					system("cls");
					draw_obj.draw_start_itf();
					Tank::m_scores = 0;
				}
				break;
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 12)//保存
			{
				save_map();
				draw_obj.show_char(LEN + 5, HIGH / 3 + 12, "保存成功！", YELLOW);
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 13)//返回首页
			{
				system("cls");
				draw_obj.draw_start_itf();//显示界面
				break;
			}
		}
		else if (mer.dwButtonState == RIGHTMOST_BUTTON_PRESSED)
		{
			if (mer.dwMousePosition.X / 2 > 0 && mer.dwMousePosition.X / 2 < LEN - 1 &&
				mer.dwMousePosition.Y > 0 && mer.dwMousePosition.Y < HIGH - 1)
			{
				draw_obj.show_char(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, "  ");
				map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, 0);
			}
		}
	}
}
int Game::get_game_mode()//获取模式
{
	return game_mode;
}
void Game::set_game_mode(int n_mode)//设置模式
{
	game_mode = n_mode;
}
int Game::get_game_difficulty()//获取模式
{
	return game_difficulty;
}
void Game::set_game_difficulty(int n_difc)//设置模式
{
	game_difficulty = n_difc;
}
void Game::gameframe_init(Map& map_obj)//游戏基本框架初始化//即游戏地图初始化
{
	for (int i = 0;i < LEN;i++)//画出边界墙
	{
		for (int j = 0;j < HIGH;j++)
		{
			if (i == 0 || j == 0 || i == LEN - 1 || j == HIGH - 1)
			{
				draw_obj.show_char(i, j, "■");
				//p_map_obj->get_map_data[i][j] = map_iron_data;//填充p_map_obj->get_map_data中相应坐标数据
				map_obj.set_map_data(i, j, map_iron_data);//填充p_map_obj->get_map_data中相应坐标数据
			}
			else
			{
				draw_obj.show_char(i, j, "  ");
			}
		}
	}
	for (int i = HIGH - 5;i < HIGH - 1;i++)//画出总部
	{
		if (i <= HIGH - 4)
		{
			for (int j = LEN / 2 - 3;j < LEN / 2 + 3;j++)
			{
				draw_obj.show_char(j, i, "■", YELLOW);
				map_obj.set_map_data(j, i, map_soil_data);//填充p_map_obj->get_map_data中相应坐标数据
			}
		}
		else
		{
			for (int j = LEN / 2 - 3;j < LEN / 2 + 3;j++)//与控制台最下方中间创建总部及周围的保护墙
			{
				if (j < LEN / 2 - 1 || j>LEN / 2)
				{
					draw_obj.show_char(j, i, "■", YELLOW);
					map_obj.set_map_data(j, i, map_soil_data);//填充p_map_obj->get_map_data中相应坐标数据
				}
				else
				{
					draw_obj.show_char(j, i, "☆", BOSS_COLOR);
					map_obj.set_map_data(j, i, map_boss_data);//填充p_map_obj->get_map_data中相应坐标数据
				}
			}
		}
	}


	//for (int i = 0;i < LEN;i++)//画出边界墙
	//{
	//	for (int j = 0;j < HIGH;j++)
	//	{
}
void Game::map_init(Map& map_obj,int map_num)
{
	if (map_num != 0)//map_num==0为读取存档//不为0为读取不同等级地图文档
	{
		load_nlev_map_data(map_num);
	}
	for (int i = 0;i < LEN;i++)//画出边界墙
	{
		for (int j = 0;j < HIGH;j++)
		{
			if (map_obj.get_map_data(i, j) == map_iron_data)
			{
				draw_obj.show_char(i, j, "■");
			}
			if (map_obj.get_map_data(i, j) == map_grass_data)
			{
				draw_obj.show_char(i, j, "■", GREEN);
			}
			if (map_obj.get_map_data(i, j) == map_river_data)
			{
				draw_obj.show_char(i, j, "■", BLUE);
			}
			if (map_obj.get_map_data(i, j) == map_soil_data)
			{
				draw_obj.show_char(i, j, "■", YELLOW);
			}
			if (map_obj.get_map_data(i, j) == map_boss_data)
			{
				draw_obj.show_char(i, j, "☆", BOSS_COLOR);
			}
			if (map_obj.get_tank_data(i, j) == tank0_data)
			{
				draw_obj.show_char(i, j, "■", P1_COLOR);
			}
		}
	}

}
void Game::m_game_init(int mode, int difficulty,int num)
{
	if (!m_is_edit_mod)//如果不是是编辑模式
	{
		map_obj.data_init();//
		//gameframe_init(map_obj);//初始化框架//用于画地图
		map_init(map_obj, num);
	}
	if (difficulty == m_easy)
	{
		if (mode == m_single)
		{
			draw_obj.draw_rungame_itf(m_single);
			m_p1_life = P_LIFE;
			m_tank_arr[0].set_p_map_obj(&map_obj);
			m_tank_arr[0].easy_mode_tank_init(tank0_data);
			for (int i = 2;i < TANK_CNT;i++)
			{
				m_tank_arr[i].set_p_map_obj(&map_obj);
				m_tank_arr[i].easy_mode_tank_init(i + tank0_data);//下标+tank0_data转换为坦克数据;
			}
		}
		if (mode == m_double)
		{
			draw_obj.draw_rungame_itf(m_double);
			m_p1_life = P_LIFE;
			m_p2_life = P_LIFE;
			m_tank_arr[0].set_p_map_obj(&map_obj);
			m_tank_arr[0].easy_mode_tank_init(tank0_data);
			m_tank_arr[1].set_p_map_obj(&map_obj);
			m_tank_arr[1].easy_mode_tank_init(tank1_data);
			for (int i = 2;i < TANK_CNT;i++)
			{
				m_tank_arr[i].set_p_map_obj(&map_obj);
				m_tank_arr[i].easy_mode_tank_init(i + tank0_data);//下标+tank0_data转换为坦克数据;
			}
		}
	}
}
void Game::m_p1_run(time_t& run_time, time_t& start_time, int& move_dir)
{
	static time_t die_time;//死亡时间保持不变
	run_time = clock();
	if (m_tank_arr[0].get_blood() == 0)
	{
		if (m_tank_arr[0].get_m_tank_life() == 1)//如果血量为0,生命为1则置死记录死亡时间
		{
			m_tank_arr[0].erase_and_print(op_erase);//坦克死亡清楚数据及图像
			m_tank_arr[0].mod_tank_data(op_erase);//
			m_tank_arr[0].set_m_tank_life(0);//置死
			m_p1_life--;
			die_time = clock();//记录死亡时间
		}
		if (run_time - die_time > REC_TIME)//到达重生时间
		{
			m_tank_arr[0].easy_mode_tank_init(tank0_data);//初始化新的第0个坦克
		}
	}
	if (run_time - start_time > P1_SPEED)
	{
		start_time = clock();
		move_dir = key_down_p1_event();//接收P1移动方向
		m_tank_arr[0].tank_move_astep(&map_obj, m_vecBullet_obj, move_dir, 0);
	}
}
void Game::m_p2_run(time_t& run_time, time_t& start_time,int& move_dir)
{
	static time_t die_time;//死亡时间保持不变
	run_time = clock();
	if (m_tank_arr[1].get_blood() == 0)
	{
		if (m_tank_arr[1].get_m_tank_life() == 1)//如果血量为0,生命为1则置死记录死亡时间
		{
			m_tank_arr[1].erase_and_print(op_erase);//坦克死亡清楚数据及图像
			m_tank_arr[1].mod_tank_data(op_erase);//
			m_tank_arr[1].set_m_tank_life(0);//置死
			m_p2_life--;
			die_time = clock();//记录死亡时间
		}
		if (run_time - die_time > REC_TIME)//到达重生时间
		{
			m_tank_arr[1].easy_mode_tank_init(tank1_data);//初始化新的第1个坦克
		}
	}
	if (run_time - start_time > P1_SPEED)
	{
		start_time = clock();
		move_dir = key_down_p2_event();//接收P1移动方向
		m_tank_arr[1].tank_move_astep(&map_obj, m_vecBullet_obj, move_dir, 1);
	}
}
void Game::m_enemy_run(time_t* run_time, time_t* start_time, int* move_dir)
{
	static time_t die_time[TANK_CNT];//死亡时间保持不变
	for (int i = 2;i < TANK_CNT;i++)//第三个到第八个坦克为敌方坦克
	{
		run_time[i] = clock();
		if (m_tank_arr[i].get_blood() == 0)
		{
			if (m_tank_arr[i].get_m_tank_life() == 1)//如果血量为0,生命为1则置死记录死亡时间
			{
				m_tank_arr[i].erase_and_print(op_erase);//坦克死亡清楚数据及图像
				m_tank_arr[i].mod_tank_data(op_erase);//
				m_tank_arr[i].set_m_tank_life(0);//置死
				die_time[i] = clock();//记录死亡时间
			}
			if (run_time[i] - die_time[i] > REC_TIME)//到达重生时间
			{
				m_tank_arr[i].easy_mode_tank_init(tank0_data + i);//初始化新的第i个坦克
			}
		}
		if (m_tank_arr[i].get_blood() > 0)
		{
			move_dir[i] = rand() % 5;
			run_time[i] = clock();
			if (i > 4)
			{
				if (run_time[i] - start_time[i] > ENEMY_SPEED1)
				{
					start_time[i] = clock();
					m_tank_arr[i].tank_move_astep(&map_obj, m_vecBullet_obj, move_dir[i], i);
				}
			}
			else
			{
				if (run_time[i] - start_time[i] > ENEMY_SPEED2)
				{
					start_time[i] = clock();
					m_tank_arr[i].tank_move_astep(&map_obj, m_vecBullet_obj, move_dir[i], i);
				}
			}
		}

	}
}
void Game::m_bullet_run(time_t& bullet_run_time, time_t& bullet_start_time)
{
	bullet_run_time = clock();
	if (bullet_run_time - bullet_start_time > BULLET_SPEED)
	{
		bullet_start_time = clock();
		for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)
		{
			if (m_vecBullet_obj[i].get_bullet_life() != 0)//子弹为活着的时候运行
			{
				m_vecBullet_obj[i].m_bullet_move(&map_obj, m_tank_arr);
			}
			if (m_vecBullet_obj[i].get_bullet_life() == 0)
			{
				m_vecBullet_obj.erase(m_vecBullet_obj.begin() + i);
			}
		}
	}
}
void Game::savegame()//保存游戏
{
	FILE* pfile = NULL;
	fopen_s(&pfile, "save.txt", "wb");
	fwrite(&m_p1_life,sizeof(int),1, pfile);
	fwrite(&m_p2_life, sizeof(int), 1, pfile);
	fwrite(&game_mode, sizeof(int), 1, pfile);
	fwrite(&game_difficulty, sizeof(int), 1, pfile);
	fwrite(&m_is_edit_mod, sizeof(int), 1, pfile);
	fwrite(&Tank::m_scores, sizeof(int), 1, pfile);
	fwrite(&Tank::m_if_defeated, sizeof(int), 1, pfile);
	fwrite(&m_tank_arr[0], sizeof(m_tank_arr), 1, pfile);
	fwrite(&map_obj, sizeof(map_obj), 1, pfile);
	fclose(pfile);
}
void Game::load_data()//载入游戏
{
	FILE* pfile = NULL;
	fopen_s(&pfile, "save.txt", "rb");
	fread(&m_p1_life, sizeof(int), 1, pfile);
	fread(&m_p2_life, sizeof(int), 1, pfile);
	fread(&game_mode, sizeof(int), 1, pfile);
	fread(&game_difficulty, sizeof(int), 1, pfile);
	fread(&m_is_edit_mod, sizeof(int), 1, pfile);
	fread(&Tank::m_scores, sizeof(int), 1, pfile);
	fread(&Tank::m_if_defeated, sizeof(int), 1, pfile);
	fread(&m_tank_arr[0], sizeof(m_tank_arr), 1, pfile);
	fread(&map_obj, sizeof(map_obj), 1, pfile);
	fclose(pfile);
}
void Game::save_map()
{
	FILE* pfile = NULL;
	fopen_s(&pfile, "编辑版本.txt", "wb");
	fwrite(&map_obj, sizeof(map_obj), 1, pfile);
	fclose(pfile);
}
void Game::load_nlev_map_data(int map_num)//载入地图数据
{
	FILE* pfile = NULL;
	
	if (map_num == 1)
	{
		fopen_s(&pfile, "first_map.txt", "rb");
		fread(&map_obj, sizeof(map_obj), 1, pfile);
	}
	if (map_num == 2)
	{
		fopen_s(&pfile, "secend_map.txt", "rb");
		fread(&map_obj, sizeof(map_obj), 1, pfile);
	}
	if (map_num == 3)
	{
		fopen_s(&pfile, "third_map.txt", "rb");
		fread(&map_obj, sizeof(map_obj), 1, pfile);
	}
	fclose(pfile);
}
void Game::run_game1(int num)
{
	time_t start_time[TANK_CNT] = { clock() };
	time_t run_time[TANK_CNT];//控制坦克速度
	time_t bullet_start_time = clock();//控制子弹速度
	time_t bullet_run_time;
	int move_dir[TANK_CNT];
	srand(clock());//随机种子，精度为ms
	while (1)
	{
		Tank::m_if_defeated = 0;
		int if_saved = 0;
		int if_return = 0;//标记是否退出循环
		draw_obj.draw_p1_state(m_tank_arr[0].get_blood(), m_tank_arr[0].get_scores(), m_p1_life);
		m_p1_run(run_time[0], start_time[0], move_dir[0]);
		if (game_mode == m_double)
		{
			draw_obj.draw_p2_state(m_tank_arr[1].get_blood(), m_tank_arr[1].get_scores(), m_p2_life);
			m_p2_run(run_time[1], start_time[1], move_dir[1]);
		}
		m_enemy_run(run_time, start_time, move_dir);
		m_bullet_run(bullet_run_time, bullet_start_time);
		if (KEY_DOWN('P'))//按P保存游戏
		{
			savegame();
			draw_obj.draw_saved_itf();//保存成功页面
			Sleep(50);
			system("cls");
			draw_obj.draw_start_itf();//画出开始界面
			break;
		}
		if (game_mode == m_single)
		{
			if (m_p1_life == 0)//p1死掉
			{
				m_tank_arr[0].erase_and_print(op_erase);//擦除图像
				m_tank_arr[0].mod_tank_data(op_erase);//擦除数据
				draw_obj.draw_gameover_itf();
				while (1)
				{
					char ckey = 0;
					ckey = _getch();
					if (ckey == 'y')
					{
						if_return = 1;//要返回
						break;
					}
				}
			}
		}
		if (game_mode == m_double)
		{
			if (m_p1_life == 0)//p1死掉
			{
				m_tank_arr[0].erase_and_print(op_erase);//擦除图像
				m_tank_arr[0].mod_tank_data(op_erase);//擦除数据
			}
			if (m_p2_life == 0)//p2死掉
			{
				m_tank_arr[1].erase_and_print(op_erase);//擦除图像
				m_tank_arr[1].mod_tank_data(op_erase);//擦除数据
			}
			if (m_p1_life == 0 && m_p2_life == 0)
			{
				draw_obj.draw_gameover_itf();
				while (1)
				{
					char ckey = 0;
					ckey = _getch();
					if (ckey == 'y')
					{
						if_return = 1;//要返回
						break;
					}
				}
			}
		}
		if (m_p1_life == 0 && m_p2_life == 0)//都死掉则游戏结束
		{
			draw_obj.draw_gameover_itf();
			while (1)
			{
				char ckey = 0;
				ckey = _getch();
				if (ckey == 'y')
				{
					if_return = 1;//要返回
					break;
				}
			}
		}
		if (Tank::m_if_defeated == 1)//总部死掉/游戏失败
		{
			draw_obj.draw_gameover_itf();
			while (1)
			{
				char ckey = 0;
				ckey = _getch();
				if (ckey == 'y')
				{
					if_return = 1;
					break;
				}
			}
		}

		if (if_return == 1)//确认退出
		{
			system("cls");
			draw_obj.draw_start_itf();//画出开始界面
			for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//清空子弹数据
			{
				if (m_vecBullet_obj[i].get_bullet_life() > 0)
				{
					m_vecBullet_obj[i].set_bullet_life(0);
				}
			}
			m_vecBullet_obj.clear();
			break;//进去开始界面循环
		}
		if (num == 1)
		{

			if (Tank::m_scores == 5)
			{
				system("cls");
				for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//清空子弹数据
				{
					if (m_vecBullet_obj[i].get_bullet_life() > 0)
					{
						m_vecBullet_obj[i].set_bullet_life(0);
					}
				}
				m_vecBullet_obj.clear();
				break;//进入下一关
			}
		}
		if (num == 2)
		{
			if (Tank::m_scores == 10)
			{
				system("cls");
				for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//清空子弹数据
				{
					if (m_vecBullet_obj[i].get_bullet_life() > 0)
					{
						m_vecBullet_obj[i].set_bullet_life(0);
					}
				}
				m_vecBullet_obj.clear();
				break;//进入下一关
			}
		}
		if (num == 3)
		{
			if (Tank::m_scores == 15)
			{
				system("cls");
				for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//清空子弹数据
				{
					if (m_vecBullet_obj[i].get_bullet_life() > 0)
					{
						m_vecBullet_obj[i].set_bullet_life(0);
					}
				}
				m_vecBullet_obj.clear();
				break;//进入下一关
			}
		}

	}
}
void Game::run_game2()//噩梦模式
{}
