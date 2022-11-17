#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	long long int flag1 = 0;
	long long int flag2 = 0;
	long long int n = 0;
	long long int m = 0;
	scanf("%lld %lld", &m, &n);
	long long int tmp = m * n;
	//最大公约数,短除法
	while (1)
	{
		long long int c = m % n;
		if (c == 0)
		{
			flag1 = n;
			break;
		}
		m = n;
		n = c;
	}

	//最小公倍数，两个数的成绩除以两个数的最大公约数
	flag2 = tmp/flag1;
	printf("%lld\n", flag1 + flag2);
	return 0;
}