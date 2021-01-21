#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	for (a = 1; a <= 9; a++)
//	{
//		for(b = 1; b <= 9;b++)
//		{
//			printf("%d * %d = %d ", a, b, a*b);
//			if (b>=a)
//				break;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int a = 7;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	while (left<=right)
//	{
//		int b = (left + right) / 2;
//		if (a < arr[b])
//		{
//			right = b - 1;
//		}
//		else if (a>arr[b])
//		{
//			left = b + 1;
//		}
//		else if (a == arr[b])
//		{
//			printf("找到了，下标是：%d\n", b);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//
//}
//#include <stdio.h>
//int  main()
//{
//	int a = 0;
//	double b = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 2 == 0)
//		{
//			b = b - (1.0 / a);
//		}
//		else
//		{
//			b = b + (1.0 / a);
//		}
//
//	}
//	printf("%lf", b);
//	return 0;
//}
//int shusu(int x)
//{
//	int a = 1;
//	for (a = 2; a < x; a++)
//	{
//		if (x%a == 0)
//			break;
//	}
//	if (a >= x)
//		return x;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b<a; b++)
//		{
//			if (a%b == 0)
//				break;
//		}
//		if (b >= a)
//			printf("%d ", a);
//	}
//	return 0;
//}