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
	//���Լ��,�̳���
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

	//��С���������������ĳɼ����������������Լ��
	flag2 = tmp/flag1;
	printf("%lld\n", flag1 + flag2);
	return 0;
}