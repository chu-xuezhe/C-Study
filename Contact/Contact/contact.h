#pragma once

#include<stdio.h>
#include<string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录信息
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已有元素个数
};

//声明函数

//初始化
void InitContact(struct Contact* ps);

//增加
void AddContact(struct Contact* ps);

//显示
void ShowContact(const struct Contact* ps);

//删除指定联系人
void DelContact(struct Contact* ps);

//查找指定人信息
void SearchContact(struct Contact* ps);
//修改指定人信息
void ModifyContact(struct Contact* ps);