#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//��n�Ľײ�
//int main()
//{
//	int n,i,ret=1;
//	printf("������һ��������������Ľײ�:>");
//	scanf("%d", &n);
//	for (i=1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("n�Ľײ�Ϊ��%d", ret);
//	return 0;
//}
//��1��10�Ľײ����
//int main()
//{
//	int i;
//	int n;
//	int ret =1;
//	int sum = 0;//�������
//	for (n = 1;  n<= 10; n++)
//	{
//		ret = 1;//ret ������ʼ������1��ʼ��
//		for (i = 1; i <= n; i++)//��n�Ľײ�
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//
//	}
//	printf("1��10�Ľײ����Ϊ��%d",sum);
//	
//	return 0;
//}
//��
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for(n=1;n<=10;n++)
//	{
//		ret = ret * n;//����ret�������󲻶������1��10�Ľײ�
//		sum = sum + ret;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}
//Ѱ��һ�����������е�Ԫ��7
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int z = sizeof(arr) / sizeof(0);
//	for (i = 0; i < z; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ������±�Ϊ:%d",i);
//			break;
//		}
//	} 
//	if (i ==z)
//		printf("�Ҳ���������Ԫ��Ϊ7��Ԫ��");
//	return 0;
//}
//���ַ�������Ԫ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ����������
//	int k = 7;//Ҫ�ҵ�Ԫ��
//	int left = 0;//�������±�
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;//�������±�
//	int mid;//�����м�ֵ
//	while (left <=right)//left<=right˵�����ڶ�����
//	{
//		mid = (right + left) / 2;//ȡ�м���±�
//		if (arr[mid] > k)
//			right = mid - 1;//�������±���ж���
//		else if (arr[mid] < k)
//			left = mid + 1;//�������±���ж���
//		else if (k == arr[mid])//ֱ��������ֵΪҪ�ҵ���
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;//����ѭ��
//		}
//	}
//	if (left > right)//�����±꽻��˵����������������
//		printf("�Ҳ���Ԫ��");
//	return 0;
//}
//��ӡwelcome to bit !!!!!!!!�𽥳���
//��############��ʾ�����Ĳ���
//int main()
//{
//	int left;
//	int right;
//	char arr1[] = "welcome to bit !!!!!!!";
//	char arr2[] = "######################";
//	left = 0;
//	right = strlen(arr1) - 1;
//	for (left, right; left <= right; left++, right--)
//	{   
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣ1000���룬Ҳ����һ�룬��Ҫͷ�ļ�
//		system("cls");//ִ��ϵͳ�����һ��������clsΪ�����Ļ
//	}
//	printf("welcome to bit !!!!!!!");
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//�ַ������ܱȽ��Ƿ���ȣ�Ӧʹ��һ���⺯��--strcmp()�����б������ַ�����ȣ��򷵻�ֵ����
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("�������Σ������˳�ϵͳ");
//	return 0;
//}