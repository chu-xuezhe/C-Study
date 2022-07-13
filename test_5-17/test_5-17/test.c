#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{

	return 0;
}


////创建一个结构体Stu
//struct Stu
//{
//	char name[20];//结构体中的数组要标明大小
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	struct Stu s1 = { "张三", 20, "1234578" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	test1(arr);//4
//	test2(ch);//4
//	return 0;
//}


////编写代码实现：求一个整数存储在内存中的二进制中1的个数?
//
////方法二
//int main()
//{
//	int num;
//	printf("输入：");
//	scanf("%d", &num);
//	int count = 0;
//	////统计补码中几个1?
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////方法一（负数不行）
//int main()
//{
//	int num;
//	printf("输入：");
//	scanf("%d", &num);
//	int count = 0;
//	////统计补码中几个1?
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

