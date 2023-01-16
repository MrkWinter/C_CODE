#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void Initcontact(struct Contact* ps)//��ʼ��ͨѶ¼
{
	ps->date =(struct PeoInfo*)malloc(STA * sizeof(struct PeoInfo)); //��date ָ��Ķ�̬�ڴ�����Ϊ��ʼSTA��Ԫ��
	ps->size = 0;//���õ�ǰͨѶ¼��Ա��
	ps->capacity = STA;//����ͨѶ¼����
}
void Addcontact(struct Contact* ps)//���ͨѶ¼��Ա����Ϣ
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* str = (struct PeoInfo*)realloc(ps->date, (ps->capacity + 5) * sizeof(struct PeoInfo));
		if (str == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		else
		{
			ps->date = str;//�޸ĺ�ṹ����ָ��date�ı䣬����ʱ��Ӱ��
			ps->capacity += 5;
			printf("ͨѶ¼���������ɹ���������Ϊ%d\n", ps->capacity);
		}
	}
		printf("��������Ϣ��\n");
		printf("������");
		scanf("%s", ps->date[ps->size].name);
		printf("���䣺");
		scanf("%d", &ps->date[ps->size].age);
		printf("�Ա�");
		scanf("%s", ps->date[ps->size].sex);
		printf("�绰��");
		scanf("%s", ps->date[ps->size].tele);
		printf("��ַ��");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("������\n");
		printf("������������أ�");
		getchar(); getchar();
		system("cls");
}


void Showcontact(const struct Contact* ps)//��ʾͨѶ¼��Ա����Ϣ
{
	int i;
	printf("%-5s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-5s %-5d %-5s %-12s %-30s\n", 
			ps->date[i].name,
			ps->date[i].age,
			ps->date[i].sex,
			ps->date[i].tele,
			ps->date[i].addr);
	}
	printf("������������أ�");
	getchar();getchar();
	system("cls");
}
static int Findbyname(const struct Contact* ps, char *name)//������������Ԫ�ط����±�
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->date[i].name, name)==0)
		{
			break;
		}
	}
	if (i == ps->size)
		return -1;
	else
		return i;
}


void Delcontact(struct Contact* ps)//ɾ��ͨѶ¼��Ա����Ϣ
{
	int ret;
	char name[MAX_NAME];
	printf("������ɾ����������");
	scanf("%s", name);
	ret = Findbyname(ps, name);//������������Ԫ�ط����±�
	if (ret == -1)
		printf("���޴���\n");
	else
	{
		int i;
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->date[i] = ps->date[i + 1];
		}
		ps->size--;//����һ����
		printf("ɾ���ɹ�\n");
	}
	printf("������������أ�");
	getchar(); getchar();
	system("cls");
}


void Searchcontact(const struct Contact* ps)//����ͨѶ¼��Ա����Ϣ
{
	int ret;
	char name[MAX_NAME];
	printf("���������������");
	scanf("%s", name);
	ret = Findbyname(ps, name);
	if (ret == -1)
		printf("���޴���\n");
	else
	{
		printf("%-5s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-5s %-5d %-5s %-12s %-30s\n",
				ps->date[ret].name,
				ps->date[ret].age,
				ps->date[ret].sex,
				ps->date[ret].tele,
				ps->date[ret].addr);
	}
	printf("������������أ�");
	getchar(); getchar();
	system("cls");
}


void Modifycontact(struct Contact* ps)//�޸�ͨѶ¼��Ա����Ϣ 
{
	int ret;
	char name[MAX_NAME];
	printf("�������޸���������");
	scanf("%s", name);
	ret = Findbyname(ps, name);
	if (ret == -1)
		printf("���޴���\n");
	else
	{
		printf("��������Ϣ��\n");
		printf("������");
		scanf("%s", ps->date[ret].name);
		printf("���䣺");
		scanf("%d", &ps->date[ret].age);
		printf("�Ա�");
		scanf("%s", ps->date[ret].sex);
		printf("�绰��");
		scanf("%s", ps->date[ret].tele);
		printf("��ַ��");
		scanf("%s", ps->date[ret].addr);
		printf("�޸����\n");
	}
	printf("������������أ�");
	getchar(); getchar();
	system("cls");
}


void menu1()//�������ݱ�
{
	printf("****************************\n");
	printf("***** 1.����  |  2���� *****\n");
	printf("***** 3.�Ա�  |  4�绰 *****\n");
	printf("***** 5.��ַ  |        *****\n");
	printf("****************************\n");
}
int absort(const void* e1, const void* e2)//�ַ�����
{
	return strcmp((char*)e1, (char*)e2);
}
int numsort(const void* e1, const void* e2)//��������
{
	return *(int*)e1 - *(int*)e2;
}
void swap(char* p1, char*p2, int width)//��������
{
	int i;
	for (i = 0; i < width; i++)
	{
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2++;
	}
}
void* my_qsort(void* base, size_t num, size_t width,int(*cmp)(const void* e1, const void* e2))//������
{
	int i,j;
	void * ret = base;
	for (i = 0; i <(int) num - 1; i++)
	{
		for (j = 0; j <(int) num - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base +(j+1)*width) > 0)
			{
					swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
	return base;
}
void Sortcontact(struct Contact* ps)//����ͨѶ¼��Ա����Ϣ
{
	int input;
	menu1();
	printf("��������������");
	scanf("%d", &input);
	switch(input)
	{
	case 1:
		my_qsort((void*)ps->date[0].name,ps->size, sizeof(ps->date[0]), absort);
		break;
	case 2:
		my_qsort((void*)(&(ps->date[0].age)), ps->size, sizeof(ps->date[0]), numsort);
		break;//���޸��������в�ͬ���ȵ������ַ���ʱ���������������������ֲ��ֶ�ʧ
		//������ṹ��Ĵ洢��ʽ�йأ����������޸��˴������ֵ��ڴ棬���������ʧ
	case 3:
		my_qsort((void*)ps->date[0].sex, ps->size, sizeof(ps->date[0]), absort);
		break;
	case 4:
		my_qsort((void*)ps->date[0].tele, ps->size, sizeof(ps->date[0]), absort);
		break;
	case 5 :
		my_qsort((void*)ps->date[0].addr, ps->size, sizeof(ps->date[0]), absort);
		break;
	default:
		printf("�޸�ѡ��\n");
		break;
	}
	if(input<=5&&input>=1)
	printf("�������\n");
	printf("������������أ�");
	getchar(); getchar();
	system("cls");
}

void Destroycontact(struct Contact* ps)//ɾ��ͨѶ¼��Ա����Ϣ
{
	free(ps->date);//�ͷ��ڴ�
	ps->date = NULL;
}