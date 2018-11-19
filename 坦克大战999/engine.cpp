#include"engine.h"
int Tank::m_scores = 0;//tank�ྲ̬����
int Tank::m_if_defeated = 0;//tank�ྲ̬���� �Ƿ���Ϸʧ��
void Tank::erase_and_print(int op)
{
	if (m_dir ==dir_left )
	{
		if (p_map_obj->get_map_data(m_x, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y - 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y - 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y + 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y + 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y + 1, "��", m_color);
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
			m_draw_obj.show_char(m_x, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x+1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x+1, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y-1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y-1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y - 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y+1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y+1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y + 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "��", m_color);
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
			m_draw_obj.show_char(m_x, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x, m_y - 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y - 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y + 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x + 1, m_y + 1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y + 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y + 1, "��", m_color);
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
			m_draw_obj.show_char(m_x, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x,m_y+1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x, m_y+1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x, m_y + 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x-1,m_y)== map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x-1,m_y-1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x - 1, m_y - 1, "��",GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x - 1, m_y - 1, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x+1,m_y) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y, "  ");
			}
		}
		if (p_map_obj->get_map_data(m_x+1,m_y-1) == map_grass_data)
		{
			m_draw_obj.show_char(m_x + 1, m_y - 1, "��", GREEN);
		}
		else
		{
			if (op == op_write)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "��", m_color);
			}
			if (op == op_erase)
			{
				m_draw_obj.show_char(m_x + 1, m_y - 1, "  ");
			}
		}
	}
}
void Tank::mod_tank_data(int op)//���ݷ���̹��6����д����߲���
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
			p_map_obj->get_map_data(m_x - 1, m_y - 1) == map_river_data)//�ж���ײ��ǽ����ǽ������
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//̹��ÿһ����̹���������Ĵ洢���ݷֱ���200-208������ֱ�Ӹ����±��ж�
		{
			if (m_tank_save_data != i + tank0_data)//��ǰ̹��Ϊi��������˸�̹�˵Ĵ洢λ�ñȽϿ��Ƿ���ײ
			{
				if (p_map_obj->get_tank_data(m_x, m_y - 2) == tank0_data + i ||               //̹��ͷ��ײ
					p_map_obj->get_tank_data(m_x + 1, m_y - 1) == tank0_data + i || 	    //̹���Ҽ���ײ
					p_map_obj->get_tank_data(m_x - 1, m_y - 1) == tank0_data + i)			//�����ײ
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
			p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_river_data)//�ж���ײ��ǽ����ǽ������
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//̹��ÿһ����̹���������Ĵ洢���ݷֱ���200-208������ֱ�Ӹ����±��ж�
		{
			if (m_tank_save_data != i + tank0_data)//��ǰ̹��Ϊi������˸�̹�˵Ĵ洢λ�ñȽϿ��Ƿ���ײ
			{
				if (p_map_obj->get_tank_data(m_x, m_y + 2) == tank0_data + i ||         //̹��ͷ��ײ
					p_map_obj->get_tank_data(m_x + 1, m_y + 1) == tank0_data + i ||		//̹���Ҽ���ײ
					p_map_obj->get_tank_data(m_x - 1, m_y + 1) == tank0_data + i)		//�����ײ
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
			p_map_obj->get_map_data(m_x - 1, m_y + 1) == map_river_data)//�ж���ײ��ǽ����ǽ������
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//̹��ÿһ����̹���������Ĵ洢���ݷֱ���200-208������ֱ�Ӹ����±��ж�
		{
			if (m_tank_save_data != i + tank0_data)//��ǰ̹��Ϊi��������˸�̹�˵Ĵ洢λ�ñȽϿ��Ƿ���ײ
			{
				if (p_map_obj->get_tank_data(m_x - 2, m_y) == tank0_data + i ||               //̹��ͷ��ײ
					p_map_obj->get_tank_data(m_x - 1, m_y - 1) == tank0_data + i || 	    //̹���Ҽ���ײ
					p_map_obj->get_tank_data(m_x - 1, m_y + 1) == tank0_data + i)			//�����ײ
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
			p_map_obj->get_map_data(m_x + 1, m_y - 1) == map_river_data)//�ж���ײ��ǽ����ǽ������
		{
			is_collision = 1;
		}
		for (int i = 0;i < TANK_CNT;i++)//̹��ÿһ����̹���������Ĵ洢���ݷֱ���200-208������ֱ�Ӹ����±��ж�
		{
			if (m_tank_save_data != i + tank0_data)//��ǰ̹��Ϊi��������˸�̹�˵Ĵ洢λ�ñȽϿ��Ƿ���ײ
			{
				if (p_map_obj->get_tank_data(m_x + 2, m_y) == tank0_data + i ||               //̹��ͷ��ײ
					p_map_obj->get_tank_data(m_x + 1, m_y + 1) == tank0_data + i || 	    //̹���Ҽ���ײ
					p_map_obj->get_tank_data(m_x + 1, m_y - 1) == tank0_data + i)			//�����ײ
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
	int is_collison = tank_collision(p_map_obj,move_dir,num);//�����Ƿ���ײ
	if (move_dir == dir_up)
	{
		if (!is_collison)//û����ײ
		{
			erase_and_print(op_erase);//��������̨ͼ��
			mod_tank_data(op_erase);//����̹������
			m_y--;//�����ƶ�
			m_dir = move_dir;
			erase_and_print(op_write);//��ӡ�¿���̨ͼ��
			mod_tank_data(op_write);//������̹������	
		}
	}
	if (move_dir == dir_down)
	{
		if (!is_collison)//û����ײ
		{
			erase_and_print(op_erase);//��������̨ͼ��
			mod_tank_data(op_erase);//����̹������
			m_y++;//�����ƶ�
			m_dir = move_dir;
			erase_and_print(op_write);//��ӡ�¿���̨ͼ��
			mod_tank_data(op_write);//������̹������
			//m_dir = move_dir;
		}
	}
	if (move_dir == dir_left)
	{
		if (!is_collison)//û����ײ
		{
			erase_and_print(op_erase);//��������̨ͼ��
			mod_tank_data(op_erase);//����̹������
			m_x--;//�����ƶ�
			m_dir = move_dir;
			erase_and_print(op_write);//��ӡ�¿���̨ͼ��
			mod_tank_data(op_write);//������̹������
			//m_dir = move_dir;
		}
	}
	if (move_dir == dir_right)
	{
		if (!is_collison)//û����ײ
		{
			erase_and_print(op_erase);//��������̨ͼ��
			mod_tank_data(op_erase);//����̹������
			m_x++;//�����ƶ�
			m_dir = move_dir;
			erase_and_print(op_write);//��ӡ�¿���̨ͼ��
			mod_tank_data(op_write);//������̹������
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
void Tank::easy_mode_tank_init(int tank_map_savedata)//��ģʽ̹�˳�ʼ��
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
		mod_tank_data(op_write);//����д��̹�˶�ά����
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
		mod_tank_data(op_write);//����д��̹�˶�ά����
	}
	if (tank_map_savedata > tank1_data)
	{
		int x;
		int y;
		int dir;
		int color;
		srand(clock());
		dir = rand() % 4;
		color = rand() % 3;//���������ɫ,������ɫ������ͬ�̶ȵĵз�̹��
		while (1)
		{
			x = rand() % (LEN - 5) + 2;
			y = rand() % (HIGH - 15) + 2;//̹�˳���λ�����ܲ��Ϸ�һ�������λ��
			int flag = 0;//�Ƿ�����ڴ���ص�
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
				//���ϴ����ǶԱ�̹�˳���6������λ���Ƿ����ͼ�ϰ��غ�/���غ�������
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//���Ƿ����ϰ���,�ӵ����غ�
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//�Ƚϳ�ʼ��̹�������е�̹���Ƿ��غ�
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200ֱ�Ӷ�Ӧ̹�˵Ĵ洢����
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
				if (flag == 0)//���û��,�˳���������ѭ��
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
				//���ϴ����ǶԱ�̹�˳���6������λ���Ƿ����ͼ�ϰ��غ�/���غ�������
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//���Ƿ����ϰ���,�ӵ����غ�
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//�Ƚϳ�ʼ��̹�������е�̹���Ƿ��غ�
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200ֱ�Ӷ�Ӧ̹�˵Ĵ洢����
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
				if (flag == 0)//���û��,�˳���������ѭ��
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
				//���ϴ����ǶԱ�̹�˳���6������λ���Ƿ����ͼ�ϰ��غ�/���غ�������
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//���Ƿ����ϰ���,�ӵ����غ�
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//�Ƚϳ�ʼ��̹�������е�̹���Ƿ��غ�
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200ֱ�Ӷ�Ӧ̹�˵Ĵ洢����
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
				if (flag == 0)//���û��,�˳���������ѭ��
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
				//���ϴ����ǶԱ�̹�˳���6������λ���Ƿ����ͼ�ϰ��غ�/���غ�������
				for (int i = 0;i < 6;i++)
				{
					if (m_map_data[i] == map_soil_data || m_map_data[i] == map_iron_data || m_map_data[i] == map_river_data ||
						m_map_data[i] == bullet_data)//���Ƿ����ϰ���,�ӵ����غ�
					{
						flag = 1;
						break;
					}
					for (int j = 0;j < TANK_CNT;j++)//�Ƚϳ�ʼ��̹�������е�̹���Ƿ��غ�
					{
						if (m_tankmap_data[i] == j + tank0_data)//i+200ֱ�Ӷ�Ӧ̹�˵Ĵ洢����
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
				if (flag == 0)//���û��,�˳���������ѭ��
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
		erase_and_print(op_write);//��ӡ̹��
		mod_tank_data(op_write);//����д��̹�˶�ά����
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
///////////////////////////////////////����˽������
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
void Bullet::m_bullet_erase_print(Map* p_map_obj,int op)//�ӵ���д
{
	if (op == op_write)
	{
		if ((p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == 0
			|| p_map_obj->get_map_data(m_bullet_x, m_bullet_y)==map_river_data)&&
			p_map_obj->get_tank_data(m_bullet_x, m_bullet_y)==0)//����ӵ�λ��Ϊ������յ�
		{
			if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == map_grass_data)//����ӵ�λ��Ϊgrass
			{
				p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, bullet_data);//ֻд�ӵ�����
			}
			else
			{
				m_draw_obj.show_char(m_bullet_x, m_bullet_y, m_bullet_shape);//��ӡ�ӵ�
				p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, bullet_data);//д�ӵ�����
			}
		}
	}
	if (op == op_erase)
	{
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == map_river_data)//����ӵ�λ��Ϊgrass
		{
			m_draw_obj.show_char(m_bullet_x, m_bullet_y, "��",BLUE);//�����ӵ�
			p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, 0);//���ӵ�����
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y) == map_grass_data)//����ǲݵ�ֻ������
		{
			p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, 0);//���ӵ�����
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
				m_draw_obj.show_char(m_bullet_x, m_bullet_y, "  ");//�����ӵ�ͼ��
				p_map_obj->set_tank_data(m_bullet_x, m_bullet_y, 0);//���ӵ�����
			}
		}
	}
}
void Bullet::m_bullet_move(Map* p_map_obj, Tank* tank_arr)
{
	if (m_bullet_dir == dir_left)
	{
		if (p_map_obj->get_map_data(m_bullet_x - 1, m_bullet_y) == map_iron_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x - 1, m_bullet_y) == map_soil_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			p_map_obj->set_map_data(m_bullet_x - 1, m_bullet_y, 0);//������ǽ
			m_draw_obj.show_char(m_bullet_x - 1, m_bullet_y, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) != 0)//��ײ̹�˻��ӵ�
		{
			///////////////////////////////����Ϊtank��Ѫ����
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) == i + tank0_data)//�ӵ���̹��
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//��������
						tank_arr[i].set_blood(t_blood);//Ѫ������
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) ==tank0_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//Ѫ������
				}
				if (p_map_obj->get_tank_data(m_bullet_x - 1, m_bullet_y) == tank1_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//Ѫ������
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x - 1, m_bullet_y) == map_boss_data)
		{
			tank_arr[0].set_defeated();//��Ϸʧ��
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
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
		if (p_map_obj->get_map_data(m_bullet_x + 1, m_bullet_y) == map_iron_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x + 1, m_bullet_y) == map_soil_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			p_map_obj->set_map_data(m_bullet_x + 1, m_bullet_y, 0);//������ǽ
			m_draw_obj.show_char(m_bullet_x + 1, m_bullet_y, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) != 0)//��ײ̹�˻��ӵ�
		{
			///////////////////////////////����Ϊtank��Ѫ����
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) == i + tank0_data)//�ӵ���̹��
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//��������
						tank_arr[i].set_blood(t_blood);//Ѫ������
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) == tank0_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//Ѫ������
				}
				if (p_map_obj->get_tank_data(m_bullet_x + 1, m_bullet_y) == tank1_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//Ѫ������
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x + 1, m_bullet_y) == map_boss_data)
		{
			tank_arr[0].set_defeated();//��Ϸʧ��
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
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
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y - 1) == map_iron_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y - 1) == map_soil_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			p_map_obj->set_map_data(m_bullet_x, m_bullet_y - 1, 0);//������ǽ
			m_draw_obj.show_char(m_bullet_x, m_bullet_y - 1, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y - 1) != 0)//��ײ̹�˻��ӵ�
		{
			///////////////////////////////����Ϊtank��Ѫ����
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y-1) == i + tank0_data)//�ӵ���̹��
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//��������
						tank_arr[i].set_blood(t_blood);//Ѫ������
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y-1) == tank0_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//Ѫ������
				}
				if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y-1) == tank1_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//Ѫ������
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y - 1) == map_boss_data)
		{
			tank_arr[0].set_defeated();//��Ϸʧ��
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
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
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y + 1) == map_iron_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y + 1) == map_soil_data)//��ײ��ǽ
		{
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			p_map_obj->set_map_data(m_bullet_x, m_bullet_y + 1, 0);//������ǽ
			m_draw_obj.show_char(m_bullet_x, m_bullet_y + 1, "  ");
			return;
		}
		if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y + 1) != 0)//��ײ̹�˻��ӵ�
		{
			///////////////////////////////����Ϊtank��Ѫ����
			if (m_bullet_source == p_source)
			{
				for (int i = 2;i < TANK_CNT;i++)
				{
					if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y+1) == i + tank0_data)//�ӵ���̹��
					{
						int t_blood = tank_arr[i].get_blood();
						int t_scores = tank_arr[i].get_scores();
						t_blood--;
						t_scores++;
						tank_arr[i].set_scores(t_scores);//��������
						tank_arr[i].set_blood(t_blood);//Ѫ������
					}
				}
			}
			if (m_bullet_source == enemy_source)
			{
				if (p_map_obj->get_tank_data(m_bullet_x , m_bullet_y+1) == tank0_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[0].get_blood();
					t_blood--;
					tank_arr[0].set_blood(t_blood);//Ѫ������
				}
				if (p_map_obj->get_tank_data(m_bullet_x, m_bullet_y+1) == tank1_data)//�ӵ���̹��
				{
					int t_blood = tank_arr[1].get_blood();
					t_blood--;
					tank_arr[1].set_blood(t_blood);//Ѫ������
				}
			}
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
			return;
		}
		if (p_map_obj->get_map_data(m_bullet_x, m_bullet_y + 1) == map_boss_data)
		{
			tank_arr[0].set_defeated();//��Ϸʧ��
			m_bullet_erase_print(p_map_obj, op_erase);
			m_bullet_life = 0;//�����ӵ�
		}
		else
		{
			m_bullet_erase_print(p_map_obj, op_erase);//���������ӵ�
			m_bullet_y++;//�����ƶ�
			m_bullet_erase_print(p_map_obj, op_write);//��ӡ���ӵ�
		}
	}
}
void Bullet::m_bullet_init(Map* p_map_obj, int x, int y, int dir, int source)
{
	if (p_map_obj->get_map_data(x, y) == map_iron_data)//��ʼλ���ڸ�ǽ
	{
		return;
	}
	if (p_map_obj->get_map_data(x, y) == map_soil_data)//��ʼλ������ǽ
	{
		p_map_obj->set_map_data(x, y, 0);//������ǽ
		m_draw_obj.show_char(x, y, "  ");
		return;
	}
	if (p_map_obj->get_tank_data(x, y) == bullet_data)//��ʼλ�����ӵ�
	{
		p_map_obj->set_tank_data(x, y, 0);
		return;
	}
	for (int i = 0;i < TANK_CNT;i++)
	{
		if (p_map_obj->get_tank_data(x, y) == i + tank0_data)//��ʼλ����̹��
		{
			return;
		}
	}
	if (p_map_obj->get_map_data(x, y) == map_boss_data)//��ʼλ����BOSS
	{
		while (1)
		{
			//��������
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
			m_draw_obj.show_char(x, y,"��" ,GREEN);
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
void Game::run_start_menu()//������ʼ�˵�
{
	draw_obj.draw_start_itf();//��ʾ����
	while (1)
	{
		m_is_edit_mod = 0;//�Ǳ༭ģʽ
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
				draw_obj.draw_choose_single();//ѡ����ģʽ
				set_game_mode(m_single);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 10)//
			{
				draw_obj.draw_choose_double();//ѡ��˫��ģʽ
				set_game_mode(m_double);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 8)//
			{
				draw_obj.draw_choose_easy();//ѡ���ģʽ
				set_game_difficulty(m_easy);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 7)//
			{
				draw_obj.draw_choose_difficult();//ѡ������ģʽ
				set_game_difficulty(m_difficult);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 4)//����Ϸ
			{
					system("cls");
					m_game_init(game_mode, game_difficulty, 1);//��ʼ�������ͼ1
					run_game1(1);//����
					if (Tank::m_scores == 5)
					{
						m_game_init(game_mode, game_difficulty, 2);//��ʼ�������ͼ2
						run_game1(2);//����
					}
					if (Tank::m_scores == 10)
					{
						m_game_init(game_mode, game_difficulty, 3);//��ʼ�������ͼ2
						run_game1(3);//����
						draw_obj.draw_win_itf();
						Sleep(2000);
						system("cls");
						draw_obj.draw_start_itf();
						Tank::m_scores = 0;
					}
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2)//�༭
			{
				system("cls");
				//gameframe_init(map_obj);
				map_edit(map_obj);
			}
			if (mer.dwMousePosition.X / 2 == LEN / 2 && mer.dwMousePosition.Y == HIGH / 2 - 2)//����
			{
				system("cls");
				load_data();//��������
				map_init(map_obj, 0);//����0����ʾ��ȡ�ļ��е�map_obj����
				draw_obj.draw_rungame_itf(game_mode);
				if (Tank::m_scores < 5)
				{
					run_game1(1);//����ͼ1
					if (Tank::m_scores == 5)
					{
						m_game_init(game_mode, game_difficulty, 2);//��ʼ�������ͼ2
						run_game1(2);//����
					}
					if (Tank::m_scores == 10)
					{
						m_game_init(game_mode, game_difficulty, 3);//��ʼ�������ͼ2
						run_game1(3);//����
						draw_obj.draw_win_itf();
						Sleep(2000);
						system("cls");
						draw_obj.draw_start_itf();
						Tank::m_scores = 0;
					}
				}
				else if (Tank::m_scores >= 5 && Tank::m_scores < 10)
				{
					run_game1(2);//����ͼ2
					if (Tank::m_scores == 10)
					{
						m_game_init(game_mode, game_difficulty, 3);//��ʼ�������ͼ2
						run_game1(3);//����
						draw_obj.draw_win_itf();
						Sleep(2000);
						system("cls");
						draw_obj.draw_start_itf();
						Tank::m_scores = 0;
					}
				}
				else if (Tank::m_scores < 15 && Tank::m_scores >= 10)
				{
					run_game1(3);//����ͼ2
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
void Game::map_edit(Map& map_obj)//��ͼ�༭
{
	map_obj.data_init();//���ǰ�������
	int color = WHITE;
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD stcRecord = { 0 };
	DWORD dwRead;
	SetConsoleMode(hstdin, ENABLE_MOUSE_INPUT);
	draw_obj.draw_edit_itf();//��ӡ�༭��ͼ������
	gameframe_init(map_obj);//��ӡ���
	m_is_edit_mod = 1;//���ñ༭ģʽΪ1;
	while (1)
	{
		ReadConsoleInput(hstdin, &stcRecord, 1, &dwRead);
		MOUSE_EVENT_RECORD mer = stcRecord.Event.MouseEvent;
		if (mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)                                       //�����������¼�
		{
			if (mer.dwMousePosition.X / 2 > 0 && mer.dwMousePosition.X / 2 < LEN - 1 &&              //�жϻ�ͼ�߽�
				mer.dwMousePosition.Y > 0 && mer.dwMousePosition.Y < HIGH - 1)
			{
				draw_obj.show_char(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, "��", color);
				if (color == WHITE)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_iron_data);//ÿ����һ���㽫����д��map����
				}
				if (color == YELLOW)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_soil_data);//ÿ����һ���㽫����д��map����
				}
				if (color == GREEN)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_grass_data);//ÿ����һ���㽫����д��map����
				}
				if (color == BLUE)
				{
					map_obj.set_map_data(mer.dwMousePosition.X / 2, mer.dwMousePosition.Y, map_river_data);//ÿ����һ���㽫����д��map����
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
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 11)//��ʼ
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
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 12)//����
			{
				save_map();
				draw_obj.show_char(LEN + 5, HIGH / 3 + 12, "����ɹ���", YELLOW);
			}
			if (mer.dwMousePosition.X / 2 == LEN && mer.dwMousePosition.Y == HIGH / 2 + 13)//������ҳ
			{
				system("cls");
				draw_obj.draw_start_itf();//��ʾ����
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
int Game::get_game_mode()//��ȡģʽ
{
	return game_mode;
}
void Game::set_game_mode(int n_mode)//����ģʽ
{
	game_mode = n_mode;
}
int Game::get_game_difficulty()//��ȡģʽ
{
	return game_difficulty;
}
void Game::set_game_difficulty(int n_difc)//����ģʽ
{
	game_difficulty = n_difc;
}
void Game::gameframe_init(Map& map_obj)//��Ϸ������ܳ�ʼ��//����Ϸ��ͼ��ʼ��
{
	for (int i = 0;i < LEN;i++)//�����߽�ǽ
	{
		for (int j = 0;j < HIGH;j++)
		{
			if (i == 0 || j == 0 || i == LEN - 1 || j == HIGH - 1)
			{
				draw_obj.show_char(i, j, "��");
				//p_map_obj->get_map_data[i][j] = map_iron_data;//���p_map_obj->get_map_data����Ӧ��������
				map_obj.set_map_data(i, j, map_iron_data);//���p_map_obj->get_map_data����Ӧ��������
			}
			else
			{
				draw_obj.show_char(i, j, "  ");
			}
		}
	}
	for (int i = HIGH - 5;i < HIGH - 1;i++)//�����ܲ�
	{
		if (i <= HIGH - 4)
		{
			for (int j = LEN / 2 - 3;j < LEN / 2 + 3;j++)
			{
				draw_obj.show_char(j, i, "��", YELLOW);
				map_obj.set_map_data(j, i, map_soil_data);//���p_map_obj->get_map_data����Ӧ��������
			}
		}
		else
		{
			for (int j = LEN / 2 - 3;j < LEN / 2 + 3;j++)//�����̨���·��м䴴���ܲ�����Χ�ı���ǽ
			{
				if (j < LEN / 2 - 1 || j>LEN / 2)
				{
					draw_obj.show_char(j, i, "��", YELLOW);
					map_obj.set_map_data(j, i, map_soil_data);//���p_map_obj->get_map_data����Ӧ��������
				}
				else
				{
					draw_obj.show_char(j, i, "��", BOSS_COLOR);
					map_obj.set_map_data(j, i, map_boss_data);//���p_map_obj->get_map_data����Ӧ��������
				}
			}
		}
	}


	//for (int i = 0;i < LEN;i++)//�����߽�ǽ
	//{
	//	for (int j = 0;j < HIGH;j++)
	//	{
}
void Game::map_init(Map& map_obj,int map_num)
{
	if (map_num != 0)//map_num==0Ϊ��ȡ�浵//��Ϊ0Ϊ��ȡ��ͬ�ȼ���ͼ�ĵ�
	{
		load_nlev_map_data(map_num);
	}
	for (int i = 0;i < LEN;i++)//�����߽�ǽ
	{
		for (int j = 0;j < HIGH;j++)
		{
			if (map_obj.get_map_data(i, j) == map_iron_data)
			{
				draw_obj.show_char(i, j, "��");
			}
			if (map_obj.get_map_data(i, j) == map_grass_data)
			{
				draw_obj.show_char(i, j, "��", GREEN);
			}
			if (map_obj.get_map_data(i, j) == map_river_data)
			{
				draw_obj.show_char(i, j, "��", BLUE);
			}
			if (map_obj.get_map_data(i, j) == map_soil_data)
			{
				draw_obj.show_char(i, j, "��", YELLOW);
			}
			if (map_obj.get_map_data(i, j) == map_boss_data)
			{
				draw_obj.show_char(i, j, "��", BOSS_COLOR);
			}
			if (map_obj.get_tank_data(i, j) == tank0_data)
			{
				draw_obj.show_char(i, j, "��", P1_COLOR);
			}
		}
	}

}
void Game::m_game_init(int mode, int difficulty,int num)
{
	if (!m_is_edit_mod)//��������Ǳ༭ģʽ
	{
		map_obj.data_init();//
		//gameframe_init(map_obj);//��ʼ�����//���ڻ���ͼ
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
				m_tank_arr[i].easy_mode_tank_init(i + tank0_data);//�±�+tank0_dataת��Ϊ̹������;
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
				m_tank_arr[i].easy_mode_tank_init(i + tank0_data);//�±�+tank0_dataת��Ϊ̹������;
			}
		}
	}
}
void Game::m_p1_run(time_t& run_time, time_t& start_time, int& move_dir)
{
	static time_t die_time;//����ʱ�䱣�ֲ���
	run_time = clock();
	if (m_tank_arr[0].get_blood() == 0)
	{
		if (m_tank_arr[0].get_m_tank_life() == 1)//���Ѫ��Ϊ0,����Ϊ1��������¼����ʱ��
		{
			m_tank_arr[0].erase_and_print(op_erase);//̹������������ݼ�ͼ��
			m_tank_arr[0].mod_tank_data(op_erase);//
			m_tank_arr[0].set_m_tank_life(0);//����
			m_p1_life--;
			die_time = clock();//��¼����ʱ��
		}
		if (run_time - die_time > REC_TIME)//��������ʱ��
		{
			m_tank_arr[0].easy_mode_tank_init(tank0_data);//��ʼ���µĵ�0��̹��
		}
	}
	if (run_time - start_time > P1_SPEED)
	{
		start_time = clock();
		move_dir = key_down_p1_event();//����P1�ƶ�����
		m_tank_arr[0].tank_move_astep(&map_obj, m_vecBullet_obj, move_dir, 0);
	}
}
void Game::m_p2_run(time_t& run_time, time_t& start_time,int& move_dir)
{
	static time_t die_time;//����ʱ�䱣�ֲ���
	run_time = clock();
	if (m_tank_arr[1].get_blood() == 0)
	{
		if (m_tank_arr[1].get_m_tank_life() == 1)//���Ѫ��Ϊ0,����Ϊ1��������¼����ʱ��
		{
			m_tank_arr[1].erase_and_print(op_erase);//̹������������ݼ�ͼ��
			m_tank_arr[1].mod_tank_data(op_erase);//
			m_tank_arr[1].set_m_tank_life(0);//����
			m_p2_life--;
			die_time = clock();//��¼����ʱ��
		}
		if (run_time - die_time > REC_TIME)//��������ʱ��
		{
			m_tank_arr[1].easy_mode_tank_init(tank1_data);//��ʼ���µĵ�1��̹��
		}
	}
	if (run_time - start_time > P1_SPEED)
	{
		start_time = clock();
		move_dir = key_down_p2_event();//����P1�ƶ�����
		m_tank_arr[1].tank_move_astep(&map_obj, m_vecBullet_obj, move_dir, 1);
	}
}
void Game::m_enemy_run(time_t* run_time, time_t* start_time, int* move_dir)
{
	static time_t die_time[TANK_CNT];//����ʱ�䱣�ֲ���
	for (int i = 2;i < TANK_CNT;i++)//���������ڰ˸�̹��Ϊ�з�̹��
	{
		run_time[i] = clock();
		if (m_tank_arr[i].get_blood() == 0)
		{
			if (m_tank_arr[i].get_m_tank_life() == 1)//���Ѫ��Ϊ0,����Ϊ1��������¼����ʱ��
			{
				m_tank_arr[i].erase_and_print(op_erase);//̹������������ݼ�ͼ��
				m_tank_arr[i].mod_tank_data(op_erase);//
				m_tank_arr[i].set_m_tank_life(0);//����
				die_time[i] = clock();//��¼����ʱ��
			}
			if (run_time[i] - die_time[i] > REC_TIME)//��������ʱ��
			{
				m_tank_arr[i].easy_mode_tank_init(tank0_data + i);//��ʼ���µĵ�i��̹��
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
			if (m_vecBullet_obj[i].get_bullet_life() != 0)//�ӵ�Ϊ���ŵ�ʱ������
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
void Game::savegame()//������Ϸ
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
void Game::load_data()//������Ϸ
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
	fopen_s(&pfile, "�༭�汾.txt", "wb");
	fwrite(&map_obj, sizeof(map_obj), 1, pfile);
	fclose(pfile);
}
void Game::load_nlev_map_data(int map_num)//�����ͼ����
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
	time_t run_time[TANK_CNT];//����̹���ٶ�
	time_t bullet_start_time = clock();//�����ӵ��ٶ�
	time_t bullet_run_time;
	int move_dir[TANK_CNT];
	srand(clock());//������ӣ�����Ϊms
	while (1)
	{
		Tank::m_if_defeated = 0;
		int if_saved = 0;
		int if_return = 0;//����Ƿ��˳�ѭ��
		draw_obj.draw_p1_state(m_tank_arr[0].get_blood(), m_tank_arr[0].get_scores(), m_p1_life);
		m_p1_run(run_time[0], start_time[0], move_dir[0]);
		if (game_mode == m_double)
		{
			draw_obj.draw_p2_state(m_tank_arr[1].get_blood(), m_tank_arr[1].get_scores(), m_p2_life);
			m_p2_run(run_time[1], start_time[1], move_dir[1]);
		}
		m_enemy_run(run_time, start_time, move_dir);
		m_bullet_run(bullet_run_time, bullet_start_time);
		if (KEY_DOWN('P'))//��P������Ϸ
		{
			savegame();
			draw_obj.draw_saved_itf();//����ɹ�ҳ��
			Sleep(50);
			system("cls");
			draw_obj.draw_start_itf();//������ʼ����
			break;
		}
		if (game_mode == m_single)
		{
			if (m_p1_life == 0)//p1����
			{
				m_tank_arr[0].erase_and_print(op_erase);//����ͼ��
				m_tank_arr[0].mod_tank_data(op_erase);//��������
				draw_obj.draw_gameover_itf();
				while (1)
				{
					char ckey = 0;
					ckey = _getch();
					if (ckey == 'y')
					{
						if_return = 1;//Ҫ����
						break;
					}
				}
			}
		}
		if (game_mode == m_double)
		{
			if (m_p1_life == 0)//p1����
			{
				m_tank_arr[0].erase_and_print(op_erase);//����ͼ��
				m_tank_arr[0].mod_tank_data(op_erase);//��������
			}
			if (m_p2_life == 0)//p2����
			{
				m_tank_arr[1].erase_and_print(op_erase);//����ͼ��
				m_tank_arr[1].mod_tank_data(op_erase);//��������
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
						if_return = 1;//Ҫ����
						break;
					}
				}
			}
		}
		if (m_p1_life == 0 && m_p2_life == 0)//����������Ϸ����
		{
			draw_obj.draw_gameover_itf();
			while (1)
			{
				char ckey = 0;
				ckey = _getch();
				if (ckey == 'y')
				{
					if_return = 1;//Ҫ����
					break;
				}
			}
		}
		if (Tank::m_if_defeated == 1)//�ܲ�����/��Ϸʧ��
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

		if (if_return == 1)//ȷ���˳�
		{
			system("cls");
			draw_obj.draw_start_itf();//������ʼ����
			for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//����ӵ�����
			{
				if (m_vecBullet_obj[i].get_bullet_life() > 0)
				{
					m_vecBullet_obj[i].set_bullet_life(0);
				}
			}
			m_vecBullet_obj.clear();
			break;//��ȥ��ʼ����ѭ��
		}
		if (num == 1)
		{

			if (Tank::m_scores == 5)
			{
				system("cls");
				for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//����ӵ�����
				{
					if (m_vecBullet_obj[i].get_bullet_life() > 0)
					{
						m_vecBullet_obj[i].set_bullet_life(0);
					}
				}
				m_vecBullet_obj.clear();
				break;//������һ��
			}
		}
		if (num == 2)
		{
			if (Tank::m_scores == 10)
			{
				system("cls");
				for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//����ӵ�����
				{
					if (m_vecBullet_obj[i].get_bullet_life() > 0)
					{
						m_vecBullet_obj[i].set_bullet_life(0);
					}
				}
				m_vecBullet_obj.clear();
				break;//������һ��
			}
		}
		if (num == 3)
		{
			if (Tank::m_scores == 15)
			{
				system("cls");
				for (unsigned int i = 0;i < m_vecBullet_obj.size();i++)//����ӵ�����
				{
					if (m_vecBullet_obj[i].get_bullet_life() > 0)
					{
						m_vecBullet_obj[i].set_bullet_life(0);
					}
				}
				m_vecBullet_obj.clear();
				break;//������һ��
			}
		}

	}
}
void Game::run_game2()//ج��ģʽ
{}
