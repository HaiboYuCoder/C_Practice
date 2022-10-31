//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <windows.h>
//
//
//void menu()
//{
//	printf("*****************\n");
//	printf("*****1.play *****\n");
//	printf("*****0.exit *****\n");
//	printf("*****************\n");
//}
//
////rand函数是专门用来生成随机数的
////rand函数返回的是0~RAND_MAX(32767)之间的一个随机数
////#define RAND_MAX 0x7fff
////
////
////
////rand函数在使用之前要使用一个srand函数来设置随机数的生成器
////srand函数在程序中只要调用一次就可以了，不需要频繁调用
////
////
////
////时间戳
////C语言中，time函数会返回时间戳
////
////NULL - 空指针
//
//void game()
//{
//	int a = 0;
//	//1.生成1-100的随机数
//	int ret = rand() % 100 + 1;
//
//	while (1)
//	{
//		printf("请输入1-100的数:>");
//		scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("您输入的数过大\n");
//		}
//		else if (a < ret)
//		{
//			printf("您输入的数过小\n");
//		}
//		else
//		{
//			printf("恭喜您，猜对了。\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字1/0:");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("请进行游戏。\n");
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("退出游戏。\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入。\n");
//		}
//	} while (input);
//
//	return 0;
//}