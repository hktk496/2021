#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int count = 0;
//	while (1)
//	{
//		int a, b;
//		b = n & 1;
//		a = m & 1;
//		if ((m == 0) && (n == 0))
//		{
//			break;
//		}
//		if ((a== 1) && (b == 0) ||( b== 1) && (a == 0))
//		{
//			count++;
//	    }
//		m=m >> 1;
//		n=n >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 15;
	int count = 0;
	if (n < 0){
		n = n*(-1);
	}
	while (n)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
			n >>= 1;
	}
	printf("%d", count);
	return 0;
}
