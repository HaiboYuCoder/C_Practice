#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*****************\n");
	printf("*****1.play******\n");
	printf("*****0.exit******\n");
	printf("*****************\n");
}

void game()
{
	//1. 需要存放布置好的雷的信息，存放排查出的雷的信息，我们需要2个二维数组
	//2. 排查坐标的时候，为了防止坐标越界，我们给数组的行增加2行，列增加了2列
	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//排查出的雷的信息

	//初始化雷盘和展示盘
	init_board(mine, ROWS, COLS,'0');
	init_board(show, ROWS, COLS,'*');

	//打印
	display_board(show, ROW, COL);

	//设置雷
	set_lei(mine, ROW, COL);
	display_board(mine, ROW, COL);

	//排雷
	find_lei(mine, show, ROW, COL);
}


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//打印菜单
	do {
		menu();
		printf("请选择1/0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}