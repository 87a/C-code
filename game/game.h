#define ROW 5
#define COL 5

#include<stdio.h>
#include <time.h>
#include<stdlib.h>
void initBoard(char board[ROW][COL], int row, int col);
void displayBoard(char  board[ROW][COL], int row, int col);
void playerMove(char  board[ROW][COL], int row, int col);
void computerMove(char  board[ROW][COL], int row, int col);
char isWin(char  board[ROW][COL], int row, int col);