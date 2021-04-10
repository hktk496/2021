#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"
void CheckCapacity(SeqList* ps)
{
	if (ps->size == ps->capacity)//满了需要增容
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDateType* newA = realloc(ps->a, sizeof(SeqList)*newcapacity);
		if (newA == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}
		ps->a = newA;
		ps->capacity = newcapacity;
	}
}
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	CheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(SeqList* ps)
{
	for (size_t i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	int pos = ps->size;
	CheckCapacity(ps);
	while (pos--)
	{
		ps->a[pos+1] = ps->a[pos];
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	size_t pos = 0;
	while (pos<=ps->size)
	{
		ps->a[pos] = ps->a[pos+1];
		pos++;
	}
	ps->size--;
}
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	size_t pos = 0;
	for (pos = 0; pos <= ps->size; pos++)
	{
		if (ps->a[pos] == x)
			return pos;
	}
	return -1;
}
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	CheckCapacity(ps);
	size_t ppos = ps->size;	
	while ((ppos--)!=pos)
	{
		ps->a[ppos+1] = ps->a[ppos];
	}
	ps->size++;
	ps->a[pos] = x;
}
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	size_t ppos = pos+1;
	while (ppos != ps->size)
	{
		ps->a[pos] = ps->a[ppos];
		pos++;
		ppos++;
	}
	ps->size--;
}