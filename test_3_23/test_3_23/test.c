#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void* my_strcat(char *tmp,const char *str)
//{
//	char*p = tmp;
//	while (*tmp++)
//		;
//	tmp--;
//	for (; *str != '\0'; str++)
//	{
//		*tmp = *str;
//		tmp++;
//	}
//	return p;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char arr2[] = "bit";
//	my_strcat(arr,arr2);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//void* my_strcpy(char *str, const char*strs)
//{
//	char* p = strs;
//	while (*str = *strs)
//	{
//		str++;
//		strs++;
//		if (*strs == '\0')
//			break;
//	}
//	return p;
//}
//int main()
//{
//	char arr[20] = "hello bit";
//	char arr2[] = "***********";
//	my_strcpy(arr2, arr);
//	printf("%s", arr2);
//	return 0;
//}
#include<stdio.h>
int find(int *arr,int sz)
{
	int a = 0,b,c;
	for (b = 0; b < sz; b++)
	{
		a = 0;
		for (c=0; c < sz; c++)
		{
			if (b == c)
				continue;
			if (*(arr + b) == *(arr + c))
			{
				a = -1;
				break;
			}
		}
		if (a != -1)
			break;
	}
	if (b != sz)
		return b;
	else
		return a;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2  };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int b = find(arr,sz);
	if (b != -1)
	{
		printf("找到了，单着的数下标是：%d\n", b);
	}
	else
	{
		printf("找不到！\n");
	}
	return 0;
}