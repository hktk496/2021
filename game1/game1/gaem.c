#define _CRT_SECURE_NO_WARNINGS 1
#include"gaem.h"
void intnboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[j][i]);
			if (j<row - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < row; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	printf("玩家走>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你选择的坐标：>");
		scanf("%d %d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else if (board[x - 1][y - 1] == '*' || board[x - 1][y - 1] == '#')
			printf("坐标被占用，请重新输入!\n");
		else
			printf("坐标非法，请重新输入!\n");
	}

}
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走>\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % row;
		if (board[x ][y] == ' ')
		{
			board[x][y ] = '#';
			break;
		}
	}
}
int is_full(char board[ROW][COL], int row, int col)//检查是否满了，如果满了返回0，没满返回-1；
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				count = -1;
			}
		}
		
	}
	return count;
}
char checkwin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < col; x++)
	{
		if (board[x][1] == board[x][2] && board[x][2] == board[x][0] && board[x][0] == '#')
			return 1;
		if (board[x][1] == board[x][2] && board[x][2] == board[x][0] && board[x][0] == '*')
			return 0;
	}
	for (x = 0; x < row; x++)
	{
		if (board[1][x] == board[0][x] && board[1][x] == board[2][x] && board[1][x] == '#')
			return 1;
		if (board[1][x] == board[0][x] && board[1][x] == board[2][x] && board[1][x] == '*')
			return 0;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == '*')
		return 0;
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == '#')
		return 1;
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] == '*')
		return 0;
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] == '#')
		return 1;
	int d = is_full(board, row, col);
	if ( d == 0)
	{
		return -1;
	}
	return 2;
}
