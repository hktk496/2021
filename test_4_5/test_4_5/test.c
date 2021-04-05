#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int s = 0, count = 0;
	int arr[2] = { 0 };
	for (int i = 0; i<numsSize; i++)
	{
		s ^= nums[i];
	}
	while (((s >> count) & 1) != 1)
	{
		count++;
	}
	int x = 0, y = 0;
	for (int i = 0; i<numsSize; i++)
	{
		if ((nums[i]>> count) & 1)
		{
			x ^= nums[i];
		}
		else
		{
			y ^= nums[i];
		}
	}
	int* arr1 = (int*)malloc(sizeof(int)* 2);
	arr1[0] = x;
	arr1[1] = y;
	*returnSize = 2;
	return arr1;


}
int main()
{
	int arr2[4] = {1,5,6,5};
	int arr3[] = { 0 };
	singleNumbers(arr2, 4, arr3);
	for (int j = 0; j < 2; j++)
	{
		printf("%d", arr3[j]);
	}
	return 0;
}