#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//λ�εĶ���
struct A
{
	int a : 2;//2ָ����ռ2��bit
	int b : 5;
	int c : 10;
	int d : 30;//λ���СС�ڵ���32
};
int main()
{
	struct A s1;
	printf("%d", sizeof(s1));//8
	return 0;
	//λ�ε�ʹ����Ϊ�˽�ʡ�ռ�
}
//vsλ�εĴ��淽ʽ
//λ���е�Ԫ��Ϊint��char��
//λ��Ԫ�ش���ʱ�ȿ���4(int)/1(char��)���ֽ� �ٴ�������ʹ�ÿռ� ���ռ䲻�� �򿪱��µĿռ�
//λ�ο�����һ���ֽ��д洢������ݣ����ٿռ���˷�
//λ���в���ƽ̨��
//���� �������ݰ���ʹ�� ��ʡ�ռ�