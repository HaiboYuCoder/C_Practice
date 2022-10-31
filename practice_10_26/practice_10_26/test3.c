#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	long int a = 0;
	long int b = 0;
	long int sum = 0;
	scanf("%ld", &a);
	b = a / 12;
	sum = 4 * b + 2;
	printf("%ld", sum);

	return 0;
}