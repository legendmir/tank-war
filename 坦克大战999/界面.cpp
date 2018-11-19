#include"����.h"
#include"data.h"
#include"engine.h"
void Draw::setCursor_info(int x, int y)
{
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = x;
	cci.dwSize = y;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
void Draw::write_char(SHORT x, SHORT y, char* fig, WORD color)
{
	setCursor_info();//���ù�겻�ɼ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 2 * x,y });
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << fig;
}
void Draw::show_char(SHORT x, SHORT y, char* fig, WORD color)
{
	write_char(x, y, fig, color);
}
void Draw::show_info(SHORT x, SHORT y, int info, WORD color )//��ʾ������Ϣ
{
	setCursor_info();//���ù�겻�ɼ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 2 * x,y });
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << info;
}
void Draw::draw_start_itf()
{

	write_char(LEN / 2 - 1, HIGH / 2 - 13, "̹   ��   ��   ս", YELLOW);
	write_char(LEN / 2 , HIGH / 2 - 11, "����ģʽ  ��", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 10, "��˫��ģʽ", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 8, "����Ѷ�  ��", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 7, "��ج���Ѷ�", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 4, "���� �� Ϸ", WHITE);
	write_char(LEN / 2 , HIGH / 2 - 2, "��� ȡ �� ��", GREEN);
	write_char(LEN / 2 , HIGH / 2, "��� �� �� Ϸ", BLUE);
	write_char(LEN / 2 , HIGH / 2 + 2, "���� ��", 0x04);
	write_char(LEN / 2 - 2, HIGH / 2 + 8, "(��굥��'��'ѡ��ѡ��)", YELLOW);
}
void Draw::draw_edit_itf()
{
	write_char(LEN, HIGH / 2, "����ѡ���ϰ�����");
	write_char(LEN, HIGH / 2 + 2, "�� ��ǽ ��");
	write_char(LEN, HIGH / 2 + 4, "�� ��ǽ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "�� �ݵ�", GREEN);
	write_char(LEN, HIGH / 2 + 8, "�� ����", BLUE);
	write_char(LEN, HIGH / 2 + 11, "��ʼ��Ϸ");
	write_char(LEN, HIGH / 2 + 12, "�񱣴�༭");
	write_char(LEN, HIGH / 2 + 13, "�񷵻���ҳ");
}
void Draw::draw_rungame_itf(int mode)
{
	write_char(LEN, 0, "���1״̬��      ", 0x40);
	write_char(LEN, 1, "Ѫ��", 0x40);
	write_char(LEN, 2, "�÷�", 0x40);
	write_char(LEN, 3, "����", 0x40);
	write_char(LEN, 4, "�ٶ�(������)", 0x40);
	write_char(LEN, 5, "״̬(������)", 0x40);
	write_char(LEN, 6, "����(������)", 0x40);
	write_char(LEN, 38, "�� 'p' ������Ϸ", 0x40);
	if (mode == m_double)//˫��ģʽ
	{
		write_char(LEN, 8, "���2״̬��      ", 0x40);
		write_char(LEN, 9, "Ѫ��", 0x40);
		write_char(LEN, 10, "�÷�", 0x40);
		write_char(LEN, 11, "����", 0x40);
		write_char(LEN, 12, "�ٶ�(������)", 0x40);
		write_char(LEN, 13, "״̬(������)", 0x40);
		write_char(LEN, 14, "����(������)", 0x40);
	}

}
void Draw::draw_p1_state(int nblood,int nrank,int nlifes)
{
	show_info(LEN + 3, 1, nblood);
	show_info(LEN + 3, 2, nrank);
	show_info(LEN + 3, 3, nlifes);
}
void Draw::draw_p2_state(int nblood, int nrank, int nlifes)
{
	show_info(LEN + 3, 9, nblood);
	show_info(LEN + 3, 10, nrank);
	show_info(LEN + 3, 11, nlifes);
}
void Draw::draw_choose_single()
{
	write_char(LEN / 2, HIGH / 2 - 11, "����ģʽ  ��", 0x04);
	write_char(LEN / 2, HIGH / 2 - 10, "��˫��ģʽ    ", 0x04);
}
void Draw::draw_choose_double()
{
	write_char(LEN / 2, HIGH / 2 - 11, "����ģʽ    ", 0x04);
	write_char(LEN / 2, HIGH / 2 - 10, "��˫��ģʽ  ��", 0x04);
}
void Draw::draw_choose_easy()
{
	write_char(LEN / 2, HIGH / 2 - 8, "����Ѷ�  ��", 0x04);
	write_char(LEN / 2, HIGH / 2 - 7, "��ج���Ѷ�    ", 0x04);
}
void Draw::draw_choose_difficult()
{
	write_char(LEN / 2, HIGH / 2 - 8, "����Ѷ�    ", 0x04);
	write_char(LEN / 2, HIGH / 2 - 7, "��ج���Ѷ�  ��", 0x04);
}
void Draw::draw_choose_iron() 
{
	write_char(LEN, HIGH / 2 + 2, "�� ��ǽ ��");
	write_char(LEN, HIGH / 2 + 4, "�� ��ǽ   ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "�� �ݵ�   ", GREEN);
	write_char(LEN, HIGH / 2 + 8, "�� ����   ", BLUE);
}
void Draw::draw_choose_soil()
{
	write_char(LEN, HIGH / 2 + 2, "�� ��ǽ   ");
	write_char(LEN, HIGH / 2 + 4, "�� ��ǽ ��", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "�� �ݵ�   ", GREEN);
	write_char(LEN, HIGH / 2 + 8, "�� ����   ", BLUE);
}
void Draw::draw_choose_grass()
{
	write_char(LEN, HIGH / 2 + 2, "�� ��ǽ   ");
	write_char(LEN, HIGH / 2 + 4, "�� ��ǽ   ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "�� �ݵ� ��", GREEN);
	write_char(LEN, HIGH / 2 + 8, "�� ����   ", BLUE);
}
void Draw::draw_choose_river()
{
	write_char(LEN, HIGH / 2 + 2, "�� ��ǽ   ");
	write_char(LEN, HIGH / 2 + 4, "�� ��ǽ   ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "�� �ݵ�   ", GREEN);
	write_char(LEN, HIGH / 2 + 8, "�� ���� ��", BLUE);
}
void Draw::draw_gameover_itf()
{
	setCursor_info();
	write_char(LEN / 2 - 2, HIGH / 2 - 8, "GAME OVER!", 0x04);
	write_char(LEN / 2 - 3, HIGH / 2 - 9, "������ҳ�밴��y��", 0x04);
}
void Draw::draw_saved_itf()
{
	write_char(LEN, 39, "����ɹ�", YELLOW);
}
void Draw::draw_win_itf()
{
	write_char(LEN / 2, HIGH / 2 - 11, "����Ϸʤ������", 0x04);
}