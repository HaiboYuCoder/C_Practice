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
	//1. ��Ҫ��Ų��úõ��׵���Ϣ������Ų�����׵���Ϣ��������Ҫ2����ά����
	//2. �Ų������ʱ��Ϊ�˷�ֹ����Խ�磬���Ǹ������������2�У���������2��
	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ

	//��ʼ�����̺�չʾ��
	init_board(mine, ROWS, COLS,'0');
	init_board(show, ROWS, COLS,'*');

	//��ӡ
	display_board(show, ROW, COL);

	//������
	set_lei(mine, ROW, COL);
	display_board(mine, ROW, COL);

	//����
	find_lei(mine, show, ROW, COL);
}


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//��ӡ�˵�
	do {
		menu();
		printf("��ѡ��1/0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}