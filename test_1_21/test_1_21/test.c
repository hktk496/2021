#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if ((a % 4 == 0 && a % 400 != 0) || (a % 400 == 0))
//			printf("%d ", a);
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
//		if (a % 10 == 0)
//		{
//			b++;
//		}
//		if (a / 10 == 9)
//		{
//			b++;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 10, 8, 9 };
//	int b = 0;
//	int a = 0;
//	int c = 0;
//	for (a = 0; a <10; a++)
//	{
//		b = arr[0];
//		for (c = 0; c <10; c++)
//			b = (arr[c] > b) ? arr[c] : b;
//	}
//	printf("%d ", b);
//	return 0;
//}
//int is_prinme(int i)
//{
//	for (int j = 2; i < sqrt(i); j ++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//#include<stdio.h>
//int binary_search(int arr[], int k, int a )
//{
//	int left = 0;
//	int right = a - 1;
//	while (left<=right)
//	{
//		int b = (left + right) / 2;
//		if (k > arr[b])
//		{
//			left = b + 1;
//		}
//		else if (k < arr[b])
//		{
//			right = b - 1;
//		}
//		else
//		{
//			return b;
//		}
//	}
//	if (left > right)
//		return -1;
//}
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 11;
//	int a = sizeof(arr) / sizeof(arr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, a );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (b == 2)
//		{
//			if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//			{
//				printf("29\n");
//			}
//			else
//				printf("28\n");
//		}
//		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//			printf("31\n");
//		else
//			printf("30\n");
//	}
//	return 0;;
//}
//#include<stdio.h>
//int max(int arr[])
//{
//	for (int a = 0; a <= 7; a++)
//	{
//		int b = arr[a];
//			int d, c;
//		for (c = 0, d = 0; c < 7; c++)
//		{
//			if (b >= arr[c])
//				d++;
//		}
//		if (d == 7)
//			return a;
//	}
//	return 0;
//}
//int min(int arr[])
//{
//	for (int a = 0; a < 7; a++)
//	{
//		int b = arr[a];
//		int d, c;
//		for (c = 0, d = 0; c <= 7; c++)
//		{
//			if (b <= arr[c])
//				d++;
//		}
//		if (d == 7)
//			return a;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[7];
//	for (int i = 0; i <= 6; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = max(arr);
//	int b = min(arr);
//	arr[a] = 0;
//	arr[b] = 0;
//	double e = 0;
//	for (int f = 0; f < 7; f++)
//	{
//		e += arr[f];
//	}
//	e = e / 5.0;
//	printf("%.2f", e);
//	return 0;
//}
		//for (int a = 0; a <= 7; a++)
		//{
		//	int d,c;
		//	int b = arr[a];
		//	for (c = 0, d = 0; c <= 7; c++)
		//	{
		//		if (b < arr[c])
		//			d++;
		//	}
		//	if (d == 7)
		//		arr[a] = 0;
		//	for (c = 0,d=0; c <= 7; c++)
		//	{
		//		if (b > arr[c])
		//			d++;
		//	}
		//	if (d == 7)
		//		arr[a] = 0;
		//}

//#include<stdio.h>
//#include<math.h>
//int is_prinme(int i)
//{
//	int j;
//	for ( j = 2; j < i; j ++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	if (j >= i){
//		return 1;
//	}
//}
//int main()
//{
//	int d = 0;
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int c = is_prinme(a);
//		if (c == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	printf("\n");
//	scanf("%d", &d);
//	int b = is_prinme(d);
//	if (b == 1)
//	{
//		printf("%d是素数\n", d);
//	}
//	else
//	{
//		printf("%d不是是素数\n", d);
//	}
//	return 0;
//}
//#include <stdio.h>
//int run_year(int a)
//{
//	return (a % 4 == 0 && a % 400 != 0 || a % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (run_year(year) == 1)
//		printf("%d是闰年\n",year);
//	else
//		printf("%d不是闰年\n",year);
//	return 0;
//}
//#include<stdio.h>
//void wap(int*x, int*y)
//{
//	int a = *x;
//	*x = *y;
//	*y = a;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d ", a);
//	printf("%d \n", b);
//	wap(&a, &b);
//	printf("%d ", a);
//	printf("%d ", b);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	for (int c= 1; c <= a; c++)
	{
		for (int d = 1; d <= a; d++)
		{
			int b = c*d;
			printf("%d*%d=%d ", d ,c, b);
			if (d >= c)
				break;
		}
		printf("\n");
	}
	return 0;
}