#define _CRT_SECURE_NO_WARNINGS 1//vs中不加这句scanf函数会报错
#include<stdio.h>

int main()
{
	//exten :声明外部符号
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}


//int global = 20;
//void test(){
//	printf("test-->%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	return 0;
//}
//
//int main(){
//	printf("hello world\n");
//	return 0;
//}