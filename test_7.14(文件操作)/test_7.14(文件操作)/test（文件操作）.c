#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>



int main()
{
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("打开test2：");//看报错效果
		return 0;
	}

	fclose(pf);
	pf = NULL;
	return 0;
}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//空文件返回-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, 4, SEEK_CUR);//从起始位置开始偏移2个
//	//fseek(pf, -2, SEEK_END);//从末尾位置向前偏移2个（末尾是‘\0’）
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//2读取文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//
//	//FILE* pf = fopen("test.txt", "wb");
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	//fwrite(&s, sizeof(struct S), 1, pf);
//
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转储字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	//struct S s = { 10,3.14f,"bit" };
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	////格式化的形式写数据
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);//一次读一行
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//用%c
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('z', pfWrite);//必须用单引号
//	fputc('z', pfWrite);
//	fputc('h', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//No such file or directory
//		return 0;
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//没有会自动创建
//	fwrite(&a, 4, 1, pf);//二进制的形式写进文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}