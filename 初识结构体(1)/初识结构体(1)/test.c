#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct�ṹ��ؼ��� student�ṹ���ǩ struct student�ṹ������
//struct student
//{//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//s1,s2,s3;//�����б� ȫ�ֽṹ����� ������ʹ��
//int main()
//{
//	struct student student1;
//	return 0;
//}
//typedef struct student
//{//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//typedef ��struct student ���¶���stuΪstruct student�ṹ������
//int main()
//{
//	struct student s2;//�ȼ� ����ṹ�����
//	stu s1 = { "����",18,17338405790,"����" };//�ṹ������ĳ�ʼ��
//	return 0;
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
// };
//struct l
//{
//	char ch[10];
//	struct s s1;//�ṹ�����Ϳ�������
//	char* p;
//};
//int main()
//{
//	char arr[] = "dadadada";
//	struct l l1 = { "hehe",{100,'c',"hello world",3.14},arr };// �ṹ������ĳ�ʼ��
//	printf("%s\n", l1.ch);//hehe
//	printf("%d\n", l1.s1.a);//100
//	printf("%s\n", l1.s1.arr);//hello world 
//	printf("%s\n", l1.p);//dadada �ṹ���Ա�ķ���
//	return 0;
//}
//�ṹ�崫��,��ӡ�ṹ�������Ա
//typedef struct stu
//{
//	char name[10];
//	char tele[12];
//	short age;
//	char sex[5];
//
//}stu;
//void print1(stu s1) //�������ٿռ䲻����ʹ��
//{
//	printf("����Ϊ%s\n", s1.name);
//	printf("�绰Ϊ%s\n", s1.tele);
//	printf("����Ϊ%d\n", s1.age);
//	printf("�Ա�Ϊ%s\n", s1.sex);
//}
//void print2(stu* s1) //���ݵ�ַ������ʹ��
//{
//	printf("����Ϊ%s\n", s1->name);
//	printf("�绰Ϊ%s\n", s1->tele);
//	printf("����Ϊ%d\n", s1->age);//s1Ϊ�ṹ��ָ��
//	printf("�Ա�Ϊ%s\n", s1->sex);//->���������ʽṹ�������Ա
//}
//int main()
//{
//	stu s1 = { "����","17338405790",18,"��" };
//	print1(s1);//��ʵ��
//	print2(&s1);//����ַ
//	return 0;
//}
//���䣺��������ʱ�����ѹջ����
//�ڴ��Ϊ ջ������������̬��
//���ݽṹ �������ݽṹ ˳�������ջ������ 
//�������ݽṹ ������ 
//ͼ ...
//
