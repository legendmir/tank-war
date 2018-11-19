#include"data.h"
#include"engine.h"
#include"界面.h"
#include<iostream>
#include<windows.h>
#include<time.h>
int main()
{
	system("title 坦克大战");//设置标题
	system("mode con cols=120 lines=40");//设置控制台大小
	Game game_obj;
	//PlaySoundA("sound\\开始.wav", NULL, SND_ASYNC | SND_NODEFAULT);
	game_obj.run_start_menu();
	return 0;
}