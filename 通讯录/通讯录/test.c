#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()//�˵�����
{
	printf("************************************\n");
	printf("******  1.add     |  2.del    ******\n");
	printf("******  3.search  |  4.modify ******\n");
	printf("******  5.show    |  6.sort   ******\n");
	printf("******  0.exit    |           ******\n");
	printf("************************************\n");
}

int main()
{
	int input;
	//�ýṹ�崴��ͨѶ¼con �������һ�������size 1
	struct Contact con;
	Initcontact(&con);//��ʼ��ͨѶ¼ 2
	do
	{
		menu();
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);//���ͨѶ¼��Ա����Ϣ 3
			break;
		case DEL:
			Delcontact(&con);//ɾ��ͨѶ¼��Ա����Ϣ 5
			break;
		case SEARCH:
			Searchcontact(&con);//����ͨѶ¼��Ա����Ϣ 6
			break;
		case MODIFY:
			Modifycontact(&con);//�޸�ͨѶ¼��Ա����Ϣ 7
			break;
		case SHOW:
			Showcontact(&con);//��ʾͨѶ¼��Ա����Ϣ 4
			break;
		case SORT:
			Sortcontact(&con);//����ͨѶ¼��Ա����Ϣ 8
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("�޸�ѡ��\n");
			printf("������������أ�");
			getchar(); getchar();
			system("cls");
		}
	} while (input);
	
	return 0;
}