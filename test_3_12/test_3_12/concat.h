#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define NAME 20
#define SEX 5
#define TELE 20
#define ADRR 50

//初始化通讯录
void Inteconcat(struct concat* pc);

//添加联系人
void addcontcat(struct concat* pc);

//显示联系人
void showconcat(struct concat* pc);

//查找联系人
void srechconat(struct concat* pc);

//删除联系人
void deleteconcat(struct concat* pc);

//修改联系人
void modifyconcat(struct concat* pc);

//对联系人排序
void sortconcat(struct concat* pc);

struct peoinfo
{
	char name[NAME];
	int age;//年龄
	char sex[SEX];
	char tele[TELE];
	char adrr[ADRR];
};
struct concat
{
	struct peoinfo date[MAX];
	int sz;
};