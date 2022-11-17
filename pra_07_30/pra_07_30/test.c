//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int arr[16] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int m = 1;
//	int j = 0;
//	//奇数位
//	printf("奇数位：");
//	for (j = 0; j < 16; j++)
//	{
//		if ((m & (n >> j*2)) == 1)
//		{
//			arr[15 - j] = 1;
//		}
//		else if ((m & (n >> j*2)) == 0)
//		{
//			arr[15 - j] = 0;
//		}
//	}
//	for (j = 0; j < 16; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	printf("\n");
//	//偶数位
//	int arr2[16] = { 0 };
//	int k = 1;
//	printf("偶数位：");
//	for (k = 1; k < 17; k++)
//	{
//		if (m & (n >> (2*k-1)) == 1)
//		{
//			arr2[16 - k] = 1;
//		}
//		else if ((m & (n >> (2 * k - 1))) == 0)
//		{
//			arr2[16 - k] = 0;
//		}
//	}
//	for (j = 0; j < 16; j++)
//	{
//		printf("%d", arr2[j]);
//	}
//	printf("\n");
//
//	return 0;
//}