#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int  print(int b)
//{
//	if (b < 9)
//	{
//		printf("%d ", b % 10);
//		return b;
//	}
//	else
//	{
//		print(b / 10);
//	}
//	printf("%d ", b % 10);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//#include<stdio.h>
//int jie(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return a*jie(a - 1);
//}
//int main()
//{
//	int a = 1;
//	int c = 1;
//	scanf("%d", &a);
//	for (int b = 1; b <= a; b++)
//	{
//		c = c * b;
//	}
//	printf("%d\n", c);
//	int d=jie(a);
//	printf("%d\n", d);
//	return 0;
//}
//#include<stdio.h>
int strlen(char arr[])
{
	static c = 0;
	static a = 0;
	a++;
	if (arr[c] == '\0')
	{
		return 0;
	}
	else
	{
		c++;
		strlen(arr);
	}
	return a-1;
}
//int main()
//{
//	char arr[] = { "hello bit" };
//	int b = 0;
//	int c = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int a = 0; a < sz; a++)
//	{
//		if (arr[a] != ('\0'))
//			b++;
//		else
//			break;
//	}
//	printf("%d ", b);
//	c=strlen(arr);
//	printf("%d ", c);
//	return 0;
//}
#include<stdio.h>
int main()
{
	char arr[] = "abcdef"; 
	return 0;
}