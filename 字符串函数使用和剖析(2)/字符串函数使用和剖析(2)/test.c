#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ָ���Ƚϸ����ıȽ��ַ�������strncmp
//int my_strncmp(const char* arr1,const char* arr2, int a)
//{
//	assert(arr1&&arr2);
//	while (a)
//	{
//		if (*arr1 == *arr2)
//		{
//			arr1++;
//			arr2++;
//			a--;
//			continue;
//		}
//		else if (*arr1 < *arr2)
//			return -1;
//		else
//			return 1;
//	}
//		return 0;
//}
//int main()
//{
//	const char* arr1 = "abcde";
//	const char* arr2 = "abcdf";
//	int ret = my_strncmp(arr1, arr2, 3);
//	printf("%d ", ret);
//	return 0;
//}
//�ж��ַ����Ӵ�����strstr
//�ҵ��˷����Ӵ���ʼ����ʼָ�룬�Ҳ�������NULL
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1&&p2);
//	if (*p2 == '\0')
//	{
//		return p1 + strlen(p1) - 1;
//	}
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	while (*cur)//cur Ϊÿ�γ������� �ж�ÿ�δ�cur���ܷ��ҵ����ַ���
//	{
//		s1 = cur;
//		s2 = p2;//�������ҵ��ַ���
//		while (*s1 != '\0'&&*s2 != '\0'&&*s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')//�������cur��������ַ���
//			return cur;
//		else if (*s1 == '\0')//s1���ҵ�\0 ��s1���ַ������ȱ�s2���ַ���С s2�����ܺ�s1�����
//			break;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* arr1 = "abdddef";
//	char* arr2 = "def";
//	char* ret = my_strstr(arr1,arr2);
//	if (ret == NULL)
//		printf("�޸��Ӵ�");
//	else
//		printf("%s", ret);
//	return 0;
//}
//�����㷨KMP�㷨
//�ַ����ָ�� strtok
//��һ��ʹ��   strtok(Ŀ���ַ�����ʼ��ַ���ָ����ַ���) ���طָ��ĵ�һ���ַ�����ַ
//�ڶ���ʹ��   strtok(NULL,�ָ����ַ���) ���طָ��ĵڶ����ַ�����ַ
//strtok ʹ�õڶ���ʹ��ʱҪʹ�ÿ�ָ�� �ú����ܼ�ס��һ�ηָ��δ�ָ��ַ����ĵ�ַ
//ԭ�� ���ݵ�һ�δ��εõ���Ŀ���ַ��� ����ҵ��ָ����ַ����е��ַ��� �����ַ���Ϊ'\0'�����ظ��ַ�����ʼ��ַ�����洢��'\0'����ַ�������ʼ��ַ
//�ڶ���ʹ��ʱ��ֱ�Ӵ���ָ�룬�ɵ�һ���õ����ַ�������ʼ��ַ�����ң�ͬ��һ������
//������ʼ��ַδ�ҵ��ָ����ַ����������ҵ�'\0'��ֱ�ӷ����ַ�����ʼ��ַ����¼'\0'��ĵ�ַ
//���������ǿ��ַ�����ʱ�򷵻ؿ�ָ��
//ʹ��ʱ��ö�Ŀ���ַ������б���
//int main()
//{
//	char* ret;
//	char  arr[] = "!?/";
//	char arr1[] = "abc!efg?hij/klm";
//	char arr2[30] = {0};
//	strcpy(arr2, arr1);
//	for (ret = strtok(arr2, arr); ret != NULL; ret = strtok(NULL, arr))
//	{
//		printf("%s ", ret);//��ӡ�ֶκ��ַ�������������5�κ���
//	}
//	return 0;
//}
//������Ϣ strerror����
//strerror�ܰѴ�����ת�����ַ�����Ϣ��ָ�����ʽ����
//errno ��һ��ȫ�ִ�����ı���
//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//���ļ�
#include<errno.h>//ͷ�ļ�����
//int main()
//{//���ļ�����fopen ����FILE*��ָ�� ���ļ�ʧ��ʱ����NULL
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));//��������ת������Ϣ
//	}
//	else
//		printf("���ļ��ɹ�");
//	return 0;
//}
//�ж��ַ����͵ĺ��� ������Ƿ���һ������0���� ������Ƿ���0 ��
//iscontrl isspace isdigit islower isupper isalpha isalnum inpunct isgraph isprint
//�ַ�ת������tolower��дתСд toupperСдת��д
//����ֵΪint ��
#include<ctype.h>//ͷ�ļ�����
//int main()
//{
//	char a = toupper('a');
//	putchar(a);
//	char b = tolower('B');
//	putchar(b);
//
//	return 0;
//}
//��дתСд
//int main()
//{
//	char arr[] = "I am A Student";
//	int len = strlen(arr);
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}