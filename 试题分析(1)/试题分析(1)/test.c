#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<math.h>
//�����ַ���
//void reverse(char *arr)
//{
//	assert(arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[256] = { 0 };
//    //scanf("%s", arr);//scanf���������ո񲻶�ȡ
//	gets(arr);//��ȡһ��
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}
//��sn =a + aa + aaa...
//int main()
//{
//	int a, n, i;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int ret = a;
//	for (i = 0; i < n; i++)
//	{
//		sum += ret;
//		ret = ret * 10 + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//��1~10000�ڵ�������
//int num(int i)
//{
//	if (i != 0)
//		return 1 + num(i / 10);
//	else
//		return 0;
//}
//int puk(int i, int n)
//{
//	int ret = 0;
//	while (i)
//	{
//		ret += (int)(pow(i % 10, n));
//		i /= 10;
//	}
//	return ret;
//}
//int main()
//{
//	int i;
//	printf("��������:\n");
//	for (i = 0; i < 10000; i++)
//	{
//		int nu = num(i);
//		if (i == puk(i, nu))
//			printf("%d ", i);
//	}
//	return 0;
//}
//��ӡ����
/*    *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      * */
//int main()
//{
//	int n;
//	printf("��������������е�����(����)");
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{//�ϰ�
//		int i;
//		int row1 = n / 2+1;
//		for (i = 0; i < row1; i++)
//		{//�ո�
//			int k;
//			for (k = 0; k < row1 - 1 - i; k++)
//			{
//				printf(" ");
//			}
//		 //*
//			for (k = 0; k <(i+1)*2-1 ; k++)
//			{
//				printf("*");
//			}
//			putchar('\n');
//		}
//		//�°�
//		int row2 = n / 2;
//		for (i = 0; i < row2; i++)
//		{//�ո�
//			int k;
//			for (k = 0; k <i+1 ; k++)
//			{
//				printf(" ");
//			}
//		 //*
//			for (k = 0; k <row2*2-2*i-1 ; k++)
//			{
//				printf("*");
//			}
//			putchar('\n');
//		}
//	}
//	else
//		printf("����Ϊż��");
//	return 0;
//}
//����ˮ����
//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty/2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//��������Ԫ�� ������ǰ ż���ں�
//void bubble(int* arr, int sz)
//{
//	int i, j;
//	for (i = 0; i < sz-1; i++)
//	{
//		int c = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{	
//			if (arr[j] % 2 == 0)
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				c = 1;
//			}
//		}
//		if (c == 0)
//			break;
//	}
//}
//int main()
//{
//	int i;
//	int arr[] = { 1,25,7,88,4,3,89,0,5,3,5,34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void moved(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp;
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;//ż���±�
//		}
//		while (left < right && arr[right] % 2 != 1)
//		{
//			right--;//�����±�
//		}
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//	}
//}
//int main()
//{
//	int i;
//	int arr[] = { 1,25,7,88,4,3,89,0,5,3,5,34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	moved(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
