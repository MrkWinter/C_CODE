#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("***** 1.play  2.rule  3.exit *****\n");
	printf("**********************************\n");
}
void game()
{
	char ret;
	char Board[ROW][COL] = { 0 };
	InitBoard(Board, ROW, COL);//��ʼ������
	DisplayBoard(Board, ROW, COL);//��ӡ����
	while (1)
	{
		Playmove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		ret = Is_end(Board, ROW, COL);
		if (ret == '*' || ret == '#' || ret == 'Q')
			break;
		Computermove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		ret = Is_end(Board, ROW, COL);
		if (ret == '*' || ret == '#' || ret == 'Q')
			break;
	}
	if (ret == '*')
	{
		printf("��ϲ����ʤ!!!(3��󷵻ز˵�)\n");
		Sleep(3000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ(3��󷵻ز˵�)\n");
		Sleep(3000);
		system("cls");
	}
	else if (ret == 'Q')
	{
		printf("˫��ƽ��(3��󷵻ز˵�)\n");
		Sleep(3000);
		system("cls");
	}
}
void rule()
{
	printf("1.��Һ͵�����������\n");
	printf("2.������������������һ��ʤ��\n");
	printf("(5��󷵻ز˵�)");
	Sleep(5000);
	system("cls");
}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������ѡ��:");
	again:
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			rule();
			break;
		case 3:
			printf("��л��������\n");
			break;
		default:
			printf("û�д�ѡ������������:");
			goto again;
			break;
		}
	} while (input != 3);
}
int main()
{
	test();
	return 0;
}
