#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ұָ�룺ָ����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//��ι��Ұָ�룿
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʹ��NULL
//4.ָ��ʹ��ǰ�����Ч��
//int main()
//{
//	int a = 9;
//	int* pa = &a;//��ʼ��
//	int* pb = NULL;//NULL--������ʼ��ָ��ģ����߸�ָ�븳ֵ
//	pa = NULL;//����ʱ�óɿ�ָ��
//	if (pa != NULL)//ʹ��ǰ����Ƿ������壬�����Ч��
//		printf("��Ч");
//	return 0;
//}
//ָ������
//1.ָ��+-����
//int main()
//{
//	int i;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;//ָ��Ӽ�
//	}
//	return 0;
//}
//2.ָ��-ָ��
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int* pb = &arr[9];
//	printf("%d", pb - pa);//ָ��-ָ�����м��Ԫ�ظ�����ָ��-ָ������Ӧ��ȣ�����Ϊͬһ��ռ䣬���򲻿�Ԥ֪
//	return 0;
//}
//3.ָ��Ĺ�ϵ����
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int* pb = &arr[9];
//	while (pa <= pb)//ָ��Ƚϴ�С
//	{               //ע�⣬��Ϊ�﷨�涨�������е�ָ�����������������һ���ڴ��ָ��Ƚϣ�������������ǰ����һ���ڴ��ָ��Ƚ�
//		printf("%d ", *pa);//��Ȼ���ܻᱨ��
//		pa++;
//	}
//	return 0;
//}
//strlen������ʵ��
//�ݹ����ַ�������
//int str(char arr[])
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return str(arr + 1)+1;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d ",str(arr));	
//	return 0;
//}
//ָ�����ַ�������
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end !='\0')//�ҵ�ָ���ַ���ĩβ��ָ��
//	{
//		end++;
//	}
//	return end - start;//ĩβָ��-��ʼָ��=Ԫ����-1
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//������Ϊ��Ԫ�صĵ�ַ
//	                    //���������strlen��arr����&arr
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//ͨ��ָ��ɷ�������
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 9;
//	int * pa = &a;//һ��ָ�� 
//	//��⣺*ָpa��ָ��int�ͱ�������˼
//	int* * ppa = &pa;//����ָ�루ָ��ָ��ĵ�ַ��
//	//��⣺*(�ڶ���)ָppa��ָ��int*�ͱ�������˼
//	**ppa = 10;//����ָ��ʹ��
//	printf("%d", **ppa);
//	return 0;
//}
//ָ������
//���ָ�������
int main()
{
	int a = 2, b = 7, c = 5;
	int* arr[] = { &a,&b,&c };//ָ������
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);//�ҵ������еĵ�ַԪ�أ������ã���ӡԭ��
	}
	return 0;
}