#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	

	int a, d = 0;
	char arr[2] = { 0 };
	scanf("%d", &arr);
	int i;

	for (i = 0; i < sizeof(arr); i++) 
	{

		printf("%d", arr[i]);

	}

	// 创建一个指针，并指向静态区存放的一个字符串“ABC”

	//char* tmp = "ABCDEF";
	//char arr[10] = {0};
	//int b = 10;
	//scanf("%d", &arr);
	//for (d = 0; d < sizeof(arr); d++)
	//{
	//	printf("%d", arr[d]);
	//}
	return 0;
}