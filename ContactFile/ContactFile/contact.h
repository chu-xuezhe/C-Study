#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3


enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};


typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼��Ϣ
typedef struct Contact
{
	struct PeoInfo *data;//���һ����Ϣ
	int size;//��¼��ǰ����Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
}Contact;

//��������

//��ʼ��
void InitContact(struct Contact* ps);

//����
void AddContact(struct Contact* ps);

//��ʾ
void ShowContact(const struct Contact* ps);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);

//����ָ������Ϣ
void SearchContact(struct Contact* ps);

//�޸�ָ������Ϣ
void ModifyContact(struct Contact* ps);

//�ͷſռ�
void DestoryContact(Contact* ps);

//�����ļ�
void SaveContact(Contact* ps);

//�����ļ���Ϣ��ͨѶ¼
void LoadContact(Contact* ps);