#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

typedef struct Stu
{
	//成员变量
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
	Stu s = { "李四", 25, "18888999988", "男" };
	//打印结构体数据,哪个更好
	//2好，1开销大，需要空间大，相当于拷贝了一份
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
//	printf("%c\n", t.s.c);//n 这个位置在初始化时要用单引号并且要是一个字符
//	return 0;
//}

//struct：结构体关键字   Stu：结构体标签  struct Stu 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];//结构体中的数组必须有确定大小
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是全局变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef是将上述结构体起别名，这里是将其起名为Stu，后面可以直接用Stu定义变量
//
//int main()
//{
//	struct Stu s1 = { "张三", 20, "15212451345", "男" };//s是局部变量
//	Stu s2 = { "李四", 22, "15212451526", "女" };//初始化
//	return 0;
//}