#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int c = 0;
	int times = 0;
	int ret, guess;
	while( c != 1 && c != 2 && c != 3 && c != 4)
	{
		printf("1.�� 2.��ͨ 3.���� 4.������\n");
		printf("��ѡ���Ѷ�:>");
		scanf("%d", &c);
		if (c != 1 && c != 2 && c != 3 && c != 4)
			printf("û�д��Ѷ�\n");
	}
	if (1 == c)
	{
		ret = rand() % 10+1;
		//rand��������α������������η���һ�����͵����֣�һ����strand����һ��ʹ�ã������Ĭ�ϻ���Ϊ��ͷ��(��stdlib.h)
		printf("��±��ε�����(0~10):>");
	}
	else if (2 == c)
	{
		ret = rand() % 100+1;
		printf("�²±��ε�����(0~100):>");
	}
	else if (3 == c)
	{
		ret = rand() % 1000+1;
		printf("�²±��ε�����(0~1000):>");
	}
	else if (4 == c)
	{
		ret = rand() % 10000+1;
		printf("�²±��ε�����(1~10000):>");
	}
	while (1)
	{
		scanf("%d", &guess);
		times++;
		if (ret > guess)
		{
			printf("��С��Ŷ\n");
			printf("���ٴ�����:>");
		}
		else if (ret < guess)
		{
			printf("�´���Ŷ\n");
			printf("���ٴ�����:>");
		}
		else
		{
			printf("��ϲ�㣬�¶���!!!\n");
			break;
		}
	}
	printf("��������%d�β¶������֣��´μ���Ŷ\n", times);
	printf("ע��5����Զ����ز˵�");
	Sleep(5000);
	system("cls");
}
void menu()
{
	printf("*************������С��Ϸ**************\n");
	printf("***************************************\n");
	printf("****  1.play    2.rule    3.exit  *****\n");
	printf("***************************************\n");
}
int main()
{    
	int input = 0;
	//time����������ϵͳʱ�䷵��һ��ʱ�������������Ϊtime_t,��������ǿ������ת��
	//time(��������time_t*timerָ������)(NULL)Ϊ��ָ�벻����Ч��(��time.h)
	srand((unsigned int)time(NULL));
	//srand����������rand�����Ļ���srand()������һ�������(unsigned int��)���ɴﵽrand��������һ���������Ч��
	//���û��㵱����������ʱ����һ�ξ��У�������û�ʹ���ɵ������ֵ���𲻴�
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			 break;
		 case 2:
			 printf("1.��ʼ��Ϸ��ϵͳ���Զ�����һ����\n");
			 printf("2.�����Ҫ����ϵͳ��ʾֱ���¶�����\n");
			 printf("3.�������������ڼ��β¶����ְ�\n");
			 printf("ע��10����Զ����ز˵�");
			 Sleep(10000);
			 system("cls");
			 break;
		 case 3:
		     printf("�����˳���Ϸ����л��������\n");
			 break;
		 default:
			 printf("û�����ѡ�����������\n");
			 break;
		}

	}
	while (input != 3);
	return 0;
}