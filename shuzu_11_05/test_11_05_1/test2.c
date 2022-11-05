#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
void init(int arr[])
{
	int i = 0;
	for (i = 0; i <= 2; i++)
	{
		*(arr + i) = 0;
	}
	//2.
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//3.
void reverse(int arr1[],int count)
{
	int i = 0;
	int a = count / 2;
	for (i = 0; i < a; i++)
	{
		int tmp = arr1[0+i];
		arr1[0+i] = arr1[count - 1 - i];
		arr1[count - 1 - i] = tmp;
	}
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,3 };

	init(arr);

	int arr1[] = { 4,5,6 };
	int count = sizeof(arr1) / sizeof(arr1[0]);
	printf("%d\n", count);
	reverse(arr1,count);


	return 0;
}