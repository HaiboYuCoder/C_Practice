#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void init_board(char board[ROWS][COLS], int rows, int cols, char sets)
{
	int a = 0;
	for (a = 0; a <= rows - 1; a++)
	{
		int b = 0;
		for (b = 0; b <= cols - 1; b++)
		{
			board[a][b] = sets;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	
	int a = 0;
	for (a = 0; a <= col; a++)
	{
		printf("%d ", a);
	}
	printf("\n");
	for (a = 1; a <= row; a++)
	{
		printf("%d ", a);
		int b = 0;
		for (b = 1; b <= col; b++)
		{
			printf("%c ", board[a][b]);
		}
		printf("\n");
	}
}

void set_lei(char mine[ROWS][COLS], int row, int col) 
{
	int count = row + 1;

	while(count)
	{
		int a = rand() % row + 1;
		int b = rand() % col + 1;
		if (mine[a][b] == '0')
		{
			mine[a][b] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}

//void print(char mine[ROWS][COLS], char show[ROWS][COLS], int a, int b, int* count);
//
//void expert(char mine[ROWS][COLS], char show[ROWS][COLS], int a, int b, int* count)
//{
//	count++;
//	int i = 0;
//	int j = 0;
//	for (i = a - 1; i <= a + 1; i++)
//	{
//		for (j = b - 1; j <= b + 1; j++)
//		{
//			if(i != a && j != b)
//			{
//				print(mine[ROWS][COLS], show[ROWS][COLS], i, j, count);
//			}
//		}
//	}
//}
//
//void print(char mine[ROWS][COLS], char show[ROWS][COLS], int a, int b, int* count)
//{
//	int n = get_mine_count(mine, a, b);
//	if (n == 0)
//	{
//		show[a][b] = '0';
//		expert(mine, show, a, b,&count);
//	}
//	show[a][b] = n + '0';
//}

void find_lei(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int a = 0;
	int b = 0;
	int count = 0;
	
	while (count<=row+1)
	{
		printf("请输入排查的坐标:>\n");
		scanf("%d %d", &a, &b);
		if (a >= 1 && a <= row && b >= 1 && b <= col)
		{
			if (mine[a][b] == '1')
			{
				printf("很抱歉，您点到了炸弹，游戏结束\n");
				display_board(mine, ROW, COL);
				break;
			}
			else if(show[a][b] != '*')
			{
				printf("输入错误，请重新输入\n");
				continue;
			}
			else
			{
				//print(mine, show, a, b,&count);
				//display_board(show, ROW, COL);
				int n = get_mine_count(mine, a, b);
			/*	if (n == 0)
				{
					show[a][b] = '0';
					expert(mine, show, a, b, &count);
				}*/
				show[a][b] = n + '0';
				display_board(show, ROW, COL);
				count++;
			}
		}
		else
		{
			printf("输入格式错误，请重新输入\n");
		}
	}
	if (count == row*col-(row + 1))
	{
		printf("恭喜您成功通关\n");
		display_board(mine, ROW, COL);
	}
}