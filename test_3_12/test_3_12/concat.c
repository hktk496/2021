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
			return a;//a���ҵ�����ϵ�˵��±�
		}
	}
	return b;//-1Ϊû�ҵ���ϵ��
}
void deleteconcat(struct concat* pc)
{
	int a;
	char name[NAME];
	printf("������Ҫɾ����ϵ�˵�����>");
	scanf("%s",name);
	a=Finfconcat(pc,name);
	if (a != -1)
	{
		for (; a<pc->sz; a++)
		{
			pc->date[a] = pc->date[a + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ���\n");
	}
	else if (a==-1)
	{
		printf("�Ҳ�����ϵ�ˣ�ɾ��ʧ��\n");
	}
}

void srechconat(struct concat* pc)
{
	int b;
	char arr[20] = { 0 };
	printf("������Ҫ���ҵ���ϵ������>");
	scanf("%s", arr);
    b=Finfconcat(pc,arr);
	if(b!=-1)
	{
	printf("%-10s\t%-3s\t%-5s\t%-20s\t%-20s\n","����","�Ա�","����","�绰","��ַ");
	printf("%-10s\t%-3s\t%-5d\t%-20s\t%-20s\n",
			pc->date[b].name,
			pc->date[b].sex,
			pc->date[b].age,
			pc->date[b].tele,
			pc->date[b].adrr);
	}
	else
	{
		printf("�Ҳ��������������룡\n");
	}
}
void Inteconcat(struct concat* pc)
{
	memset(pc->date, 0, sizeof(pc->date));
	pc->sz = 0;
}
void addcontcat(struct concat* pc)
{
	printf("�����ϵ��\n");
	printf("����������>");
	scanf("%s",pc->date[pc->sz].name);
	printf("����������>");
	scanf("%d",&pc->date[pc->sz].age);
	printf("�������Ա�>");
	scanf("%s",pc->date[pc->sz].sex);
	printf("������绰>");
	scanf("%s",pc->date[pc->sz].tele);
	printf("�������ַ>");
	scanf("%s",pc->date[pc->sz].adrr);
	pc->sz++;
	printf("¼��ɹ�\n");
}
void showconcat(struct concat* pc)
{
	int a = 0;
	if(pc->sz==0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return ;
	}
	
	printf("%-10s\t%-3s\t%-5s\t%-20s\t%-20s\n","����","�Ա�","����","�绰","��ַ");
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
	printf("������Ҫ�޸ĵ���ϵ��>");
	scanf("%s",name);
	a=Finfconcat(pc,name);
	printf("����������>");
	scanf("%s",pc->date[a].name);
	printf("����������>");
	scanf("%d",&pc->date[a].age);
	printf("�������Ա�>");
	scanf("%s",pc->date[a].sex);
	printf("������绰>");
	scanf("%s",pc->date[a].tele);
	printf("�������ַ>");
	scanf("%s",pc->date[a].adrr);
	printf("¼��ɹ�\n");
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