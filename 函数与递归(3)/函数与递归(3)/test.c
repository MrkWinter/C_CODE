#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�õݹ�ķ����Զ���һ�����������ַ������ȣ���ϰ��
//int my_strlen(char* p)//ѭ����䷨
//{
//	int count =0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	int ret;
//	char arr[] = "ailixiya";
//	printf("�����봮�ַ�:>");
//	scanf("%s", arr);
//	ret = my_strlen(arr);
//	printf("�ַ����ĳ���Ϊ:%d", ret);
//    return 0;
//}
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(++p);//������++i������i++,���һֱ�ݹ���ȥ1+1+1+1+1+1....����ջ���
//	else                          //i++Ϊ�ȸ�ֵ��������i++�������ٸ�ֵ
//		return 0;
//}
//int main()
//{
//	int ret;
//	char arr[] = "ailixiya";
//	printf("�����봮�ַ�:>");
//	scanf("%s", arr);
//	ret = my_strlen(arr);
//	printf("�ַ����ĳ���Ϊ:%d", ret);
//	return 0;
//}
//�ݹ������
//��n�Ľײ�
//int Facl(int a)//ѭ����ײ�
//{
//	int i;
//	int ret=1;
//	for(i=1;i<=a;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Facl(int a)//�ݹ���ײ�
//{
//	if (a > 1)
//		return a * Facl(a - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d�Ľײ�Ϊ:%d",a, Facl(a));
//	return 0;
//}
//���n��쳲�������
//int Fib(int a)
//{
//	if (a <= 2)
//		return 1;//�ݹ��㷨�ڴ˴���̫���ʣ��ظ�������̫��
//	else         
//		return Fib(a - 1) + Fib(a - 2);//ÿ��һ��������Ҫ��ǰ��������
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);//������������TDD����д��ô�ã��������ô��
//	printf("��%d��쳲�������Ϊ:%d", a, Fib(a));
//	return 0;
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//��֤nΪ1��2ʱ쳲�������Ϊ2
//	while (n > 2)
//	{
//		c = a + b;//ѭ������쳲�������
//		a = b;
//		b = c;
//		n--;//��֤��ĶԵ�쳲�������Ҫѭ���Ĵ���
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("��%d��쳲�������Ϊ:%d", n, Fib(n));
//	return 0;
//}
//�ݹ��ѭ�����ܽ�����⣬��ʵ��ʱӦ��֤�㷨Ч�ʵ�ǰ���£��ٿ��Ǵ��븴�Ӷ�
//��������ݹ�����---1���������⣬2������̨������
//�ݹ��������Ҫ����������ѭ����Ҳ����ջ���
void test()
{
	int n=1;//�ݹ���ʱ����ֺܶ�����
	while (n < 10000)
	{

		test(n++);//ջ���
	}
}
int main()
{
	test();
	return 0;
}