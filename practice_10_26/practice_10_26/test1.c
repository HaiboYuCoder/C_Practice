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
////rand������ר�����������������
////rand�������ص���0~RAND_MAX(32767)֮���һ�������
////#define RAND_MAX 0x7fff
////
////
////
////rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
////srand�����ڳ�����ֻҪ����һ�ξͿ����ˣ�����ҪƵ������
////
////
////
////ʱ���
////C�����У�time�����᷵��ʱ���
////
////NULL - ��ָ��
//
//void game()
//{
//	int a = 0;
//	//1.����1-100�������
//	int ret = rand() % 100 + 1;
//
//	while (1)
//	{
//		printf("������1-100����:>");
//		scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("�������������\n");
//		}
//		else if (a < ret)
//		{
//			printf("�����������С\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶��ˡ�\n");
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
//		printf("����������1/0:");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("�������Ϸ��\n");
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("�˳���Ϸ��\n");
//		}
//		else
//		{
//			printf("����������������롣\n");
//		}
//	} while (input);
//
//	return 0;
//}