#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<errno.h>
//#define MAX 1000
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define STA 5
struct PeoInfo//ͨѶ¼������
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact//Ƕ�׽ṹ����ΪͨѶ¼
{
	struct PeoInfo* date;//�ṹ��ָ�룬ָ��һ�鿪�ٵĶ�̬�ڴ�
	int size;//��ʾ����������Ԫ�ظ���
	int capacity;//��ʾͨѶ¼�������
};
enum ob
{   
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
//��������
void Initcontact(struct Contact* ps);//��ʼ��ͨѶ¼
void Addcontact(struct Contact* ps);//���ͨѶ¼��Ա����Ϣ
void Showcontact(const struct Contact* ps);//��ʾͨѶ¼��Ա����Ϣ
void Delcontact(struct Contact* ps);//ɾ��ͨѶ¼��Ա����Ϣ
void Searchcontact(const struct Contact* ps);//����ͨѶ¼��Ա����Ϣ
void Modifycontact(struct Contact* ps);//�޸�ͨѶ¼��Ա����Ϣ 
void Sortcontact(struct Contact* ps);//����ͨѶ¼��Ա����Ϣ
void Destroycontact(struct Contact* ps);//ɾ��ͨѶ¼��Ա����Ϣ
void Savecontact(struct Contact* ps);//����ͨѶ¼��Ա����Ϣ