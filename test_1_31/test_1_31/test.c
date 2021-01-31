#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" %d %d ", a + b, c);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//void my_strcpy(char* arr1, const char*arr2)
//{
//	/*assert(arr1 != NULL);
//	assert(arr2 != NULL);*/
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//void print(char arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	char arr[19] = { 0 };
//	char arr2[19] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = sz / 2;
//	int b = a;
//	int count = 0;
//	for (int i = 0; i <sz; i++)//讲arr初始化为空格
//	{
//		arr[i] = ' ';
//	}
//	arr[0] = '1';//1的ASC码值为49
//	print(arr, sz);
//	while (1)
//	{
//		//strcpy(arr2, arr);
//		for (int i = 1; i <sz; i++)
//		{
//			arr[i] = arr2[i - 1] + arr2[i] - '0';
//		}
//		print(arr, sz);
//		count++;
//		if (count == 1)
//		{
//			break;
//		}	
//	}
//	return 0;
//}


//int main()
//{
//	int arr[20][20] = { 0 };
//	for (int i=0; i < 20; i++)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			arr[i][0] = 1;
//			if (i >= 1 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i-1][j];
//			}
//		}
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j<=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int killer;
//	for (killer = 'A'; killer <= 'D';killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//			printf("killer is %c", killer);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;
	int e = 0;
	int c = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c= 1; c<= 5; c++)
			{
				for (d= 1; d<= 5; d++)
				{
					for (e = 1; e<= 5; e++)   
					{
						//A选手说：B第二，我第三；
						//B选手说：我第二，E第四；
						//C选手说：我第一，D第二；
						//D选手说：C最后，我第三；
						//E选手说：我第四，A第一；
						if (((b == 2) + (a == 3) == 1) + ((b == 2) + (e == 4) == 1) + ((c == 1) + (d == 2) == 1) + ((c == 5) + (d == 3) == 1) + ((e == 4) + (a == 1) == 1) == 5)
						{
							if (a*b*c*d*e==120)
								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
						}	
					}
				}
			}
		}
	}
	return 0;
}