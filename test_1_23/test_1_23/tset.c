#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int strlen(char arr[])
//{
//	static int c = 0;
//	if (arr[c] == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		c++;
//		strlen(arr);
//	}
//	return c;
//}
//void reverse_string(char* arr[])
//{
//	int a =strlen(arr);
//	int left = 0;
//    int right = a-1;
//	if (left < right)
//	{
//	int *b = *arr[left];
//	*arr[left] = *arr[right];
//	*arr[right] = *arr[left];
//	left++;
//	right--;
//	reverse_string(&arr);
//	}
//    return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	printf("%s", arr);
//	int  *x = &arr[3];
//	int  *y = &arr[1];
//	int z = *x;
//	*x = *y;
//	*y = z;
//	//reverse_string(&arr);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//void reverse_string(char*arr,int left,int right)
//{
//	if (left >= right)
//		return 0;
//	else
//	{
//		char *px = &arr[left];
//		char *py = &arr[right];
//		char tmp = 0;
//		tmp = *px;
//		*px = *py;
//		*py = tmp;
//		reverse_string(&arr, left++, right--);
//		//left++;
//		//right--;
//	}
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s", arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	//while (1)
//	//{
//	//	if (left >= right)
//	//		break;
//	//	else
//	//	{
//	//		char *px = &arr[left];
//	//		char *py = &arr[right];
//	//		char tmp = 0;
//	//		tmp = *px;
//	//		*px = *py;
//	//		*py = tmp;
//	//		left++;
//	//		right--;
//	//	}
//	//}
//	reverse_string(&arr,left,right);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	//Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	int *px = &num1;
//	int *py = &num2;
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//#include<stdio.h>
//int  DigitSum(int j)
//{
//	static int a = 1;
//	if (j < 9)
//	{
//		return j;
//	}
//	else
//	{
//		a=(j%10)+DigitSum(j/10);
//	}
//	return a;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=DigitSum(n);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int jie(int x, int y)
//{
//	if (y != 0)
//	{
//		return(x*jie(x, y - 1));
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = jie(a, b);
//	printf("%d\n", c);
//	return 0;
//}
#include<stdio.h>
int fib(int x)
{
	if (x == 1 || x == 2)
		return 1;
	else
		return (fib(x - 1) + fib(x - 2));
}
int main()
{
	int a = 0;
	int b = 0;
	int f = 1;
	int d = 1;
	int e = 0;
	scanf("%d", &a);
	b = a;
	if (a == 1 || a == 2)
	{
		e = 1;
	}
	else
	{
		while (a>2)
		{
			e = d + f;
			d = f;
			f = e;
			a--;
		}
	}
	int z=fib(b);
	printf("%d ", z);
	printf("%d ", e);
	return 0;
}