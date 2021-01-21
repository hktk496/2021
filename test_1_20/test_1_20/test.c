#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void geam()
{
	printf("游戏开始\n");
	srand((unsigned)time(NULL));
	int a = rand() % 100 + 1;
	int b = 0;
	while (1)
	{
		printf("请输入猜的数字:>");
		scanf("%d", &b);
		if (a < b)
			printf("猜大了\n");
		else if (a > b)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	printf("为我家宝贝肖子燕设计的猜数字小游戏\n");
	int c = 0;
	do
	{
	printf("**********************************\n");
	printf("************** 1.play ************\n");
	printf("************** 0.exit ************\n");
	printf("**********************************\n");
	
	printf("请选择：>\n");
	scanf("%d", &c);

		switch (c)
		{
		case 1:
			geam();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入:>\n");
			break;
		}
	} while (c);

	return 0;
}