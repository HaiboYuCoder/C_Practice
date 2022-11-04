#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void reverse(char* str)
{
	int count = strlen(str);
	char tmp = 0;
	tmp = *str;
	*str = *(str + count - 1);
	*(str + count - 1) = '\0';
	if (strlen(str) >= 2)
		reverse(str + 1);
	*(str + count - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);

	return 0;
}