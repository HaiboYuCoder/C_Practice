#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[4] = { 1, 2, 3, 4 };
	int k = 0;
	scanf("%d", &k);
	int left = 0;
	int right = 3;
	int mid = 0;
	int flag = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("ÕÒ²»µ½¡£\n");
	return 0;
}