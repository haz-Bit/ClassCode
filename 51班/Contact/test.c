#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("********************************\n");
	printf("******1. add      2. del   *****\n");
	printf("******3. search   4. modify*****\n");
	printf("******5. show     6. empty *****\n");
	printf("******7. sort     0. exit  *****\n");
	printf("********************************\n");
}

void test()
{
	int input = 0;
	Contact con;//通讯录
	InitContact(&con);//初始化通讯录
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case MODIFY:
			break;
		case SEARCH:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EMPTY:
			break;
		case EXIT:
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

