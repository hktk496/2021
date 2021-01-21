#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a < b)
//		{
//			int d;
//			d = a;
//			a = b;
//			b = d;
//		}
//		if (a < c)
//		{
//			int d;
//			d = a;
//			a = c;
//			c = d;
//		}
//		if (b<c)
//		{
//			int d;
//			d = b;
//			b = c;
//			c = d;
//		}//将a,b,c先排序
//		if ((b + c)>a && (a - b) <c)//判断是否构成三角形
//		{
//			if (a == b&&b == c)
//			{
//				printf("Equilateral triangle!");//判断是否为等边三角形
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!");//判断是否为等腰三角形
//			}
//			else
//				printf("Ordinary triangle!");
//		}
//		else
//			printf("Not a triangle!");
//	}
//	
//return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	double d, e, t;
//	scanf("%a %b %c", &a, &b, &c);
//	
//	d = a + b + c;
//	//e = d / 2;
//	//t = sqrt(e*(e - a)*(e - b)*(e - c));
//	printf("circumference=%.2f", d);
//	//printf("area=%.2f", t);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	double x, y;
//	scanf("%d %d %d", &a, &b, &c);
//	x = a + b + c;
//	y = x / 2;
//	printf("circumference=%.2f area=%.2f", x, sqrt(y*(y - a)*(y - b)*(y - c)));
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	double d,e,f;
//	scanf("%d %d %d", &a, &b, &c);
//	d = a + b + c;
//	e = d / 2;
//	f = sqrt(e*(e - a)*(e - b)*(e - c));
//	printf("circumference=%.2f ", d);
//	printf("area=%.2f", f);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int c = 0;
//	int d = 0;
//	scanf("%d",&a);
//	for (b = 0; b < a; b++)
//	{
//		if (b % 2 == 0)
//			c++;
//		else
//			d++;
//	}
//	printf("%d %d", c, d);
//	return 0;
//}