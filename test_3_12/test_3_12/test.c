#define _CRT_SECURE_NO_WARNINGS 1
#include"concat.h"
void muen()
{
	printf("**********************************\n");
	printf("*****1.ADD        2.DELETE   *****\n");
	printf("*****3.SREACH     4.MODIFY   *****\n");
	printf("*****5.SHOW       6.SORT     *****\n");
	printf("*****7.REVER      0.EXIT   *****\n");
	printf("**********************************\n");
}
//system("cls")
enum Option
{
	EXIT,//0
	ADD,//1
	DELETE,//2
	SREACH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
	REVER//7
};
int main()
{
	struct concat con;
	int input = 0;
	Inteconcat(&con);

	do
	{
		//system("cls");
		muen();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case(ADD) :
			addcontcat(&con);
			break;
		case(DELETE) :
			deleteconcat(&con);
			break;
		case(SREACH) :
			srechconat(&con);
			break;
		case(MODIFY) :
			modifyconcat(&con);
			break;
		case(SHOW) :
			showconcat(&con);
			break;
		case(SORT) :
			sortconcat(&con);
			break;
		case(REVER) :
			Inteconcat(&con);
			break;
		case(EXIT) :
			printf("程序退出\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}