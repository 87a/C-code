#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdlib.h>
void initBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] =set;

		}
	}
}
void displayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i= 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}
}

void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int getMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y] - 8 * '0';
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0,win=0;
	while (win<row*col-EASY_COUNT){
	printf("请输入要排查的坐标\n");
	scanf("%d%d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		//踩雷
		if (mine[x][y] == '1') {
			printf("你被炸死了\n");
			displayBoard(mine, row, col);
			break;
		}
		//未踩雷，计算周围雷数
		else {
			int count = getMineCount(mine, x, y);
			show[x][y] = count + '0';
			displayBoard(show, ROW, COL);
			win++;
		}
	}
	else {
		printf("输入坐标非法，请重新输入\n");
	}
	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜你排雷成功\n");
		displayBoard(mine, ROW, COL);
	}
}