#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int sz = 0;
//	char a = 0;
//	char arr[100]= {0};
//	while (scanf("%c",&a) != EOF)
//	{
//		if (a != '\n')
//		{
//			arr[sz++] = a;
//		}
//		else
//		{
//			for (int i = sz - 1; i >= 0; i--)
//			{
//				printf("%c", arr[i]);
//			}
//			sz = 0;
//		    printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int main()
//{
//    char Buff[100];
//    char cTmp;
//    int cnt = 0;
//
//    while (scanf("%c", &cTmp) != EOF)
//    {
//        if (cTmp != '\n')
//        {
//            Buff[cnt++] = cTmp;
//        }
//        else
//        {
//            for (int i = cnt - 1; i >= 0; i--)
//            {
//                printf("%c", Buff[i]);
//            }
//            printf("\n");
//            cnt = 0;
//        }
//
//
//
//    }
//    return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 13; i++)
//	{
//		int tmp = i;
//		if (tmp > 7)
//		{
//			tmp = 7 - (tmp - 7);
//		}
//		if (tmp != 7)
//		{
//			int a = 0;
//			for (a = 1; a <= (7 - tmp); a++)
//			{
//				printf(" ");
//			}
//		}
//		int k = 0;
//		for (k = 1; k <= (2 * tmp - 1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int cifang(int tmp3,int tmp2)
{
	int i = 1;
	int k = 1;
	for (i = 1; i <= tmp2; i++)
	{
		k = k * tmp3;
	}
	return k;
}

int main()
{
	int a = 0;
	for (a = 0; a <= 100000; a++)
	{
		int k = 1;
		int tmp1 = a;
		int tmp2 = 0;
		int n = 0;
		int b = 0;
		int sum = 0;
		int tmp3 = 0;
		for (n = 1; n <= 6; n++)
		{
			k = k * 10;
			if (tmp1 / k == 0)
			{
				tmp2 = n;
				break;
			}
		}
		for (b = 1; b <= tmp2; b++)
		{
			tmp3 = tmp1 % 10;
			tmp1 = tmp1 / 10;
			sum = sum + cifang(tmp3,tmp2);
		}
		if (sum == a)
		{
			printf("%d ", a);
		}
	}
	return 0;
}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int tmp = a;
//	int i = 1;
//	int sum = a;
//	int arr[5]={0};
//	for (i = 1; i <= 4; i++)
//	{
//		tmp = tmp * 10;
//		sum = sum + tmp;
//		arr[i] = sum;
//	}
//	int flag = a + arr[1] + arr[2] + arr[3] + arr[4];
//	printf("%d\n", flag);
//	return 0;
//}