#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//test.c ��ִ�г���
//debug debug�汾�Ŀ�ִ�г���    ���Ե���
//release release�汾�Ŀ�ִ�г���  ���ܵ���
//debug ���԰汾 ������������Ϣ�������κ��Ż������ڳ���Ա����
//release �����汾  �����˸����Ż����ڴ����ٶȺʹ�С�϶������ţ������û�ʹ��
//int main()
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//�ϵ㣬f9 ��ϵ���f5�����ҵ�����
//ctrl+f5  ��ʼִ�в�����
//f5  ��ʼ����
//f9  ��Ӷϵ�
//f10 �����
//f11 �����
//shift+f11 ��������
//shift+f5 ��������
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	printf("%d ", add(1, 4));
//	return 0;
//}
//���ö�ջ���鿴�����������
//test3()
//{
//	printf("hehe\n");
//}
//test2()
//{
//	test3();
//}
//test1()
//{
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//��1!+2!+3!...+n!
//int jei(int n)
//{
//	int sum = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int sum(int n)
//{
//	int sum = 0;
//	int a = 0;
//	for (a = 1; a <= n; a++)
//	{
//		sum += jei(a);
//	}
//	return sum;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", sum(a));
//	return 0;
//}
//ջ�������ڴ��ַ�ɸߵ���ʹ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int i;
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;//����Խ�����, &arr[12]ΪҰָ�룬���ʵ���i���ڴ� &arr[12]==&i
//	}
//	//������ѭ�� ����relase�汾�󲻻���ѭ��
//	//relase�汾���Ż��ı��ڴ�ʹ�÷�ʽ ���ܻ����bug
//	return 0;
//}
//ʵ��strcpy
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//��������Ӱ���������룬���������ҵ�����
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//�Ż�
//void my_strcpy(char* dest, char* src)
//{
//	if (*dest != NULL && *src != NULL)//�������ⲻӰ���������룬�������ڼ��
//	{
//		while (*dest++ = *src++)//��arr2�е�'\0'(ascii��ֵΪ0)����arr1ʱ����ѭ��
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//�Ż�
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//���ԣ�������ֱ���ҳ�����
//	while (*dest++ = *src++)//��arr2�е�'\0'(ascii��ֵΪ0)����arr1ʱ����ѭ��
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//�Ż�
//void my_strcpy(char* dest, const char* src)//const���η�ֹ�޸�arr2����
//{
//	assert(dest != NULL);
//	assert(src != NULL);//���ԣ�������ֱ���ҳ�����
//	while (*dest++ = *src++)//��arr2�е�'\0'(ascii��ֵΪ0)����arr1ʱ����ѭ��
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//const���ε�ָ��
//int main()
//{
//	int b = 2;
//	int a = 23;
//	const int* p = &a;//const����*�����ʱ ����*p  ����ͨ��p���ı�*p(a) 
//	//*p = 34;����
//	int* const t = &a;//const����*���ұ�ʱ ����p  ���ܸı�ָ�����p��ֵ
//	//p = &b;����
//	//�ܽ� �ұ���ַ��ֵ
//	return 0;
//}
//�Ż�
//char* my_strcpy(char* dest, const char* src)//const���η�ֹ�޸�arr2����
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);//���ԣ�������ֱ���ҳ�����
//	while (*dest++ = *src++)//��arr2�е�'\0'(ascii��ֵΪ0)����arr1ʱ����ѭ��
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s",my_strcpy(arr1, arr2));//��Ϊ����ֵΪ�������ַ����ĵ�ַ����ʽ���ʽ��д�ӡ
//	return 0;
//}
//����strlen����
//int my_strlen(const char* arr)//��ֹ�������޸��ַ���
//{
//	int count = 0;
//	assert(arr != NULL);//ָ�뱣��������ָ�����Ч��
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcedfghi";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//�����Ĵ�������
//1.�����ʹ���2.�����ʹ���3.����ʱ����