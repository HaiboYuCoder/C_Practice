#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1;
	int flag = 0;
	for (i = 1; i <= 89; i++)
	{
		if (i % 10 == 9)
			flag++;

	}
	for (i = 90; i <= 100; i++) 
	{
		if (i / 10 == 9)
			flag++;
	}
	printf("%d\n", flag);
	return 0;
}