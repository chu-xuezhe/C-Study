#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

typedef struct Stu
{
	//��Ա����
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}

int main()
{
	Stu s = { "����", 25, "18888999988", "��" };
	//��ӡ�ṹ������,�ĸ�����
	//2�ã�1��������Ҫ�ռ���൱�ڿ�����һ��
	Print1(s);
	Print2(&s);
	return 0;
}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[20] = "hahahaha\n";
//	struct T t = { "hello zzh", { 10, 'n', "hello ya", 3.14 }, arr };
//	printf("%s\n", t.ch);//hello zzh
//	printf("%s\n", t.s.arr);//hello ya
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hahahaha
//	printf("%c\n", t.s.c);//n ���λ���ڳ�ʼ��ʱҪ�õ����Ų���Ҫ��һ���ַ�
//	return 0;
//}

//struct���ṹ��ؼ���   Stu���ṹ���ǩ  struct Stu �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];//�ṹ���е����������ȷ����С
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3��ȫ�ֱ���

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef�ǽ������ṹ��������������ǽ�������ΪStu���������ֱ����Stu�������
//
//int main()
//{
//	struct Stu s1 = { "����", 20, "15212451345", "��" };//s�Ǿֲ�����
//	Stu s2 = { "����", 22, "15212451526", "Ů" };//��ʼ��
//	return 0;
//}