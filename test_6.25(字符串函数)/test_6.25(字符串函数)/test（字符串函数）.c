#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include <ctype.h>


//memset--�ڴ�����
int main()
{
	char arr[] = "";
	memset(arr, '#', 10);//��arr��10���ֽ�����Ϊ��#��

	return 0;
}


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 9);//������ֽ���
//	printf("%d\n", ret);
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
////C���Ա�׼��
////memcpy ֻҪ�����ص����ڴ濽���Ϳ���
////memmove �����ص��ڴ�Ŀ���
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	memmove(arr + 2, arr, 20);
//	//memcpy(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	struct S arr3[] = { { "����", 20 }, { "����", 30 } };
//	struct S arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	//������   ������Ϣ
//	//0       --No error
//	//1       --Operation not permitted
//	//2       --No such file or directory
//	//.....
//
//	//errno��һ��ȫ�ֵĴ��������
//	//��C���Կ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//
//	//char* str = strerror(2);
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));//No such file or directory
//	else
//		printf("�򿪳ɹ�\n");
//
//	return 0;
//}




//int main()
//{
//	/*char arr[] = "zzh@hpu.edu.cn";
//	char* p = "@.";*/
//	char arr[] = "192.198.122.223";
//	char* p = ".";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}



//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p1 == '\0')
//		return (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1&&*s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;//�ҵ�
//		cur++;
//	}
//	return NULL;//�Ҳ���
//}
//
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	//char* ret = strstr(p1, p2);
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret1 = strcmp(p1, p2);
//	int ret2 = my_strcmp(p1, p2);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}


//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src);//����д��һ����˼
//	char* ret = dest;
//	//��'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");//�����������Ϊ�����޷����������Ի��������
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

