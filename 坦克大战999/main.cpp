#include"data.h"
#include"engine.h"
#include"����.h"
#include<iostream>
#include<windows.h>
#include<time.h>
int main()
{
	system("title ̹�˴�ս");//���ñ���
	system("mode con cols=120 lines=40");//���ÿ���̨��С
	Game game_obj;
	//PlaySoundA("sound\\��ʼ.wav", NULL, SND_ASYNC | SND_NODEFAULT);
	game_obj.run_start_menu();
	return 0;
}