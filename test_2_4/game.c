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
	printf("������Ҫ�Ų������\n");
	scanf("%d%d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		//����
		if (mine[x][y] == '1') {
			printf("�㱻ը����\n");
			displayBoard(mine, row, col);
			break;
		}
		//δ���ף�������Χ����
		else {
			int count = getMineCount(mine, x, y);
			show[x][y] = count + '0';
			displayBoard(show, ROW, COL);
			win++;
		}
	}
	else {
		printf("��������Ƿ�������������\n");
	}
	}
	if (win == row * col - EASY_COUNT) {
		printf("��ϲ�����׳ɹ�\n");
		displayBoard(mine, ROW, COL);
	}
}