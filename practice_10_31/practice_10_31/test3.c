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
	//��������ʵ���������׸�Ԫ�صĵ�ַ
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
//		//�ַ�ָ��+1�������1���ַ�
//		//����ָ�� + 1, �����1�����ͣ�����4���ֽ�
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "heu";
//	//[h e u \0]
//	//��������ʵ���������׸�Ԫ�صĵ�ַ
//	//
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
