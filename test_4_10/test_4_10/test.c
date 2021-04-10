#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"
void test()
{
	SeqList list;
	SeqListInit(&list);
	SeqListPushBack(&list, 1);
	SeqListPushBack(&list, 2);
	SeqListPushBack(&list, 3);
	SeqListPrint(&list);
	SeqListPushFront(&list, 4);
	SeqListPushFront(&list, 5);
	SeqListPushFront(&list, 6);
	SeqListPrint(&list);
	SeqListInsert(&list, 2, 7);
	SeqListInsert(&list, 2, 8);
	SeqListInsert(&list, 2, 9);
	SeqListPrint(&list);
	int a=SeqListFind(&list, 3);
	printf("%d\n", a);
	SeqListPopFront(&list);
	SeqListPopFront(&list);
	SeqListPopFront(&list);
	SeqListErase(&list, 2);
	SeqListPrint(&list);
	SeqListPopBack(&list);
	SeqListPopBack(&list);
	SeqListPopBack(&list);
	SeqListPrint(&list);
}


int main()
{
	test();

	return 0;
}