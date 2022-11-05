#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Honio(int n,char A,char B,char C)
{
	if (n == 1)
	{
		printf("%c -> %c\n", A, C);
	}
	else
	{
		Honio(n - 1, A, C, B);
		printf("%c -> %c\n", A, C);
		Honio(n - 1, B, A, C);
	}
}

int main()
{
	char A = 'A';
	char B = 'B';
	char C = 'C';
	int n = 0;
	scanf("%d", &n);
	Honio(n,A,B,C);
	return 0;
}