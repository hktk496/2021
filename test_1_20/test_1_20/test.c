#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void geam()
{
	printf("��Ϸ��ʼ\n");
	srand((unsigned)time(NULL));
	int a = rand() % 100 + 1;
	int b = 0;
	while (1)
	{
		printf("������µ�����:>");
		scanf("%d", &b);
		if (a < b)
			printf("�´���\n");
		else if (a > b)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	printf("Ϊ�Ҽұ���Ф������ƵĲ�����С��Ϸ\n");
	int c = 0;
	do
	{
	printf("**********************************\n");
	printf("************** 1.play ************\n");
	printf("************** 0.exit ************\n");
	printf("**********************************\n");
	
	printf("��ѡ��>\n");
	scanf("%d", &c);

		switch (c)
		{
		case 1:
			geam();
			break;
		case 0:
			break;
		default:
			printf("�����������������:>\n");
			break;
		}
	} while (c);

	return 0;
}