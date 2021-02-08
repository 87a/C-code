#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void initBoard(char board[ROW][COL],int row,int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void displayBoard(char  board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			else
				printf("\n");
		}
		if(i<row-1)
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
				else
					printf("\n");
			}
		 
	}
}

void playerMove(char  board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走:\n");
	//判断坐标合法性
	while (1) {
		printf("请输入坐标:\n");
		scanf("%d%d", &x, &y);
		if (x<1 || x >row || y<1 || y>col)
			printf("坐标非法，请重新输入\n");
		else
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else printf("此处已有子\n");
	}
}

void computerMove(char  board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走\n");
	while (1) {
	x = rand() % ROW;
	y = rand() % COL;
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
		break;
	}
	}

}

char isWin(char  board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 1;
	for (i = 0; i < row; i++)
	{
		char p = board[i][0];
		for (j = 1; j < col; j++)
		{
			if (board[i][j] == ' ' || board[i][j] != p)break;
		}
		if (j == col && board[i][0] == '*')return '*';
		else if (j == col && board[i][0] == '#')return '#';
	}
	for (j = 0; j< col; j++)
	{
		char p = board[0][j];
		for (i = 1; i < row; i++)
		{
			if (board[i][j] == ' ' || board[i][j] != p)break;
		}
		if (i == row && board[0][j] == '*')return '*';
		else if (i == row && board[0][j] == '#')return '#';
	}
	char p = board[0][0];
	for (i = 1; i < row; i++) {
		if (board[i][i] == ' ' || board[i][i] != p)break;
	}
	if (i == row && board[0][0] == '*')return '*';
	else if (i == row && board[0][0] == '#')return '#';
	p = board[0][col-1];
	for (i = 1; i < row; i++) {
		if (board[i][col-i-1] == ' ' || board[i][col-i-1] != p)break;
	}
	if (i == row && board[0][col-1] == '*')return '*';
	else if (i == row && board[0][col-1] == '#')return '#';
	int count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')count++;
		}
	}
	if (count == 9)return 't';
	return 'c';

}