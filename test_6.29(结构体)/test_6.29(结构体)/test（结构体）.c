#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>





//�����������Դ�С��
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}


int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


////����-������-������
//union Un
//{
//	char c;
//	int i;
//};
//
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ֵ--����
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//
//
//int main()
//{
//	enum Sex s = MALE;//��ֵֻ����ö�ٿ���ֵ
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//Ĭ����0 1 2Ҳ��������ֵ 
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//int main()
//{
//	struct S s;
//	//������Ҫ�ı亯�����ֵ����Ҫ��ָ��
//	//�ṹ�崫�ξ�����ָ��
//	Init(&s);
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//	//printf("%d\n", s.a);
//
//	return 0;
//}



//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof()���������������ڽṹ���ƫ����
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//
//	return 0;
//}



//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}


//�ṹ��Ķ������ʼ��
//struct T
//{
//	double wight;
//	int age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//
//int main()
//{
//	//struct S s = { 'c', 5, 3.14, "hello zzh" };
//	//printf("%c %d %lf %s", s.c, s.a, s.d, s.arr);
//
//	struct S s = { 'c', {55.6, 56} , 5, 3.14, "hello zzh" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.wight);
//	return 0;
//}


//�ṹ���������
// struct Node
// {
// 	int data;
// 	struct Node* n;//���������ָ������
// };

// typedef struct Node
// {
// 	int data;
// 	struct Node* next;
// }Node;//����������ΪNode
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����ѧ��������+����+�绰+�Ա�

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;//�ֲ�����
//	struct Stu s2;//�ֲ�����
//	return 0;
//}