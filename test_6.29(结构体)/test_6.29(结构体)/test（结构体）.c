#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>





//用联合体测电脑大小端
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
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


////联合-联合体-共用体
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


//枚举类型
//enum Sex
//{
//	//枚举的可能值--常量
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//
//
//int main()
//{
//	enum Sex s = MALE;//赋值只能是枚举可能值
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//默认是0 1 2也可以设置值 
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
//	//函数内要改变函数外的值传参要用指针
//	//结构体传参尽量用指针
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
//	//offsetof()函数计算变量相对于结构体的偏移量
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


//结构体的定义与初始化
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


//结构体的自引用
// struct Node
// {
// 	int data;
// 	struct Node* n;//这里必须用指针类型
// };

// typedef struct Node
// {
// 	int data;
// 	struct Node* next;
// }Node;//将其重命名为Node
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：名字+年龄+电话+性别

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;//全局变量
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	struct Stu s1;//局部变量
//	struct Stu s2;//局部变量
//	return 0;
//}