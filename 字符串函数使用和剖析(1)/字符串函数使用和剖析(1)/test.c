#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//�ַ��������ַ�������
//���ַ�������strlen ����ʵ�ֵ����ַ���
//1.������
//2.�ݹ�
//3.ָ���ָ��

//int my_strlen1(const char* arr)
//{
//	assert(arr!=NULL);
//	int count = 0;
//	while (*arr != '\0')//ͳ��'\0'ǰ�ַ���
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen2(const char* arr)
//{
//	assert(arr);
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen2(arr + 1);//��һ���ַ����ȼ���֮���ַ�������
//	}
//	else//�ҵ�'\0'����������0
//		return 0;
//}
//int my_strlen3(const char* arr)
//{
//	assert(arr);
//	char* p = arr;//ʹָ��pָ���ַ�����Ԫ�ش�
//	while (*arr != '\0')//ʹָ��arrָ���ַ���'\0'��
//	{
//		arr++;
//	}
//	return arr - p;//ָ������������Ԫ�ظ���
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d ", my_strlen1(arr));//1.����������
//	printf("%d ", my_strlen2(arr));//2.�ݹ鷽��
//	printf("%d ", my_strlen3(arr));//3.ָ�������
//	return 0;
//}
//�⺯����strlen����ֵΪ size_t(unsiged int) �޷�������
//int main()
//{
//	char arr[] = "abcdefg";
//	char arr2[] = "abc";
//	if (strlen(arr2) - strlen(arr) > 0)//�жϽ��>0 ��Ϊ-3����Ϊ�޷����� ����һ���Ǻܴ������
//	{
//		printf("hehe");//��ӡhehe
//	}
//	else
//		printf("haha");
//	return 0;
//}
//�����ַ���strcpy����ʵ�ַ���
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* arr = arr1;
//	while (*arr1++ = *arr2++)//arr2��'\0'����arr1�����ѭ��
//	{
//		;
//	}
//	return arr;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	printf("%s",my_strcpy(arr1, arr2));//�⺯����strcpy������char*Ϊ����ֵ
//	return 0;
//}
//����strcpy (Ŀ���ַ�����Դ�ַ���)
//Դ�ַ���������'\0'����
//�ܽ�Դ�ַ�����'\0'����
//Ŀ��ռ�����㹻��
//Ŀ��ռ����ɱ�

//�ַ���׷�Ӻ��� strcat������ʵ��
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest&&src);
//	char* arr1 = dest;
//  //1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
// //2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return arr1;
//}
//int main()
//{
//	char arr1[30] = "abcdefg";
//	char arr2[] = "bit";
//	printf("%s", my_strcat(arr1, arr2)); //�⺯����strcat������char*Ϊ����ֵ
//	return 0;
//}
//����strcat (Ŀ���ַ�����Դ�ַ���)
//Դ�ַ���������'\0'����
//�ܽ�Դ�ַ�����'\0'����
//Ŀ��ռ�����㹻��
//Ŀ��ռ����ɱ�
//�ַ����ȽϺ���strcmp��ʵ��
//strcmp �ȽϷ���  ���αȽ��ַ������ַ��ĵ�assis��ֵ
//int my_strcmp(char* arr1, char* arr2)
//{
//	assert(arr1&&arr2);
//	while (*arr1 == *arr2)//�ҵ�����ȵ��ַ�
//	{
//		if (*arr1 == '\0')//�ҵ�����ַ�Ϊ'\0',�����ַ������
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	//return *arr1 - *arr2;
//	if (*arr1 > *arr2)
//		return 1;
//	else
//		return -1;
//
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("arr1>arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1==arr2");
//	}
//	else
//	{
//		printf("arr1<arr2");
//	}
//	return 0;
//}
//���Ȳ������Ƶ��ַ������� strcpy strcat strcmp
//�������޵��ַ������� strncpy strncat  strncmp
//ʵ��ָ���ַ�����������strncpy
//����num���ַ���Դ�ַ���Ŀ��ռ�
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ�������Ŀ��ĺ���׷��0��ֱ��num��
//char* my_strncpy(char* arr1, const char* arr2,int a)
//{
//	assert(arr1&&arr2);
//	char* arr = arr1;
//	while (a)
//	{
//		if (*arr2 != '\0')
//		{
//			*arr1 = *arr2;
//			arr1++;
//			arr2++;
//		}
//		else if (*arr2 == '\0')
//		{
//			while (a)
//			{
//				*arr1 = '\0';
//				arr1++;
//				a--;
//			}
//			break;
//		}
//		a--;
//	}
//	return arr;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xxx";
//	printf("%s", my_strncpy(arr1, arr2, 3));
//	return 0;
//}
//ָ���ַ���׷�Ӻ���strncat
//׷�Ӻ����ַ������Զ�����һ��'\0'
//��ָ��׷���ַ�����Դ�ַ���ֻ��Դ�ַ���׷�ӵ�Ŀ���ַ����Ϻ�'\0'
//char* my_strncat(char* arr1, const char* arr2, int a)
//{
//	assert(arr1&&arr2);
//	char* arr = arr1;
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	while (a)
//	{
//		if (*arr2 == '\0')
//			break;
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//		a--;
//	}
//	*arr1 = '\0';
//	return arr;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "ghijk";
//	printf("%s", my_strncat(arr1, arr2, 4));
//	return 0;
//}
