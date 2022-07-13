#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);//p出了函数就无效了，并且有内存泄露
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//这里是传值，str本身是个变量
//	strcpy(str, "hello world");//函数会出错，因为str是空指针
//	printf(str);
//}//int main()
//{
//	Test();
//	return 0;
//}

//正确版
void GetMemory(char **p)
{
	*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}int main()
{
	Test();
	return 0;
}




//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是使用malloc开辟的20字节空间
//	//假设这里20字节不够我们使用
//	//我们希望有40字节空间
//	//这里用realloc来调整动态开辟的空间
//
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}



//int main()
//{
//	//开辟10个整形字节
//	//malloc(10*sizeof(int))//不初始化
//	int* p = (int*)calloc(10, sizeof(int));//初始化内容为0
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	//向内存申请10个整型空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//int* p = (int*)malloc(INT_MAX);//申请失败情况
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}