#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int b = 0;
	int a = 0;
	scanf("%d %d", &b,&a);
	int n = a ^ b;
	int m = 1;
	int j = 0;
	int count = 0;
	for (j = 0; j < 32; j++)
	{
		if ((m & (n >> j)) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}