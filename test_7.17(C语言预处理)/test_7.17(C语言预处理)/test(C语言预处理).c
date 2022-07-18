#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

#include<stddef.h>

struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	//计算偏移量
	//printf("%d\n", offsetof(struct S, c1));//0
	//printf("%d\n", offsetof(struct S, a));//4
	//printf("%d\n", offsetof(struct S, c2));//8

	//自己实现
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}


//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//
//	int* p = MALLOC(10, int);
//	return 0;
//}


//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class99 = 100;
//	printf("%d\n", CAT(Class, 99));//100
//	return 0;
//}


//#define SQURE(X) X*X
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	int ret = SQURE(5);
//	//printf("ret=%d\n", ret);
//	int a = 10;
//	int b = 20;
//	PRINT(a);//the value of a is 10
//	PRINT(b);//the value of b is 20
//
//	return 0;
//}


//#define MAX 100
//
////预定义符号
//
//int main()
//{
//	//printf("%s\n", __FILE__);//文件所在路径
//	////d:\用户\desktop\b站c语言\练习代码\test_7.17(c语言预处理)\test_7.17(c语言预处理)\test(c语言预处理).c
//	//printf("%d\n", __LINE__);//代码所在行 14
//	//printf("%s\n", __DATE__);//日期  Jul 17 2022
//	//printf("%s\n", __TIME__);//时间  19:21:14
//
//	//写日志文件
//	FILE* pf = fopen("log.txt", "w");//w写会覆盖之前的，a是追加
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//extern int Add(int x, int y);
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c=%d\n ", c);
//
//	system("pause");
//	return 0;
//}