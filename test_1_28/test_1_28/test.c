#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen1(char arr[])
//{
//	int a = 0;
//	while (arr[a] != '\0')
//	{
//		a++;
//	}
//	return a;
//}
//int my_strlen2(char* arr)
//{
//	int a = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		a++;
//	}
//	return a;
//}
//int my_strlen3(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen3(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int a=my_strlen1(arr);
//	printf("%d\n", a);
//	a = 0;
//	a = my_strlen2(arr);
//	printf("%d\n", a);
//	a = 0;
//	a = my_strlen3(arr);
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char* arr1, const char*arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "**********";
//	char arr2[] = "hello,bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int p = 0;
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	int j = sz;
	while (1)
	{
		if (arr[p] % 2 == 1)
			p++;
		else if (arr[p] % 2 == 0)
		{
			while (1)
			{
				if (arr[sz] % 2 == 0)
					sz--;
				else if (arr[sz] % 2 == 1)
				{
					int tmp = arr[p];
					arr[p] = arr[sz];
					arr[sz] = tmp;
					sz--;
					break;
				}
			}
			p++;
		}
		if (p >= sz)
			break;
	}
	for (int i = 0; i <= j; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}