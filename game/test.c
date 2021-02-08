#include<stdio.h>
#include "game.h"
//�˵�
void menu()
{
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");
}
//��Ϸ�㷨
void game()
{
	char ret = 0;
	char board[ROW][COL];
	initBoard(board, ROW, COL);//��ʼ������
	displayBoard(board,ROW,COL);//��ӡ����
	while (1)
	{
		//�������
		playerMove(board,ROW,COL);
		displayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = isWin(board, ROW, COL);
		if (ret != 'c')break;
		//��������
		computerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		//�ж���Ӯ
		if (ret != 'c')break;
	}
	if (ret == '*')printf("���Ӯ\n");
	else if (ret == '#')printf("����Ӯ\n");
	else printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
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

int main()
{
	test();
	return 0;
}