#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
////int main()
////{
//	//��ά����
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//12*4=48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16 ��a[0]�൱�ڵ�һ����Ϊһά�������������ʵ���ϼ�����ǵ�һ��
//	//printf("%d\n", sizeof(a[0] + 1));//4 ָ��  ��һ�еڶ���Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4 ����һ�еڶ���Ԫ�ش�С
//	//printf("%d\n", sizeof(a + 1));//4 ָ��  �ڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(a + 1)));//16��  �ڶ���Ԫ�ش�С
//	//printf("%d\n", sizeof(&a[0] + 1));//4���ڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//4*4=16 һ��  �ڶ���
//	//printf("%d\n", sizeof(*a));//16�� a����Ԫ�ص�ַ--��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a))���Ǽ����һ�еĴ�С
//	//printf("%d\n", sizeof(a[3]));//16��һ�еĴ�С������ʱ����ʽ������ȥ���ʿ��Ƿ�Խ��
//	
//
//	//char *p = "abcdef";//p����a�ĵ�ַ
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//���
//	//printf("%d\n", strlen(&p + 1));//���
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//printf("%d\n", sizeof(p));//4  ��ַ
//	//printf("%d\n", sizeof(p + 1));// 4 ��ַ
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//
//	//char arr[] = "abcdef";
//
//	////strlen,�����ַ
//	//printf("%d\n", strlen(arr));//6 ����\0Ϊֹ
//	//printf("%d\n", strlen(arr + 0));//6 ͬ��
//	//printf("%d\n", strlen(*arr));//err  strlen,�����ַ
//	//printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7 �����С����'\0'��
//	//printf("%d\n", sizeof(arr + 0));//4 ��Ԫ��ָ��
//	//printf("%d\n", sizeof(*arr));//1 ��Ԫ��
//	//printf("%d\n", sizeof(arr[1]));//1 �ڶ���Ԫ��
//	//printf("%d\n", sizeof(&arr));//4 �����ַ
//	//printf("%d\n", sizeof(&arr + 1));//4 ���ǵ�ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 �ڶ���Ԫ�ص�ַ
//
////	return 0;
////}
//
//
////int main()
////{
////	int a[5] = { 1, 0, 3, 4, 5 };
////	int *ptr = (int *)(&a + 1);//&a�������ַ��+1������������
////	printf("%d,%d", *(a + 1), *(ptr - 1));//2   5
////	return 0;
////}
//////����Ľ����ʲô��
//
//
//
////struct Test
////{
////	int Num;
////	char *pcName;
////	short sDate;
////	char cha[2];
////	short sBa[4];
////}*p;
//////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//////��֪���ṹ��Test���͵ı�����С��20���ֽ�
////int main()
////{
////	p = (struct Test*)0x100000;
////	printf("%p\n", p + 0x1);//00100014   p+1 ���������ṹ�壨20�ֽڣ�
////	printf("%p\n", (unsigned long)p + 0x1);//00100001  p+1����ֱ��+1
////	printf("%p\n", (unsigned int*)p + 0x1);//00100004  ���+1�ǣ�unsigned int�Ĵ�С
////	return 0;
////}
//
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//����������ַ
//	int *ptr2 = (int *)((int)a + 1);//�������һ���ֽ�
//	printf("%x,%x", ptr1[-1], *ptr2);//4  2000000��С�˴洢��         %x��ӡ16����
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//�����ǣ����Ƕ��ű��ʽ���Գ�ʼ��Ϊ{1,3,5}
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4
//
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);//������������
//	int *ptr2 = (int *)(*(aa + 1));//������һ��
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));// 10 5
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;//paָ��work��һ����һ���ַ���
//	printf("%s\n", *pa);//at �����������һ����
//	return 0;
//}


int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };//���Ŵ�
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER ?  �úû�ͼ
	printf("%s\n", *cpp[-2] + 3);//ST  ?
	printf("%s\n", cpp[-1][-1] + 1);//EW  ?
	return 0; 
}


