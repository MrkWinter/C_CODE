#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ġ�������� ָ�����
//�ܽ�
//1һά����Ĵ���
//��������һά����ʱ����ʹ��
// ��ͬ����������� Ԫ�ظ�����д�ɲ�д
// ���ͺ��ʵ�һάָ����� 
//2��ά����Ĵ���
//�������ն�ά����ʱ����ʹ��
// ��ͬ���͵Ķ�ά������� Ԫ���пɲ�д ����Ҫд
// ���ͺ��ʵ�����ָ�����
//3����һ��ָ��Ĵ���
//������ʹ��һ��ָ��ʱʵ�ο���Ϊ
//һά�����������
//�����ĵ�ַ
//һ��ָ��
//4��������ָ��Ĵ���
//������ʹ�ö���ָ��ʱʵ�ο���Ϊ
//һάָ�������������
//������һ��ָ��ĵ�ַ
//����ָ��
//�塢����ָ��
//����ָ�� ->ָ�������ָ��
//����ָ�� ->ָ������ָ��
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 12;
//	int b = 45;
//	printf("%d ", add(a, b));
//	int(*pa)(int, int) = add;//����ָ��Ķ���
//	//&add��add���������ĵ�ַ �����ĵ�ַ�洢��pa�� *pa�õ�add����
//	//(*pa)����paΪָ�� (int,int)����ָ��ָ�������Һ�������Ϊ����int�� ��ͷint�������ķ�������Ϊint��
//	printf("%d ", (*pa)(a, b));
//	return 0;
//}
//��
//void print(char* pa)
//{
//	printf("%s", pa);
//}
//int main()
//{
//	print("abcde");
//	putchar('\n');
//	void(*pa)(char*) = print; //paΪ����ָ��
//	(*pa)("aaddcc");
//	return 0;
//}
//�������
//(*(void(*)())0)()  void(*)()Ϊ����ָ������ void(*)()0����0ǿ������ת���ɺ���ָ�� ָ��ָ��ĺ�����������Ϊ�� ����ֵΪvoid
//*(void(*)()0) �õ�������������Ϊ�� ����ֵΪvoid�ĺ���  (*(void(*)())0)() ��������0Ϊ��ַ���������
//�ܽ� Ϊ����һ���������� ���õ��ǲ�������Ϊ�޲� ����ֵΪ�յĺ���
//void (*signal(int, int(*)(int)))(int)
//����һ����������
//signal(int ,void(*)(int))signal ��һ������ ����������һ��Ϊint�� �ڶ���Ϊ����ָ������ �ú���ָ��ָ��ĺ�������Ϊint ��������Ϊvoid
//void(*)(int) ��signal�����ķ������� ��������Ϊ����ָ�� ��ָ��ָ��ĺ�������Ϊint ��������Ϊvoid
//��
//int main()
//{
//	typedef void(*tun)(int); //����void(*)(int)����ָ������Ϊtun ����ָ��ʱ������ź�*���
//	void(*signal(int, void(*)(int)))(int);//��ת��Ϊ
//	void(*signal(int, tun));//��һ��ת��Ϊ
//	tun signal(int, tun);
// 	return 0;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 12;
//	int b = 45;
//	printf("%d ", add(a, b));
//	int(*pa)(int, int) = add;//����ָ�� int(*pa)(int,int)=&add �������ʹ������ĵ�ַ
//	printf("%d ", (*pa)(a, b));//printf("%d ", pa(a, b)); ���Բ������� ָ��ʹ�����
//	return 0;
//}
//��������ָ������
//��ź���ָ������� (��ź�����ַ������)
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
//int main()
//{
//	int(*parr[4])(int, int) = {add,sub,mul,div};//����һ������ָ������  ����Ԫ������Ϊint(*)(int,int)�͵ĺ���ָ��(��ַ)
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](5, 7));//���±��ҵ������е�ÿ�������ĵ�ַ ������ �ٽ��е���
//	}
//	return 0;
//}
//��ϰ
//дһ������ָ��ָ��char* my_strcpy(char* dest, const char* src)
//дһ������ָ�����飬ָ��ָ���ĸ�my_strcpy����
//int main()
//{
//	char* (*pf)(char*, const char*);//����ָ��
//	char* (*pfarr[4])(char*, const char*) = { pf,pf,pf,pf };
//	return 0;
//}