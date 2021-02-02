#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char*e1, char*e2,int width)
{
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++; e2++;
	}
}
int cmp_int(const void *e1, const void *e2 )
{
	return (*(int*)e1 - *(int*)e2);
}
void double_sort(void* base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_str(const void*e1, const void *e2)
{
	return (strcmp(e1, e2));
}
void test1()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int s = sz;
	print(arr, sz);
	double_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr,s);
}
struct stu
{
	char name[20];
	int age;
};
int cmp_age(const void *e1, const void *e2)
{
	return (((struct stu*)e1)->age-((struct stu*)e2)->age);
}
int cmp_name(const void *e1, const void *e2)
{
	return (strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name));
}
void test2()
{
	struct stu arr[] = { { "zhangsan", 20 }, { "lisi", 15 }, { "wangwu", 30 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_name);
}
int main()
{
	test1();
	test2();
	return 0;
}