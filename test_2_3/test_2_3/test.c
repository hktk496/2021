#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Wap_str(char s1[], char s2[],int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= sz-1; i++)
//	{
//		if (s1[i] == s2[sz-2] || s1[i] == s2[i - 1])
//			count++;
//	}
//	if (count == sz-1)
//		return 1;
//	count = 0;
//	for (i = 0; i <= sz-1; i++)
//	{
//		if (s1[i] == s2[sz-3] || s1[i]==s2[sz-2]||s1[i] == s2[i - 2])
//			count++;
//	}
//	if (count == sz-1)
//		return 1;
//	return 0;
//
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int sz = sizeof(s2) / sizeof(s1[0]);
//	int a=Wap_str(s1, s2,sz);
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void Wap_str(char s1[], int x, int sz)
//{
//	char s2[] = "*******************";
//	while (x)
//	{
//		strcpy(s2, s1);
//		int i = 0; 
//		for (i = 0; i < sz - 2; i++)
//		{
//			s1[i] = s2[i + 1];
//
//		}
//		if (i == sz - 2)
//		{
//			s1[i] = s2[0];
//		}
//		x--;
//	}
//	
//}
//int main()
//{
//	char s1[] = "ABCDEF";
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	int x = 0;
//	scanf("%d", &x);
//	Wap_str(s1, x, sz);
//	printf("%s\n", s1);
//	return 0;
//}
#include<stdio.h>
void find_num(int arr[3][3], int row, int col, int k)
{
	int x = 0;
	int y = col - 1;
	while (1)
	{
		if (arr[row - 1][col - 1]<k)
		{
			printf("找不到！\n");
			break;
		}
		else  if (arr[x][col-1] < k)
			x++;
		else if (arr[x][y] == k)
		{
			printf("找到了，下标是：%d,%d\n", x, y);
			break;
		}
		else
			y--;
	}
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);
	find_num(arr, 3, 3, k);
	return 0;
}