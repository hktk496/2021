#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* memmove(char*s1, char *s2, size_t k)
{

}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr2[] = { 2, 3 };
	memmove(arr2,arr1,16);
	return 0;
}