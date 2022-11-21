#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initboard(char Board[ROWS][COLS], int rows, int cols, char set)
{
	int i,j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			Board[i][j] = set;
	}
}
void Displayboard(char Board[ROWS][COLS], int row, int col)
{
	int i,j;
	for (j = 1; j <= col; j++)
	{
		if (j == 1)
			printf("    ");
		printf("%d ", j);//��ʾ��
	}
	putchar('\n');
	for (j = 1; j <= col; j++)
	{
		if (j == 1)
			printf("   ");
	    printf("--", j);
	}
	putchar('\n');
	for (i = 1; i <= row; i++)
	{
		printf("%d | ", i);//��ʾ��
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);

		}
		printf("\n");
	}
}
void Setbomb(char mine[ROWS][COLS], int row, int col)
{
	int count = Bomb;//��������
	while(count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (mine[x][y] == ' ')
		{
			mine[x][y] = '+';
			count--;
		}
	}
}
void play_check_chess(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("��������������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col & show[x][y] == '*')
		{

			if (mine[x][y] == '+')//�鵽�ף���Ϸʧ��
			{
				system("cls");
				printf("(%d,%d)����Ϊ�ף���Ϸʧ��\n", x, y);
				Displayboard(mine, ROW, COL);
				break;
			}
			else if (mine[x][y] == ' ')//δ�鵽��
			{
				system("cls");
				printf("��������:%d\n", Bomb);
				findbomb(mine, show, x, y);//�Ŵ�������Χ����
				Displayboard(show, ROW, COL);
			}
			if (resetbomb(show,row,col)==1)
			{
				system("cls");
				printf("��ϲ����ʤ!!!\n");
				Displayboard(show, ROW, COL);
				break;
			}
		}
		else
		{
			printf("����Ƿ� ������������!\n");
		}
	}
}
void findbomb(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{ 
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//�ٴεݹ�ʱ�������������������鷶Χ�в���
	{
		int numbs = 0;
		int X = x + 1;
		int Y = y + 1;
		for (x = X - 2; x <= X; x++)//Ҳ�����üӷ��Ѱ˸��ַ�ȫ������ ԭ��'3'-'0'=3,7+'0'='7'
		{
			for (y = Y - 2; y <= Y; y++)//
			{
				if (mine[x][y] == '+')
					numbs++;
			}
		}
		x = X - 1;
		y = Y - 1;
		if (numbs != 0)
			show[x][y] = numbs + '0';//ת�����ַ�--�ַ�����-'0'=�������֣���������+'0'=�ַ�����
		else
		{
			show[x][y] = ' ';
			for (x = X - 2; x <= X; x++)
			{
				for (y = Y - 2; y <= Y; y++)
				{
					if (show[x][y]==' ')
						continue;
					findbomb(mine, show, x, y);//����������Χ���ף���ݹ������ڵ�������Χ����
				}
			}
		}
	}
}
int resetbomb(char show[ROWS][COLS], int row, int col)
{
	int i,j,count=0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	if (count ==Bomb)
		return 1;
	else
		return 0;
}