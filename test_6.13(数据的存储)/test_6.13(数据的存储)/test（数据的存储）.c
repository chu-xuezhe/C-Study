#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	return 0;
}


//int main()
//{
//	//整型提升是看自身的类型
//	char a = -128;
//	//原：10000000000000000000000010000000
//	//反：11111111111111111111111101111111
//	//补：11111111111111111111111110000000
//	//为char，取8位：10000000
//	//整型提升：char型，当有符号，补1
//	//11111111111111111111111110000000--补码
//	//打印时将其当无符号数，将其转换为十进制为4294967168
//	printf("%u\n", a);//4294967168
//	return 0;
//}


//输出什么？
//int main()
//{
//	char a = -1;//-1补码全1，char为一个字节
//	//原：10000000000000000000000000000001
//	//反：11111111111111111111111111111110
//	//补：11111111111111111111111111111111
//	//char为一个字节:去11111111，在打印时为整型，进行整型提升，前面补1，
//	//11111111111111111111111111111111，所以仍为-1
//	signed char b = -1;//和a相似，-1
//	unsigned char c = -1;//为无符号数，前面补0，00000000000000000000000011111111，
//	//解析为正数，为255
//	printf("a=%d,b=%d,c=%d", a, b, c);//-1,-1,255
//	return 0;
//}


//判断机器字节序
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}