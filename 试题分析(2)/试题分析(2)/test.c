#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//�����ַ���
//void leftx(char* arr, int n)
//{
//	assert(arr);
//	int i;
//	int sz = strlen(arr);
//	while (n)
//	{
//		int temp = *arr;
//		for (i = 0; i < sz - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[sz - 1] = temp;
//		n--;
//	}
//}
//int main()
//{
//	int n;
//	char arr[] = "abcdef";
//	scanf("%s", arr);
//	getchar();
//	scanf("%d", &n);
//	leftx(arr,n);
//	printf("%s", arr);
//	return 0;
//}
//�Ż�
//void reverse(char* e1, char* e2)
//{   
//  assert(e1);
//  assert(e2);
//	while (e1<e2)
//	{
//		char temp = *e1;
//		*e1 = *e2;
//		*e2 = temp;
//		e1++;
//		e2--;
//	}
//}
//int main()
//{
//	int n;
//	char arr[] = "abcdef";
//	scanf("%s", arr);
//	getchar();
//	scanf("%d", &n);
//	int sz = strlen(arr);
//	reverse(arr,arr+n-1);
//	reverse(arr+n,arr+sz-1);
//	reverse(arr,arr+sz-1);
//	printf("%s", arr);
//	return 0;
//}
//�ж������ַ����Ƿ�ΪΪ�����ַ���
//void reverse(char* e1, char* e2)
//{   
//	assert(e1);
//    assert(e2);
//	while (e1 < e2)
//	{
//		char temp = *e1;
//		*e1 = *e2;
//		*e2 = temp;
//		e1++;
//		e2--;
//	}
//}
//test(char* arr,int n)
//{
//	int sz = strlen(arr);
//	reverse(arr, arr + n - 1);
//	reverse(arr + n, arr + sz - 1);
//	reverse(arr, arr + sz - 1);
//}
//int left_move(char* arr1, char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	int len = strlen(arr1);
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		test(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//�Ż�
//is_left_move(char* arr1, char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	if (strlen(arr1) != strlen(arr2))
//		return 0;
//	strncat(arr1, arr1,strlen(arr1));//strncat ��strcat��ͬ �ɰ�������ӵ��ַ�����
//	char * p = strstr(arr1, arr2);//�ж�ǰһ���ַ����е��Ӵ��Ƿ��к�һ���ַ��� ���� ����ǰһ���ַ�����ʼ�Ӵ��ĵ�ַ  ���޷���NULL
//	if (p != NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{	
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//�ж����Ͼ������Ƿ���һ����
//int Find_num(int(*arr)[4], int* x, int* y,int k)
//{
//	int row = 0;
//	int col = *y - 1;
//	while (row < *x&&col < *y)
//	{
//		if (arr[row][col] < k)
//		{
//			row++;
//		}
//		else if (arr[row][col] > k)
//		{
//			col--;
//		}
//		else
//		{
//			*x = row;
//			*y = col;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int k = 7;
//	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };//���ݾ�����Ч�������
//	int x = sizeof(arr) / sizeof(arr[0]);
//	int y = sizeof(arr[0]) / sizeof(arr[0][0]);
//	if (Find_num(arr, &x, &y, k) == 1)
//		printf("�ҵ��ˣ���Ԫ��Ϊarr[%d][%d]", x, y);
//	else
//		printf("û���ҵ�");
//	return 0;
//}