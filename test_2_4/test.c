#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
void game() {
	printf("ɨ��\n");
	char mine[ROWS][COLS] = { 0 };//������
	char show[ROWS][COLS] = { 0 };//�Ų��׵���Ϣ
	//��ʼ��
	initBoard(mine,ROWS,COLS,'0'); 
	initBoard(show, ROWS, COLS, '*');
	//��ӡ����
	displayBoard(mine,ROW,COL);
	displayBoard(show, ROW, COL);
	//������
	setMine(mine, ROW, COL);

	//ɨ��
	findMine(mine,show,ROW,COL);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;

		}
	} while (input);
}
int main() {
	test();
	return 0;

}