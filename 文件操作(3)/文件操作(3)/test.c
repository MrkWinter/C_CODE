#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//�Զ����Ƶ���ʽ���(д)fwrite����size_t fwrite( void *buffer, size_t size, size_t count, FILE *stream );
//fwrite(Ҫ������ݵı����ĵ�ַ��������ݵ�Ԫ�ش�С��������ݵ�Ԫ�ظ�����������ݵ��ļ�ָ��)
//�Զ����Ƶ���ʽ����(��)fread���� size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//fread(�������ݴ�ŵı����ĵ�ַ���������ݵ�Ԫ�ش�С���������ݵ�Ԫ�ظ������������ݵ��ļ�ָ��)
//struct S
//{
//	char name[10];
//	int age;
//	float socre;
//};
//
//int main()
//{
//	struct S s1 = { "zhangsan",18,59.9 };
//	struct S s2 = { 0 };
//	char buf[100] = { 0 };
//	FILE* wr = fopen("test.txt", "wb");//wb���Զ����Ƶ���ʽд��
//	if (wr == NULL)
//		return 0;
//	fwrite(&s1, sizeof(s1), 1, wr);
//	fclose(wr);
//	wr = NULL;
//	FILE* re = fopen("test.txt", "rb");//rb���Զ����Ƶ���ʽ����
//	if (re == NULL)
//		return 0;
//	fread(&s2, sizeof(s2), 1, re);
//	printf("%s %d %.2f", s2.name, s2.age, s2.socre);
//	fclose(re);
//	re = NULL;
//	return 0;
//}
//�ܽ᣺�ļ���˳���д������
//fputc fgetc fputs fgets fprintf fscanf spritf sscanf fwrite fread ��
//�����������ļ��������д
//fseek int fseek( FILE *stream, long offset, int origin );
//��λ�ļ�ָ�� fseek(�ļ�ָ�룬�ļ�ָ��ƫ�������ļ�ָ��ƫ�Ƶ���ʼλ��) 
//��ʼλ�������� SEEK_CUR(��ǰλ��)   SEEK_END(ĩβλ��)ĩβλ��Ϊ����ı��ĺ���  SEEK_SET(��ʼλ��)
//int main()
//{
//	FILE* read = fopen("test.txt", "r");
//	if (read == NULL)
//		return 0;
//	fseek(read, -1, SEEK_END);//��λ�ļ�ָ��λ��Ϊf
//	int ret = fgetc(read);
//	printf("%c", ret);
//	fclose(read);
//	read = NULL;
//	return 0;
//}
// ftell long ftell( FILE *stream );
//�����ļ�(λ��)ָ���൱����ʼλ�õ�ƫ���� ftell(�ļ�ָ��)
//rewind void rewind( FILE *stream );
//���ļ�ָ�뷵����ʼλ��
//int main()
//{
//	FILE* read = fopen("test.txt", "r");
//	if (read == NULL)
//		return 0;
//	fseek(read, -1, SEEK_END);//��λ�ļ�ָ��λ��Ϊf
//	int ret = fgetc(read);//ÿ��һ�����ƫ��һλ
//	printf("%c\n", ret);
//	printf("%d\n",(int)ftell(read));//ƫ����Ϊ6
//	rewind(read);//������ʼλ��
//	printf("%d\n", (int)ftell(read));//ƫ����Ϊ0
//	fclose(read);
//	read = NULL;
//	return 0;
//}
//�ж��ļ�����ԭ���� ferror (feof) 
//ferror(�ļ�ָ��) ��ȡʧ�ܽ��� ���ط�0ֵ�д���)
//��ȡ�ļ�ĩβEOF���� ����ֵΪ0 (�޴���) EOF ���� end of file �ļ���β ֵΪ-1
//feof(�ļ�ָ��) ��ȡ�ļ�ĩβEOF ����ֵΪ��0ֵ (�޴���)
//����ֵΪ0 (�д���)
//ferror�ж����д����  feor�ж����޴����
//�ļ���ȡ����������־
//fegetc ����ֵΪEOF
//fegets ����ֵΪ��ָ��
//fread ����ֵС��ʵ��Ҫ������
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{//perror�����ɴ�ӡ�Զ��������Ϣ��ʾ �����ں���ϴ�����Ϣ
//		//�൱�� printf("open the file2: %s",strerror(errno));
//		//�����˵����෽��
//		perror("open the file2");
//		return 0;
//	}
//	int ch=0;
//	while ((ch = fgetc(pf)) != EOF)//ֱ������ļ�ĩβ���������ѭ��
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))//���ط�0ֵ���ڴ���
//		printf("error\n");
//	else if (feof(pf))//���ط�0ֵ�����ڴ���
//		printf("end of file\n");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}