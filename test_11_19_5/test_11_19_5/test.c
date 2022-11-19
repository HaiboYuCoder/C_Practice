#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf("%s\n" ,(*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"”zhang”",20},
//                              {9802,"”wang”",19},
//                              {9803,"”zhao”",18}
//    };
//    fun(students + 1);
//    return 0;
//}


//int main()
//{
//	int flag = 20;
//	int sum = 0;
//	while (flag != 0)
//	{
//		flag--;
//		sum = sum + 1;
//
//		if(flag != 0)
//		{
//			flag--;
//			sum = sum + 1;
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//
//		flag++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int ji(int i)
//{
//	int k = 0;
//	int sum = 1;
//	if (i == 1)
//	{
//		sum = 1;
//	}
//	else
//	{
//		for (k = 2; k <= i; k++)
//		{
//			sum = sum * 10;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	for (n = 10000; n < 100000; n++)
//	{
//		int sum = 0;
//		int tmp1 = n;
//		int tmp2 = 0;
//		int i = 0;
//		for (i = 1; i <= 4; i++)
//		{
//			tmp2 = (tmp1 % 10) * ji(i) + tmp2;
//			tmp1 = tmp1 / 10;
//			sum = sum + (tmp1 * tmp2);
//		}
//		if (sum == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 10000; i <= 100000; i++)\
//    {
//        if (i == ((i / 10000) * (i % 10000)) + ((i / 1000) * (i % 1000)) + ((i / 100) * (i % 100)) + ((i / 10) * (i % 10)))
//            printf("%d ", i);
//    }
//    return 0;
//}

//void ex1(int* arr,int i)
//{
//	int arr1[100] = { 0 };
//	int k = 0;
//	int j = 0;
//	for (k = 0; k < (i/2+1); k++)
//	{
//		arr1[k] = arr[(2 * k)];
//	}
//	for (j = (i / 2 + 1); j < i; j++)
//	{
//		arr1[j] = arr[(2 * (j - i / 2) - 1)];
//	}
//	for (int a = 0; a < i; a++)
//	{
//		printf("%d ", arr1[a]);
//	}
//}
//
//void ex2(int* arr, int i)
//{
//	int arr2[100] = { 0 };
//	int k = 0;
//	int j = 0;
//	for (k = 0; k < i / 2; k++)
//	{
//		arr2[k] = arr[(2 * k)];
//	}
//	for (j = i / 2; j < i; j++)
//	{
//		arr2[j] = arr[(2 * (j - i / 2) + 1)];
//	}
//	for (int a = 0; a < i; a++)
//	{
//		printf("%d ", arr2[a]);
//	}
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int arr[100] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i++]) != EOF)
//	//int arr[] = { 1,2,3,4 };
//	//int i = sizeof(arr)/sizeof(arr[0]);
//
//	//数组为奇数个
//	if (i % 2 == 1)
//	{
//		ex1(arr, i);
//	}
//
//	//数组为偶数个
//	if (i % 2 == 0)
//	{
//		ex2(arr,i);
//	}
//
//	return 0;
//}
//#include <assert.h>
//
//
//char* my_strcpy(char* arr2,const char* arr1)
//{
//	char* pa = arr2;
//	assert(arr2 && arr1);
//
//	while (*pa++ = *arr1++)
//	{
//		;
//	}
//	return arr2;
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "*****";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	char* pa = arr;
//	while (1)
//	{
//		if (*pa != '\0')
//		{
//			pa++;
//			count++;
//		}
//		if (*pa == '\0')
//		{
//			break;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int arr[50]={0};
//	scanf("%d", &n);
//	int flag1 = 0;
//	int flag2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int k = 0; k < n-1; k++)
//	{
//		if (arr[k] >= arr[k + 1])
//		{
//			flag1 = 1;
//		}
//
//		else
//		{
//			flag1 = 0;
//			break;
//		}
//	}
//	for (int j = 0; j < n - 1; j++)
//	{
//		if (arr[j] <= arr[j + 1])
//		{
//			flag2 = 1;
//		}
//		else
//		{
//			flag2 = 0;
//			break;
//		}
//	}
//	if (flag1 == 1 || flag2 == 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int tmp1 = -1;
//	int tmp2 = 101;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (arr[j] >= tmp1)
//		{
//			tmp1 = arr[j];
//		}
//	}
//	for (int k = 0; k < n; k++)
//	{
//		if (arr[k] <= tmp2)
//		{
//			tmp2 = arr[k];
//		}
//	}
//	int a = tmp1 - tmp2;
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int tmp1 = -1;
	int tmp2 = 101;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < n - 1; j++)
	{
		if (arr[j] >= arr[j+1])
		{
			tmp1 = arr[j];
		}
		else
		{
			tmp1 = arr[j + 1];
		}
	}
	for (int k = 0; k < n - 1; k++)
	{
		if (arr[k] <= arr[k+1])
		{
			tmp2 = arr[k];
		}
		else
		{
			tmp2 = arr[k + 1];
		}
	}
	int a = tmp1 - tmp2;
	printf("%d\n", a);
	return 0;
}

