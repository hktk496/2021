#define _CRT_SECURE_NO_WARNINGS 1
#include"concat.h"
static int Finfconcat(struct concat* pc,char* name)
{
	int a,b=-1;
	for (a=0;a<pc->sz;a++)
	{
		b=strcmp(pc->date[a].name,name);
		if(b==0)
		{
			return a;//a是找到的联系人的下标
		}
	}
	return b;//-1为没找到联系人
}
void deleteconcat(struct concat* pc)
{
	int a;
	char name[NAME];
	printf("请输入要删除联系人的名字>");
	scanf("%s",name);
	a=Finfconcat(pc,name);
	if (a != -1)
	{
		for (; a<pc->sz; a++)
		{
			pc->date[a] = pc->date[a + 1];
		}
		pc->sz--;
		printf("删除成功！\n");
	}
	else if (a==-1)
	{
		printf("找不到联系人，删除失败\n");
	}
}

void srechconat(struct concat* pc)
{
	int b;
	char arr[20] = { 0 };
	printf("请输入要查找的联系人姓名>");
	scanf("%s", arr);
    b=Finfconcat(pc,arr);
	if(b!=-1)
	{
	printf("%-10s\t%-3s\t%-5s\t%-20s\t%-20s\n","姓名","性别","年龄","电话","地址");
	printf("%-10s\t%-3s\t%-5d\t%-20s\t%-20s\n",
			pc->date[b].name,
			pc->date[b].sex,
			pc->date[b].age,
			pc->date[b].tele,
			pc->date[b].adrr);
	}
	else
	{
		printf("找不到，请重新输入！\n");
	}
}
void Inteconcat(struct concat* pc)
{
	memset(pc->date, 0, sizeof(pc->date));
	pc->sz = 0;
}
void addcontcat(struct concat* pc)
{
	printf("添加联系人\n");
	printf("请输入姓名>");
	scanf("%s",pc->date[pc->sz].name);
	printf("请输入年龄>");
	scanf("%d",&pc->date[pc->sz].age);
	printf("请输入性别>");
	scanf("%s",pc->date[pc->sz].sex);
	printf("请输入电话>");
	scanf("%s",pc->date[pc->sz].tele);
	printf("请输入地址>");
	scanf("%s",pc->date[pc->sz].adrr);
	pc->sz++;
	printf("录入成功\n");
}
void showconcat(struct concat* pc)
{
	int a = 0;
	if(pc->sz==0)
	{
		printf("通讯录为空！\n");
		return ;
	}
	
	printf("%-10s\t%-3s\t%-5s\t%-20s\t%-20s\n","姓名","性别","年龄","电话","地址");
	while(a<pc->sz)
	{
		printf("%-10s\t%-3s\t%-5d\t%-20s\t%-20s\n",
			pc->date[a].name,
			pc->date[a].sex,
			pc->date[a].age,
			pc->date[a].tele,
			pc->date[a].adrr);
		a++;
	}
}
void modifyconcat(struct concat* pc)
{
	int a;
	char name[NAME];
	printf("请输入要修改的联系人>");
	scanf("%s",name);
	a=Finfconcat(pc,name);
	printf("请输入姓名>");
	scanf("%s",pc->date[a].name);
	printf("请输入年龄>");
	scanf("%d",&pc->date[a].age);
	printf("请输入性别>");
	scanf("%s",pc->date[a].sex);
	printf("请输入电话>");
	scanf("%s",pc->date[a].tele);
	printf("请输入地址>");
	scanf("%s",pc->date[a].adrr);
	printf("录入成功\n");
}
void sortconcat(struct concat* pc)
{
	int a=0,b;
	do
	{
	b=strcmp(pc->date[a].name,pc->date[a+1].name);
	if(b>0)
	{
		struct peoinfo p3;
		p3 = pc->date[a];
		pc->date[a] = pc->date[a + 1];
		pc->date[a + 1] = p3;
		//struct peoinfo p1=pc->date[a];
		//struct peoinfo p2=pc->date[a+1];
		//struct peoinfo p3;
		//p3=p1;
		//p1=p2;
		//p2=p3;
	}
	a++;
	}
	while(a<pc->sz-1);
}