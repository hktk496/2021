#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void my_strcpy(char *s1,const char *s2)
//{
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//}
//void my_strcat(char *s1, const char *s2)
//{
//	char*tmp = s1;
//	while (*s1!='\0')
//	{
//		*s1++;
//	}
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	*s1 = '\0';
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[] = "**********";
//	my_strcat(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//int my_strcmp(char arr1[], char arr2[])
//{
//	int i = -1;
//	int count=0;
//	for (i = 0;; i++)
//	{
//		if (arr1[i] == '\0'&&arr2[i] == '\0')
//			return 0;
//		else if (arr1[i] == '\0')
//			return -1;
//		else if (arr2[i] == '\0')
//			return 1;
//		else if (arr1[i] > arr2[i])
//			return 1;
//		else if (arr1[i] == arr2[i])
//			count++;
//		else
//			return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[] = "hello bit";
//	int a=my_strcmp(arr1, arr2);
//	if (a < 0)
//		printf("小于\n");
//	else if (a == 0)
//		printf("等于\n");
//	else
//		printf("大于\n");
//	return 0;
//}
//#include<stdio.h>
//char *my_strstr(const char *str1, const char *str2)
//{
//	if (*str2)
//	{
//		while (*str1)
//		{
//			for (int i = 0; *(str1 + i) == *(str2 + i); i++)
//			{
//				if (*(str2 + i + 1)!='\0')
//				{
//					return (char *)str1;
//				}
//			}
//			str1++;
//		}
//		return NULL;
//	}
//	else
//	{
//		return (char *)str1;
//	}
//}
//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "de";
//	char*s3 = my_strstr(s1, s2);
//	printf("%s\n", s3);
//	return 0;
//}
#include<stdio.h>
int my_strlen(char*s1)
{
	char*p = s1;
	while (*p != '\0')
		*p++;
	return p - s1;
}
int main()
{
	char arr[] = "hello bit";
	int a = my_strlen(arr);
	printf("%d\n", a);
	return 0;
}
