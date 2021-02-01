#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//´úÂë1
//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("Ð¡¶Ë\n");
//	}
//	else
//	{
//		printf("´ó¶Ë\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}