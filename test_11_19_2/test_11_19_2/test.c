#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char a = 0;
	while (scanf("%c", &a) != EOF)
	{
		char tmp = a;
		getchar();
		if (a >= 65 && a <= 90)
		{
			tmp = tmp + 32;
		}
		else
		{
			tmp = tmp - 32;
		}
		printf("%c\n", tmp);
	}

	return 0;
}