#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ж��� --���������ж������

#define HELL
//�������� ����������� �������򲻱��� ��Ԥ����ֱ��ɾ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef HELL //����#define ��������� �� �򲻱��� ��#if defined(��ʶ��)һ�� �� ifndef HELL / #if !defined(��ʶ��) �෴
//		printf("%d", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 0 //����#if (�������ʽ) Ϊ������� Ϊ�� �򲻱���
//		printf("%d", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//int main()
//{
//#if 1-1     //��if else ���һ�� ����Ϊ����� Ϊ�ٲ�����
//	printf("hehe"); 
//#elif 1-2
//	printf("dada");
//#else
//	printf("haha");
//#endif
//	return 0;
//}
//���⻹��Ƕ�ױ���
//�ļ�����   #include ����ͷ�ļ��ķ�ʽ
//1.#include<  > ���ÿ⺯�� ֱ���ڿ⺯���в��� Ȼ������ļ�
//2.#include"  " ���ڱ����ļ����� �Ҳ������ڹٷ��ļ�������� Ȼ�����
//��α����ļ���ΰ���
//1.
//#ifndef _HEEL_
//#define _HEEL_
//int add(int x, int y);
//#endif
////ֻ�����һ�ΰ������ڶ��ΰ�����Ϊ������_HEEL_ �Ͳ����ٱ���
////2.
//#pragma once
//	int Add(int x, int y);
////�ִ�д�� ���ھ����������޷�ʹ��
//ofsetof �� �ó��ṹ���ƫ���� ��ʵ��
//��0Ϊ�ṹ���ַ�ҵ���ԱȻ��ȥ��Ա�ĵ�ַ���ǳ�Ա��ƫ����
#include<stddef.h>
#define OFFSETOF(struct_name,member) (int)(&((struct_name*)0)->member)
//struct S
//{
//	char a;
//	int b;
//	float c;
//};
//int main()
//{
//	int ret = offsetof(struct S, b);
//	printf("%d ", ret);
//	ret = OFFSETOF(struct S, c);
//	printf("%d ",ret);
//
//	return 0;
//}
// ��Ŀ���ҳ�����