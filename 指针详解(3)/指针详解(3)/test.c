#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��ϰ
//дһ������ָ��ָ��char* my_strcpy(char* dest, const char* src)
//дһ������ָ�����飬ָ��ָ���ĸ�my_strcpy����
//int main()
//{
//	char* (*pf)(char*, const char*);//����ָ��
//	char* (*pfarr[4])(char*, const char*) = { pf,pf,pf,pf };
//	return 0;
//}
//����ָ�������ʹ��
//       ת�Ʊ�
//������
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 1.add   2.sub  ***\n");
//	printf("*** 3.mul   4.div  ***\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//int main()
//{	int input;
//    int(*parr[])(int, int) = { 0,add,sub,mul,div };//���庯��ָ���������Switch case���
//	do
//	{
//		int x,y;
//		menu();
//		printf("������ѡ�");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", parr[input](x, y));//�ҵ���Ӧ�ĺ������е��� ���ﺯ��ָ������Ҳ��Ϊת�Ʊ�
//
//		}
//		else if (input == 0)
//			printf("�˳�");
//		else
//			printf("�������");
//	} while(input);
//	return 0;
//}
//�ߡ�ָ����ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = add;//����ָ��
//	int(*parr[])(int, int) = { p };//����ָ������
//	int(*(*pp)[])(int, int) = &parr;//ָ����ָ�������ָ��
//	return 0;
//}
//�ˡ��ص�����
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 1.add   2.sub  ***\n");
//	printf("*** 3.mul   4.div  ***\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//void cacl(int(*p)(int, int)) //ͨ������ָ�봫��ʵ�ֺ����Ķ����ô� �����ڲ�����ʵ�κ��� �ص�����
//{
//	int x, y;
//	printf("��������������");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("������ѡ�");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			cacl(add);
//			break;
//		case 2:
//			cacl(sub);
//			break;
//		case 3:
//			cacl(mul);
//			break;
//		case 4:
//			cacl(div);
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("����");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//�� �����ܵ���������ȽϺ��� qsort����
//void ָ������
//int main()
//{
//	int a=1;
//	char b = 'q';
//	int *p = &a; //����ָ��
//	char  *pb = &b;//�ַ�ָ��
//	void *pc = &a;
//	void *pd = &b; //������ָ�� ���Խ����κε�ַ
//	//*pc=1;error! ������ָ�벻�ܽ����� ��Ϊû��ָ������ 
//	//*pd+1;error! ������ָ�벻����Ӽ�
//	return 0;
//}
//qsort �����Ĵ������� qsort�����Ķ���
//void qsort(void* base, size_t numb, size_t width, int (*cmp)(const void* e1,const void* e2))
//{//    Ŀ��������ʼ��ַ  ����Ԫ�ظ���   Ԫ�ش�С      �Լ������һ���Ƚ�Ԫ�صĺ���    
//	//~
//}
//��
int cmp1(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
	//�Զ���ĺ���Ҫ��Ϊ ��һԪ�ش��ڵڶ�Ԫ�� ���ش���0������ ��ȷ���0 С�ڷ���С��0������
	//Ȼ��ʵ�ִ�С��������(����)���෴����ʵ�ֽ���
}
void test1()
{
	int i;
	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz, sizeof(arr1[0]), cmp1);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	putchar('\n');
}
int cmp2(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
void test2()
{
	int i;
	float arr2[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz, sizeof(arr2[0]), cmp2);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr2[i]);
    }
	putchar('\n');
}
struct stu//�ṹ��ʹ��ʱ����
	{
		char name[20];
		int age;
	};
int cmp3(const void* e1, const void* e2)
{
	return	((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test3()
{
	int i;
	struct stu s1[3] = { {"zhangsan",28},{"lisi",23},{"wangwu",34} };//�ṹ������
	int sz = sizeof(s1) / sizeof(s1[0]);
	qsort(s1, sz, sizeof(s1[0]), cmp3);
	for (i = 0; i < 3; i++)
	{
		printf("%d ", s1[i].age);
	}
	printf("\n");
}
int cmp4(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//�ַ����ȽϺ��� ��һ�����ڵڶ������ش���0������
}                                      //��һ�����ڵڶ�������0 ��һ��С�ڵڶ��� ����С��0������
void test4()
{
	int i;
	struct stu s1[3] = { {"zhangsan",28},{"lisi",23},{"wangwu",34} };//�ṹ������
	int sz = sizeof(s1) / sizeof(s1[0]);
	qsort(s1, sz, sizeof(s1[0]), cmp4);
	for (i = 0; i < 3; i++)
	{
		printf("%s ", s1[i].name);
	}
	printf("\n");
}
int main()
{
	test1();//ʹ��qsort����������������
	test2();//���򸡵�������
	test3();//����ṹ�����鰴����
	test4();//����ṹ�����鰴����
	return 0;
}
//�ܽ᣺ qsort ������һ��ʵ��������������ĺ���
//���ú���ʱʹ�õ�ʵ������Ϊ (������ʼ��ַ������Ԫ�ظ��������鵥��Ԫ�صĴ�С���Զ���ȽϺ���)
//�Զ���ȽϺ��������Ǻ�������Ϊ����void���͵�ָ�� ��������Ϊint��
//�����ڲ�ͨ�������ָ���ҵ�Ԫ�ؽ��бȽ� ����ֵΪ���¹涨ʱ�����鴫�ݵ�Ԫ��������������������
//1.��һԪ�ش��ڵڶ�Ԫ�� ����ֵ����0
//2.��һԪ�ص��ڵڶ�Ԫ�� ����ֵ����0
//3.��һԪ��С�ڵڶ�Ԫ�� ����ֵС��0
//��һ������������ͬ ����෴ʱ����������
