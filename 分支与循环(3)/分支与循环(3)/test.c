#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//������������С��������
//int main()
//{
//	int a, b, c;
//	printf("������������:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > c)
//	{   int temp = c;
//		c = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		int temp = c;
//		c = a;
//		a = temp;
//	}
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	printf("��������С��������Ϊ��%d %d %d", a, b, c);
//	return 0;
//дһ�������ӡ1~100��3�ı���
//int main()
//{
//	int i = 1;
//	printf("100��3�ı�����:");
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}
//�������������Լ��(շת�����)
//int main()
//{
//	int a, b;
//	printf("������������:>");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{   int temp = a;
//		a = b;
//		b = temp;
//	}
//	for (;;)
//	{
//		int temp = a % b;//���ý�������
//		if (0 == temp)
//		{
//			printf("���Լ��Ϊ:%d", b);
//			break;
//		}
//		else
//		{
//			a = b;
//			b = temp;
//		}
//	}
//
//	return 0;//̫����
//}
//�Ż�
//int main()
//{
//	int a, b,r;
//	scanf("%d%d", &a, &b);
//	while (r=a%b)//���ñȽ�ab��С,�������a=4 b=8��a%b=4������a�����8��b�����4������a>b,ֻ�Ƕ�����һ��!!
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}
//�ҵ�1000~2000��������
//int main()
//{
//	int count = 0;
//	int year = 1000;
//	printf("1000~2000���������:");
//	for (year = 1000; year <= 2000; year++)
//	{//1�ܱ�4���������ܱ�100������Ϊ����
//	 //2�ܱ�400������Ϊ����
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)//Ҳ������һ��if���������������������������
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\nһ����%d������", count);
//	return 0;
//}
//��100~200֮�������(�Գ���)
//int main()
//{
//	int i, n,s=0;
//	printf("100~200���������:\n");
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n <= i - 1; n++)//������
//		{
//			if (i%n == 0)
//				break;
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//			s++;
//		}
//	}
//	printf("\n����:%d��\n", s);
//	return 0;
//}
//�Ż�
//int main()
//{
//	int i, n, s = 0;
//	printf("100~200���������:\n");
//	for (i = 101; i <= 200; i+=2)//ż����Ϊ������������֮����Ϊ����һ�������
//	{
//		for (n = 2; n <= sqrt(i); n++)//�κ�һ��������������д��i=a*b������һ����С��sqrt(i)(i��ƽ��)
//		{                             //���Ե���2~sqrt(i)���Ҳ���һ������i����Ϊ0ʱ����iΪ����
//			if (i%n == 0)
//				break;
//		}
//		if (n >sqrt(i))
//		{
//			printf("%d ", i);
//			s++;
//		}
//	}
//	printf("\n����:%d��\n", s);
//	return 0;
//}
//����1~100�乲���ֶ��ٸ�9
//int main()
//{
//	int i,n=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//Ѱ�Ҹ�λ�ϵ�9
//			n++;        //else if �൱�ڲ�Ȼ����һ��if���ִ�У��ڶ���û�л���ִ�У�if��ifΪ���й�ϵ����������ͬʱִ��
//		if (i / 10 == 9)//Ѱ��ʮλ�ϵ�9
//			n++;        //Ѱ��ʱ�������ӦΪ���й�ϵ������99ֻ����һ��   
//	}
//	printf("1~100�乲����%d��9\n", n);
//	return 0;
//}
//����1-1/2+1/3...-1/100
//int main()
//{
//	int i;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + pow(-1, i + 1)*(1.0 / i);//����-1��ƽ���ķ�������Ӽ�����
//
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//�ڶ���
//int main()
//{
//	int i;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum +flag*(1.0 / i);//���������ˣ�����ѭ���ı�Ӽ�
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//��ʮ�����е����ֵ
//int main()
//{
//	int a;
//	int n = 0;
//	int i = 0;
//	int arr[10] = {0};//����һ����ʮ��Ԫ�ص�����
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ�������һ������
//	printf("������10����:>\n");
//	for (n = 0; n < sz; n++)//forѭ������10����������Ҳ���Բ���scanf����ֱ�Ӷ������飬����
//	{
//		scanf("%d", &a);
//		arr[n] = a;
//
//	}
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[0] < arr[i])//forѭ����10��Ԫ���е����ֵ����arr[1]
//			arr[0] = arr[i];
//
//	}
//	printf("ʮ���������ֵΪ:%d\n", arr[0]);//��ӡ���ֵ
//	return 0;
//}
//�ڶ���
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };//�����������飬ѡ�����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[0] < arr[i])//ѡ�����ֵ����arr[0]
//			arr[0] = arr[i];
//	}
//	printf("���ֵΪ:%d\n", arr[0]);
//	return 0;
//}
//��ӡ99�˷���
//int main()
//{
//	int i,n;
//	for (i = 1; i < 10; i++)//���ƹ��м���ʽ��
//	{
//		for (n = 1; n <= i; n++)//����ÿ�м���ʽ��
//		{
//			printf("%d*%d=%-2d ", n, i, i*n);//2,-2�ֱ��ʾ�������Ҷ�����������
//
//		}
//		printf("\n");//����
//	}
//	return 0;
//}