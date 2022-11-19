#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[3] = { 1,2,3 };
	int* pa = arr;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(pa + i));
	}
	return 0;
}