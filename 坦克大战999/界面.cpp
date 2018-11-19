#include"界面.h"
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
	setCursor_info();//设置光标不可见
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 2 * x,y });
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << fig;
}
void Draw::show_char(SHORT x, SHORT y, char* fig, WORD color)
{
	write_char(x, y, fig, color);
}
void Draw::show_info(SHORT x, SHORT y, int info, WORD color )//显示数据信息
{
	setCursor_info();//设置光标不可见
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 2 * x,y });
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << info;
}
void Draw::draw_start_itf()
{

	write_char(LEN / 2 - 1, HIGH / 2 - 13, "坦   克   大   战", YELLOW);
	write_char(LEN / 2 , HIGH / 2 - 11, "●单人模式  √", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 10, "●双人模式", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 8, "●简单难度  √", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 7, "●噩梦难度", 0x04);
	write_char(LEN / 2 , HIGH / 2 - 4, "●新 游 戏", WHITE);
	write_char(LEN / 2 , HIGH / 2 - 2, "●读 取 存 档", GREEN);
	write_char(LEN / 2 , HIGH / 2, "●编 辑 游 戏", BLUE);
	write_char(LEN / 2 , HIGH / 2 + 2, "●退 出", 0x04);
	write_char(LEN / 2 - 2, HIGH / 2 + 8, "(鼠标单击'●'选择选项)", YELLOW);
}
void Draw::draw_edit_itf()
{
	write_char(LEN, HIGH / 2, "单击选择障碍种类");
	write_char(LEN, HIGH / 2 + 2, "■ 钢墙 √");
	write_char(LEN, HIGH / 2 + 4, "■ 土墙", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "■ 草地", GREEN);
	write_char(LEN, HIGH / 2 + 8, "■ 河流", BLUE);
	write_char(LEN, HIGH / 2 + 11, "●开始游戏");
	write_char(LEN, HIGH / 2 + 12, "●保存编辑");
	write_char(LEN, HIGH / 2 + 13, "●返回首页");
}
void Draw::draw_rungame_itf(int mode)
{
	write_char(LEN, 0, "玩家1状态：      ", 0x40);
	write_char(LEN, 1, "血量", 0x40);
	write_char(LEN, 2, "得分", 0x40);
	write_char(LEN, 3, "生命", 0x40);
	write_char(LEN, 4, "速度(待开发)", 0x40);
	write_char(LEN, 5, "状态(待开发)", 0x40);
	write_char(LEN, 6, "攻击(待开发)", 0x40);
	write_char(LEN, 38, "按 'p' 保存游戏", 0x40);
	if (mode == m_double)//双人模式
	{
		write_char(LEN, 8, "玩家2状态：      ", 0x40);
		write_char(LEN, 9, "血量", 0x40);
		write_char(LEN, 10, "得分", 0x40);
		write_char(LEN, 11, "生命", 0x40);
		write_char(LEN, 12, "速度(待开发)", 0x40);
		write_char(LEN, 13, "状态(待开发)", 0x40);
		write_char(LEN, 14, "攻击(待开发)", 0x40);
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
	write_char(LEN / 2, HIGH / 2 - 11, "●单人模式  √", 0x04);
	write_char(LEN / 2, HIGH / 2 - 10, "●双人模式    ", 0x04);
}
void Draw::draw_choose_double()
{
	write_char(LEN / 2, HIGH / 2 - 11, "●单人模式    ", 0x04);
	write_char(LEN / 2, HIGH / 2 - 10, "●双人模式  √", 0x04);
}
void Draw::draw_choose_easy()
{
	write_char(LEN / 2, HIGH / 2 - 8, "●简单难度  √", 0x04);
	write_char(LEN / 2, HIGH / 2 - 7, "●噩梦难度    ", 0x04);
}
void Draw::draw_choose_difficult()
{
	write_char(LEN / 2, HIGH / 2 - 8, "●简单难度    ", 0x04);
	write_char(LEN / 2, HIGH / 2 - 7, "●噩梦难度  √", 0x04);
}
void Draw::draw_choose_iron() 
{
	write_char(LEN, HIGH / 2 + 2, "■ 钢墙 √");
	write_char(LEN, HIGH / 2 + 4, "■ 土墙   ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "■ 草地   ", GREEN);
	write_char(LEN, HIGH / 2 + 8, "■ 河流   ", BLUE);
}
void Draw::draw_choose_soil()
{
	write_char(LEN, HIGH / 2 + 2, "■ 钢墙   ");
	write_char(LEN, HIGH / 2 + 4, "■ 土墙 √", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "■ 草地   ", GREEN);
	write_char(LEN, HIGH / 2 + 8, "■ 河流   ", BLUE);
}
void Draw::draw_choose_grass()
{
	write_char(LEN, HIGH / 2 + 2, "■ 钢墙   ");
	write_char(LEN, HIGH / 2 + 4, "■ 土墙   ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "■ 草地 √", GREEN);
	write_char(LEN, HIGH / 2 + 8, "■ 河流   ", BLUE);
}
void Draw::draw_choose_river()
{
	write_char(LEN, HIGH / 2 + 2, "■ 钢墙   ");
	write_char(LEN, HIGH / 2 + 4, "■ 土墙   ", YELLOW);
	write_char(LEN, HIGH / 2 + 6, "■ 草地   ", GREEN);
	write_char(LEN, HIGH / 2 + 8, "■ 河流 √", BLUE);
}
void Draw::draw_gameover_itf()
{
	setCursor_info();
	write_char(LEN / 2 - 2, HIGH / 2 - 8, "GAME OVER!", 0x04);
	write_char(LEN / 2 - 3, HIGH / 2 - 9, "返回首页请按（y）", 0x04);
}
void Draw::draw_saved_itf()
{
	write_char(LEN, 39, "保存成功", YELLOW);
}
void Draw::draw_win_itf()
{
	write_char(LEN / 2, HIGH / 2 - 11, "●游戏胜利！●", 0x04);
}