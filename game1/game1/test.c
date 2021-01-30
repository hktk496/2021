#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
#include"gaem.h"
void muen()//打印菜单
{
	printf("************************\n");
	printf("******** 1.Play ********\n");
	printf("******** 0.Eaxt ********\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };//建立一个ROW行，COL列的二维数组
	intnboard(board, ROW, COL);//初始化棋盘，全部填入空格
	displayboard(board, ROW, COL);//打印棋盘
	while (1)
	{
		playermove(board, ROW, COL);//玩家走
		displayboard(board, ROW, COL);//打印棋盘
		int b = checkwin(board, ROW, COL);
		if (b == 0)
		{
			printf("玩家赢\n");
			break;
		}
		if (b == -1)
		{
			printf("平局！\n");
			break;
		}
		computermove(board, ROW, COL);//电脑走
		displayboard(board, ROW, COL);//打印棋盘
		b = checkwin(board, ROW, COL);
		if (b == 1)
		{
			printf("电脑赢\n");
			break;
		}
		if (b == -1)
		{
			printf("平局！\n");
			break;
		}

	}
}
int main()
	{
		srand((unsigned)time(NULL));
		int a = 1;
		while (a)
		{
			muen();
			printf("请选择:>");
			scanf("%d", &a);
			switch (a)
			{
			case 1:
				game();
				break;
			case 0:
				printf("游戏退出\n");
				break;
			default:
				printf("选择错误，请重新选择：>\n");
				break;
			}
		}
		return 0;
	}