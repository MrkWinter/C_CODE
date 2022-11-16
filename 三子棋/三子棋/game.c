#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i, n;
	for (i = 0; i < row; i++)
	{
		for (n = 0; n < col; n++)
		{
			Board[i][n] = ' ';
		}
	}
}
void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i, n;
	for (i = 0; i < row; i++)
	{
		for (n = 0; n < col; n++)
		{
			if (n < col - 1)
				printf(" %c |", Board[i][n]);
			else
				printf(" %c \n", Board[i][n]);
		}
		if (i < row - 1)
		{
			for (n = 0; n < col; n++)
			{
				if (n < col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}
void Playmove(char Board[ROW][COL], int row, int col)
{
	int x, y;
	printf("�����ֵ�������\n");
	while (1)
	{
		printf("����������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ�ã�����������\n");
		}
		else
			printf("����Ƿ�������������\n");
	}
}
void Computermove(char Board[ROW][COL], int row, int col)
{
	printf("�����ֵ���������\n");
	Sleep(1000);
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}
char Is_end(char Board[ROW][COL], int row, int col)
{
	int i, n;
	for (i = 0; i < row; i++)//�����
	{
		for (n = 0; n < col; n++)
		{
			if (Board[i][0] != Board[i][n])
				break;
		}
		if (n == col && Board[i][0] != ' ')
			return Board[i][0];
	}
	for (n = 0; n < col; n++)//�����
	{
		for (i = 0; i < row; i++)
		{
			if (Board[0][n] != Board[i][n])
				break;
		}
		if (i == row && Board[0][n] != ' ')
			return Board[0][n];
	}
	for (i = 0; i < row; i++)//��б�����
	{
		if (Board[0][0] != Board[i][i])
			break;
	}
	if (i == row && Board[0][0] != ' ')
		return Board[0][0];
	for (i = 1, n = col - 2; n >= 0; i++, n--)//��б�����
	{
		if (Board[0][col - 1] != Board[i][n])
			break;
	}
	if (n == -1 && Board[0][col - 1] != ' ')
		return Board[0][col - 1];
	for (i = 0; i < row; i++)//ƽ��
	{
		for (n = 0; n < col; n++)
		{
			if (Board[i][n] == ' ')
				goto qu;
		}
	}
qu:
	if (i == row)
		return 'Q';
}