#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һ.if else ���  
//��䶨�壬�зֺŵ�Ϊһ����䣬;ҲΪһ����䣬�ǿ����
//int main()
//{
//	int age;
//	scanf("������������жϣ�%d", &age);
//	if (age < 18)//Ϊ��ִ�У������Թ�
//		printf("δ����\n");
//	else if (18 <= age && age < 28)//����    ps��if(18<age<28)Ϊ������䣬�����ֻ��һ�ν���һ������,��age = 10 �����ɣ�if(0<28)
//		printf("����");
//	else if (28 <= age && age < 50)//�˴�Ϊ���֧���
//		printf("׳��");
//	else if (50 <= age && age < 90)
//		printf("����");
//	else
//		printf("����");
//	return 0;
//���ַ�ʽ�ȼۣ���һ���ǲ����߼����ڶ����������߼�
//if (age < 18);
//printf("δ����\n");
//else
//{
//	if (18 <= age && age < 28)
//		printf("����");
//	else if (28 <= age && age < 50)
//		printf("׳��");
//	else if (50 <= age && age < 90)
//		printf("����");
//	else
//		printf("����");
//return 0;
//}
//int main()
//{
//	int a = 1;
//	if (a == 1)
//	{
//		printf("2222");
//		printf("33333");//ִ�ж��������ô����
//	}
//return 0;
//}
//int main()
//{//����else����
//	int a = 1;
//	int b = 2;
//	if (a == 3)//�˴�if����ж�Ϊ�٣�����������if���
//	   if (b == 1)
//		  printf("hehe");//if els�ͽ�ԭ��ƥ��
//	   else
//		  printf("dada");
//
//	return 0;
//}
//int main()//���100�ڵ�����
//{
//	int a = 1;
//	while(a<=100)
//	{
//		if (1 == a%2)
//			printf("%d ", a);
//		a++;
//	}
//
//
//    return 0;
//}
//��.switch case break���
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//���������ͱ��ʽ
//	{
//	case 1://case ����������ͳ������ʽ
//	    printf("����һ\n");//�����������ȷ���������case break�߳�
//		break;
//	case 2:      
//	    printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//	    printf("������\n");
//		break;
//	default://û���������ʱִ��Ĭ����(����֮��)
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//��.while  for  do whileѭ�����
//int main()
//{
//	while (1)//������Ϊ�棬ִ��ѭ����Ϊ�٣��˳�ѭ�����˴�Ϊ��ѭ����
//		printf("�Ǻ�");
//	return 0;
//}
//whileѭ����ӡһ��ʮ
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			break;//�˳�ѭ��break
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		a++;
//		if (5 == a)
//			continue;//��������ѭ���б���ѭ������ʼ�����´�ѭ��(��ֹ����ѭ������ִ��������룬���ؿ�ͷwhile�����ж�)
//		printf("%d\n", a);//ps��break������ֹͣѭ����continue�Ǽ����´�ѭ��
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();//gatchar()��������һ���ַ��������ͱ���ch�� ps:�ַ���Ҳ�����������ͷ��������Ͳ�����������
//	putchar(ch);  //putchar()����ַ�����,�൱��printf("%c",ch);
//	printf("%c\n", ch);
//		return 0;
//}
//int main()
//{
//	int ch = 0;//ctrl + z =EOF������ֹͣѭ��
//	while ((ch = getchar()) != EOF)//EOF�ļ�������־end of file -> -1
//	{//getcher()����һ���ַ��������ַ���
//
//		putchar(ch);//�൱��printf()����
//	}
//	return 0;
//}
//int main()
//{
//	int a,b;
//	char password[20] = {0};//����һ������password��������20������ռ��80���ֽڣ�����ֻ����һ��0
//	printf("����������:>");
//	scanf("%s", password);//���鱾�����һ����ַ������ȡ��ַ���ţ�����������¼����
//	printf("��ȷ��(Y:N):>");//scanf,getchar���������뺯����scanfȡ�ո�ͻس�֮ǰ����Ϣ
//	getchar();//���յ�scanf����ȷ�������ڻ������Ļس���\n����һ������һ��ȡ��
//	while ((b = getchar()) != '\n')//getcher�����ַ�ֱ�����յ��س�scanf�����ı�־���˲��������յ��������κζ�����ַ������ո��Ժ��
//	{
//		;//����䣬����Ҫwhile����������
//
//	}
//		a = getchar();
//	if('Y' ==a )
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
//}
//int main()
//{
//	int a;
//	while ((a = getchar()) != EOF)
//	{
//		if (a < '0' || a>'9')//ɸѡ��0��9���ַ�
//			continue;
//		putchar(a);//�����0��9���ַ�
//
//	}
//	return 0;
//}
//��.for ���
//int main()
//{//for ѭ����ӡ1��100
//	int a;
//	for (a = 1; a < 100; a++)
//	   //��ʼ��   �ж�   ���� ��һ���whileѭ�������㣬��������
//		printf("%d ", a);
//
//	return 0;
//}
//int main()
//{
//	int a;
//	for (a = 1; a < 10; a++)
//	{   if (5 == a)
//			break;//break��������ѭ��
//		printf("%d ",a);
//    } 
//	return 0;
//}
//int main()
//{
//	int a;
//	for (a = 1; a < 10; a++)//ǰ�պ󿪽��飬ѭ���ڲ��ı�������
//	{
//		if (5 == a)
//			continue;//������ѭ����ֹͣ����ѭ�������a++Ȼ�����ж���ѭ��
//		printf("%d ", a);//��ӡ��Ϊ12346789
//	}//break��while��for���÷���ͬcontinue��while��for���÷���ͬ
//	return 0;
//}
//int main()
//{
//	int a;
//	for (;;)//for��ʼ���ģ��жϣ�����������ʡ�ԣ����ж�ʡ�Ժ��Ϊ���������ѭ��
//	{
//		printf("hehe");
//
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	for (a = 0; a < 10; a++)
//	{
//			for (b = 0; b < 10; b++)
//			{
//				printf("haha\n");
//
//			}
//	}
//
//	return 0;
//}//����ӡ100��haha��forѭ����forѭ��
//int main()
//{
//	int a=0, b=0;
//	for (; a < 10; a++)
//	{
//		for (; b < 10; b++)
//		{
//			printf("haha\n");
//
//		}
//	}
//
//	return 0;
//}//��ӡ10��haha����Ϊbû�г�ʼ����������ò�Ҫʡ��for����е�����
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("����\n");//��ӡ����������for�������������ͬʱ����
//	}
//	return 0;
//}
//int main()
//{//ѭ�����ٴΣ�
//	int a, b;
//	for (a = 0, b = 0; b = 0; a++, b++)//0�Σ���Ϊ�ж���Ϊ��ֵ��䣬b=0��Ϊ�٣�0�����ʲ�����ѭ��
//		b++;
//	return 0;
//}
//int main()
//{
//	while (1)//����Ϊ��һֱѭ����0Ϊ��ֹͣ
//	{
//		printf("hehe");
//
//	}
//	return 0;
//}
//��.do while ���
int main()
{
	int a =0;
	do//ѭ������ִ��һ��
	{
		if (5 == a)
			continue;//01234��ѭ��continue���ǽ�������ѭ����Ϊa���ܵ���������ѭ����ps��breakͬwhile for�����һ��
		printf("%d ", a);
		a++;
	}
	while (a < 10);
	return 0;
}