#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define NAME 20
#define SEX 5
#define TELE 20
#define ADRR 50

//��ʼ��ͨѶ¼
void Inteconcat(struct concat* pc);

//�����ϵ��
void addcontcat(struct concat* pc);

//��ʾ��ϵ��
void showconcat(struct concat* pc);

//������ϵ��
void srechconat(struct concat* pc);

//ɾ����ϵ��
void deleteconcat(struct concat* pc);

//�޸���ϵ��
void modifyconcat(struct concat* pc);

//����ϵ������
void sortconcat(struct concat* pc);

struct peoinfo
{
	char name[NAME];
	int age;//����
	char sex[SEX];
	char tele[TELE];
	char adrr[ADRR];
};
struct concat
{
	struct peoinfo date[MAX];
	int sz;
};