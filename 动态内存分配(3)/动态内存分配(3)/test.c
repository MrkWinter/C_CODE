#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�������� 
//�ṹ�������һ��Ԫ�أ������ǵ�һ����������δ֪��С�����飬��������������Ա
//struct S
//{
//	int a;
//	int arr[0];
//
//};
//int main()
//{
//	struct S s1;
//	printf("%d\n", sizeof(s1));// 4 �ṹ�����������鲻ռ�ڴ� �����Կ����ڴ���ʹ��ʹ����
//	return 0;
//}
//��
//int main()
//{
//	struct S s1;
//	struct S* ps =(struct S*) malloc(sizeof(s1) + 5 * sizeof(int));//���ڸ���������arr20���ֽڵĿռ�ʹ��
////����һ��ռ� �Խṹ��ķ�ʽʹ�� �ṹ���а����������� ��������ɱ仯��С 
//	if (ps == NULL)
//		return 0;
//	//ʹ��
//	int i;
//	ps->a = 10;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//�����¿ռ�ʹ��
//	struct S* str = realloc(ps, sizeof(s1) + sizeof(int)*10);
//	if (str == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		ps = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("%d", ps->a);
//	free(ps);
//	ps = NULL;
//	str = NULL;
//		return 0;
//}
//�ȼ������������ʵ����ʽ
struct S
{
	int a;
	int* arr;//����ָ�����ʽָ��ָ��һ�鿪�ٵĶ�̬�ڴ�Ŀռ�
};
int main()
{
	struct S s1;
	struct S* pa = malloc(sizeof(s1));//Ϊ�ṹ�����붯̬�ڴ�ռ�
	pa->arr = malloc(5 * sizeof(int));
	if (pa->arr == NULL)
		return 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		pa->arr[i] = i;
	}
	//������С
	int * prt = realloc(pa->arr, 10 * sizeof(int));
	if (prt == NULL)
		return 0;
	else
		pa->arr = prt;
	for (i = 5; i < 10; i++)
	{
		pa->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa->arr[i]);
	}
	free(pa->arr);
	pa->arr = NULL;
	prt = NULL;
	free(pa);
	pa = NULL;
	return 0;
}
//�ܽ� ��������ʵ�ֶ�̬�ڴ�ķ�ʽΪ  �Խṹ��ָ��ķ�ʽ����һ�鶯̬�ڴ� ��������Ԫ�ظ��ݿ��ٵ��ڴ����ʹ��
//�ɵ��������ṹ��ָ��ָ����ڴ�ʵ�ֽṹ����Ԫ��������ڴ��ʹ��
//�ܵ���˵�ǿ�����һ�����ڴ�
//�ṹ���ж���ָ��ΪԪ�ص�ʵ�ַ�ʽΪ ���Խṹ��ָ�뿪��һ�鶯̬�ڴ�ʹ�� ��Ϊָ��Ԫ�ؿ���һ�鶯̬�ڴ�
//����ָ�붯̬�ڴ�ĵ���ʵ�ֽṹ�� ָ��(����) Ԫ�ض��ڴ��ʹ��
//�ܵ���˵�������ڴ�
//�Ա� �����������
//1.�������������ڴ���ͷ�
//2.�������������ڴ������ ��Ƭ�����ڴ����
//3.��������������ݸ��� 