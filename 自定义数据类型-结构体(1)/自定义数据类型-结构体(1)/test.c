#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.����Ľṹ������
//�����ṹ������
//struct
//{
//	char a;
//	int b;
//}s1;//�ṹ�����
//
//struct
//{
//	char a;
//	int b;
//}*p;//�ṹ��ָ��
//int main()
//{
//	//*p = &s1;//���Ϸ�
//	return 0;
//}
//�ṹ���������
//struct node
//{
//	int date;
//	struct node* n;
//};
//int main()
//{   struct node s3 = { 3,NULL };	
//    struct node s2 = { 2,&s3 };
//	struct node s1 = { 1,&s2 };
//	printf("%d", s1.n->n->date);//��ʽ
//	return 0;
//}
/*typedef struct stu
{
	char name;
	int age;
}stu;*///�ṹ���������¶����stu
//�ṹ���ڴ����
//struct s1
//{
//	char a;
//	char b;
//	int c;
//};
//struct s2
//{
//	char a;
//	int c;
//	char b;
//};
//int main()
//{
//	struct s1 q1 = { 0 };
//	struct s2 q2 = { 0 };
//	printf("%d ", sizeof(q1));//8
//	printf("%d", sizeof(q2));//12
//	return 0;
//}
//�ṹ���ڴ�洢����
//1��һ����Ա�ڽṹ�����ƫ����Ϊ0�ĵ�ַ��
//2������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//vs Ĭ�϶�����Ϊ8
//������ == ������Ĭ�϶�������Ԫ�ش�С����Сֵ �ṹ�����������Ϊ�ýṹ��������������ı���
//3�ṹ����ܴ�СΪÿ����Ա������������������ 
//�ڴ������Ϊ�˸���Ķ�ȡ�ڴ��е����� ����ṹ��ʱӦ������С�ڴ�ı����ŵ�һ��
//�޸�Ĭ�϶�����
//#pragma pack(4)//����Ĭ�϶�����
//struct stu
//{
//	char a;//1
//	double b;//4
//};
//#pragma pack()//ȡ��Ĭ�϶�����
//int main()
//{
//	struct stu s1;
//	printf("%d ", sizeof(s1));
//}
//�鿴��Աƫ���� offsetof �� ���ؽṹ�������ƫ����(������ʼ����λ��)
#include<stddef.h>
//struct stu
//{
//	char a;//1
//	double b;
//	double c;//4
//};
//int main()
//{
//	printf("%d ", offsetof(struct stu, a));
//	printf("%d ", offsetof(struct stu, b));
//	printf("%d ", offsetof(struct stu, c));
//}
//�ṹ��Ĵ���
//struct stu
//{
//	char name;
//	int age;
//};
//void Inst(struct stu* p1)//��ַ
//{
//	p1->age = 18;
//	p1->name = 'a';
//	//p1->name = "sdf";//error p1->name  name Ϊ�ַ������� �ַ������������޸���
//}
//void print1(struct stu s1)//��ֵ
//{
//	printf("%c %d ", s1.name, s1.age);
//}
//int main()
//{
//	struct stu s1;
//	Inst(&s1);
//	print1(s1);
//	return 0;
//}
////��ַȨ�޸��� ����ṹ�崫��ʱ��ָ�� �ڴ�ռ��С �������׳���ѹջ������