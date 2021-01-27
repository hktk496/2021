#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = &arr;
//	int i = 0;
//	int sz = sizeof (arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++,*p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] ;
//	gets(arr);
//	for (int i = strlen(arr)-1; i >=0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	printf("%s", str);
//	return 0;
//}
//#include<stdio.h>
//int sn(int x)
//{
//	static int count = 0;
//	if (count<=3)
//	{
//		count++;
//		return x+sn((x * 10) + (x%10));
//	}
//	else
//	    return x;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int b = sn(a);
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100000; a++)
//	{
//		int count = 1;
//		int b = a;
//		while (b >= 10)
//		{
//			count++;
//			b = b / 10;
//		}
//		if (count == 1)
//			printf("%d ", a);
//		else if (count == 2)
//		{
//			int h = a % 10;
//			if (a == ((a / 10)*(a / 10) + h*h))
//				printf("%d ", a);
//		}
//		else if (count == 3)
//		{
//			int h = a % 10;
//			int d = (a / 100);
//			int e = (a / 10)%10;
//			if (a == (d*d*d + e*e*e + h*h*h))
//				printf("%d ", a);
//		}
//		else if (count == 4)
//		{
//			int h = a % 10;
//			int d = (a / 100)%10;
//			int e = (a / 10) % 10;
//			int f = (a / 1000);
//			if (a == (f*f*f*f + d*d*d*d + e*e*e*e + h*h*h*h))
//				printf("%d ", a);
//	    }
//		else if (count == 5)
//		{
//			int h = a % 10;
//			int d = (a / 100) % 10;
//			int e = (a / 10) % 10;
//			int f = (a / 1000)%10;
//			int g = a / 10000;
//			if (a == (g*g*g*g*g + f*f*f*f*f + d*d*d*d*d + e*e*e*e*e + h*h*h*h*h))
//				printf("%d ", a);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//void print(char arr[], int sz)
//{
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	char arr[13] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	for (int i = 0; i < sz; i++)//初始化为空格
//	{
//		arr[i] = ' ';
//	}
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	int j = mid;
//	arr[mid] = '*';
//	print(arr, sz);
//	while (1)
//	{
//		int x = ++mid;
//		arr[x] = '*';
//		int y = --j;
//		arr[y] = '*';
//		print(arr,sz);
//		if (x >= right&&y <= left)
//			break;
//	} 
//	while (1)
//	{
//		//int x = ++mid;
//		arr[left] = ' ';
//		left++;
//		//int y = --j;
//		arr[right] = ' ';
//		right--;
//		print(arr, sz);
//		if (left>right)
//			break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int ping(int a)
//{
//	static int count = 1;
//	if (a % 2 == 1)
//		count++;
//	if (a!=0)
//	{
//		if (count % 3 == 0)
//		{
//			count = 1;
//			return a + ping(a / 2) + 1;
//		}
//		return a + ping(a / 2);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int i = ping(a);
//	int b = a / 2;//b=10
//	a = a + b;
//	int c = b / 2;//c=5
//	a = a + c;
//	int d = c / 2;//d=2余1
//	a = a + d;
//	int e = d / 2;//e=1+1
//	a = a + e;
//	a += 1;
//	printf("%d\n",a);
//	printf("%d\n",i);
//	return 0;
//}