#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int c = 20;
//	if (a < b)
//	{
//		int d;
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d;
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b<c)
//	{
//		int d;
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 20;
//	if (a > b)
//	{
//		int d;
//		d = b;
//		b = a;
//		a = d;
//	}
//	int c = 0;
//	for (c = a; c >0; c--)
//	{
//		if (a%c == 0)
//		{
//			if (b%c == 0)
//			{
//				printf("%d\n", c);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1000;
//	for (; a <= 2000; a++)
//	{
//		if (a % 4 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 0;
//	while (a <= 6)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			if (a%b == 1)
//				printf("%d ", a);
//		}
//		a++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 9 == 0)
//		{
//			b++;
//		}
//		else if (a % 10 == 9)
//		{
//			b++;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include <stdio.h>
int  main()
{
	int a = 0;
	float b = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 2 == 0)
		{
			b = b - (1 / a);
		}
		else
		{
			b =b+ (1 / a);
		}

	}
	printf("%lf", b);
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 10,8, 9  };
	int b = 0;
	int a = 0;
	int c = 0;
	for (a = 0; a <10; a++)
	{
		b = arr[0];
		for (c = 0; c <10; c++)
			b = (arr[c] > b) ? arr[c] : b;
	}
	printf("%d ", b);
	return 0;
}
