#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
#include"gaem.h"
void muen()//��ӡ�˵�
{
	printf("************************\n");
	printf("******** 1.Play ********\n");
	printf("******** 0.Eaxt ********\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };//����һ��ROW�У�COL�еĶ�ά����
	intnboard(board, ROW, COL);//��ʼ�����̣�ȫ������ո�
	displayboard(board, ROW, COL);//��ӡ����
	while (1)
	{
		playermove(board, ROW, COL);//�����
		displayboard(board, ROW, COL);//��ӡ����
		int b = checkwin(board, ROW, COL);
		if (b == 0)
		{
			printf("���Ӯ\n");
			break;
		}
		if (b == -1)
		{
			printf("ƽ�֣�\n");
			break;
		}
		computermove(board, ROW, COL);//������
		displayboard(board, ROW, COL);//��ӡ����
		b = checkwin(board, ROW, COL);
		if (b == 1)
		{
			printf("����Ӯ\n");
			break;
		}
		if (b == -1)
		{
			printf("ƽ�֣�\n");
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
			printf("��ѡ��:>");
			scanf("%d", &a);
			switch (a)
			{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ�˳�\n");
				break;
			default:
				printf("ѡ�����������ѡ��>\n");
				break;
			}
		}
		return 0;
	}