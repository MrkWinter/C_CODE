#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//�ڴ濽������memcpy
//memcpy(Ŀ�����飬Դ����,�����ֽ���) ����ֵΪָ��Ŀ�������void��ָ��
//strcpy ��strncpy �о����� ֻ�ܿ����ַ���
//int main()
//{
//	int i;
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	memcpy(arr2, arr1, 24);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//ʵ��
//void* my_memcpy(void* dest,const void* scr, size_t n)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	void* ret = dest;
//	while (n--)//��n���ֽڿ���
//	{
//		*(char*)dest = *(char*)scr;
//		++(char*)dest;
//		++(char*)scr;
//	}
//	return ret;
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	int i;
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_memcpy(arr2, arr1, 24);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//void* my_memcpy(void* dest, const void* scr, size_t n)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	void* ret = dest;
//	while (n--)//��n���ֽڿ���
//	{
//		*(char*)dest = *(char*)scr;
//		++(char*)dest;
//		++(char*)scr;
//	}
//	return ret;
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	struct stu s1[2] = { {"zhang",23},{"lis",43} };
//	struct stu s2[3] = { 0 };
//	my_memcpy(s2, s1, sizeof(s1));//���Կ����κ����������
//	printf("%s ", s2->name);
//	printf("%d ", s2->age);
//	printf("%s ", s2[1].name);
//	printf("%d ", (s2+1)->age);
//	return 0;
//}
//memcpyҲ�о������ڿ�������Ԫ��ʱ���ܻ����
//�ڴ濽������memove����--�ɿ�������
//void* my_memmove(void* dest, const void* scr, size_t n)
//{
//	assert(dest&&scr);
//	void* ret = dest;
//	if (scr < dest )//�Ӻ���ǰ����
//	{
//		//char* s1 = (char*)dest + n - 1;
//		//char* s2 = (char*)scr + n - 1;
//		//while (n--)
//		//{
//		//	*s1 = *s2;
//		//	s1--;
//		//	s2--;
//		//}//�Ż�
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)scr + n);//ÿ��n�ı仯ʹ��Ӻ���ǰ����
//		}
//
//	}
//	else//��ǰ��󿽱�
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)scr;
//			++(char*)dest;
//			++(char*)scr;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int i;
//	int arr1[] = { 1,2,3,4,5,6 };
//	//memmove(arr1 + 1, arr1, 12);
//	my_memmove(arr1 + 1, arr1+2, 12);
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//memcmp �ڴ�ȽϺ�����ʵ��
//memcmp(arr1,arr2,�Ƚ��ֽڵ�����)
//arr1>arr2 ����һ������0������
//arr1==arr2 ����һ��0
//arr1<arr2 ����һ��С��0������
//int my_memcmp(const void* e1,const void* e2, int num)
//{
//	assert(e1&&e2);
//	while (num)
//	{
//		if(*(char*)e1 == *(char*)e2)
//		{
//			((char*)e1)++;
//			((char*)e2)++;
//			num--;
//		}
//		else if (*(char*)e1 > *(char*)e2)
//			return 1;
//		else
//			return -1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,5,6 };
//	//int ret = memcmp(arr1, arr2, 8);
//	int ret = my_memcmp(arr1, arr2, 16);
//	printf("%d ", ret);
//	return 0;
//}
//�����ڴ� memset ����
//memset(arr,��Ҫ����Ķ�����Ҫ�ĵ��ֽ���)
//memset������һ���ֽ�һ���ֽڵĸĵģ�Ҫ�ĳɵ��������ⶨ�壬����ֻ����һ���ֽ�
//int main()
//{
//	int i = 0;
//	char arr1[11] = "";
//	memset(arr1, 'd', 10);
//	printf("%s", arr1);
//	return 0;
//}