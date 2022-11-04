//#define  _CRT_SECURE_NO_WARNINGS 1
//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////递归，计算量大
//int Fib(int n)
//{
//	int i = 0;
//	if (n <= 2)
//	{
//		i = 1;
//	}
//	else
//	{
//		i = Fib(n - 1) + Fib(n - 2);
//	}
//}
////迭代（循环）;非迭代
//int Fibn(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	int ret_1 = Fibn(n);
//	printf("%d", ret_1);
//	return 0;
//}
