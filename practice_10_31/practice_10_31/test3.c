#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int my_strlen(char* pa)
{
	if (*pa != '\0')
		return 1 + my_strlen(pa + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "heu";
	//[h e u \0]
	//数组名其实就是数组首个元素的地址
	//
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}
//
//
//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* pa)
//{
//	int count = 0;
//	while (*pa != '\0')
//	{
//		count++;
//		pa++;
//		//字符指针+1，向后跳1个字符
//		//整型指针 + 1, 向后跳1个整型，就是4个字节
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "heu";
//	//[h e u \0]
//	//数组名其实就是数组首个元素的地址
//	//
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
