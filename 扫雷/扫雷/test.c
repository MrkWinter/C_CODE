#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("***** 1.play  2.rule  3.exit *****\n");
	printf("**********************************\n");

}
void rule()
{
	system("cls");
	printf("1.��������к��е������������\n");
	printf("2.�����������ף�����ʾ���������׵�����\n");
	printf("3.��������Ϊ�ף�����Ϸʧ��\n");
	printf("4.�����������꼴�ɻ����Ϸʤ��\n");
	printf("(12��󷵻ز˵�)");
	Sleep(12000);
	system("cls");
}
void game()
{
	system("cls");
	printf("��������:%d\n", Bomb);
	char mine[ROWS][COLS] = { 0 };//���庬����
	char show[ROWS][COLS] = { 0 };//����չʾ��
	Initboard(mine, ROWS, COLS,' ');//��ʼ��������
	Initboard(show, ROWS, COLS,'*');//��ʼ��չʾ��
	Setbomb(mine, ROW, COL);//���������ϵ���
	Displayboard(show, ROW, COL);//��ӡչʾ��
	play_check_chess(mine, show, ROW, COL);//����
}
void test()
{
	int input;
	char arr[] = { 0 };
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��ѡ��:");
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
			printf("��л��������");
			break;
		default:
			printf("�޸�ѡ�������ѡ��:");
			gets(arr);
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