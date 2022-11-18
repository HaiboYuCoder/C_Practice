#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	while(scanf("%d %d", &a, &n)!= EOF)
	{
		int flag = 0;
		if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
		{
			flag = 31;
		}
		if (n == 4 || n == 6 || n == 9 || n == 11)
		{
			flag = 30;
		}
		if (n == 2)
		{
			if ((a % 100 != 0 && a % 4 == 0) || (a % 400 == 0))
			{
				flag = 29;
			}
			else
			{
				flag = 28;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}