#include <iostream>
using namespace std;
#include <stdlib.h>
#include <conio.h>
#include "WbMenu.h"

void WbMenu::logo()
{
	system("cls");		//#include <stdlib.h>
	printf("************************************************\n");
	printf(" 2022�⵵ �ܿ��б� ��Ʈ�ܱ����\n");
	printf(" 2023-1-18\n");
	printf(" ���� ���� ���α׷�\n");
	printf("************************************************\n");
	system("pause");
}

void WbMenu::ending()
{
	system("cls");
	printf("************************************************\n");
	printf("���α׷��� �����մϴ�.\n");
	printf("************************************************\n");
	system("pause");
}

void WbMenu::main_menu()
{
	printf("************************************************\n");
	printf("[1] ȸ�� ���\n");
	printf("[2] ��ǰ ���\n");
	printf("[3] ���� ���\n");
	printf("[4] ���α׷� ����\n");
	printf("************************************************\n");
}

void WbMenu::member_menu()
{
	printf("************************************************\n");
	printf("[1] insert(ȸ������ ����)\n");
	printf("[2] select(ȸ����ȣ �˻�)\n");
	printf("[3] update(ȸ����ȭ��ȣ�� ����)\n");
	printf("[4] delete(ȸ������ ����)\n");
	printf("[5] ���� �޴��� ����\n");
	printf("************************************************\n");
}

void WbMenu::product_menu()
{
	printf("************************************************\n");
	printf("[1] insert(��ǰ ����)\n");
	printf("[2] select(��ǰ��ȣ �˻�)\n");
	printf("[3] update(��ǰ ����)\n");
	printf("[4] delete(��ǰ ����)\n");
	printf("[5] ���� �޴��� ����\n");
	printf("************************************************\n");
}

void WbMenu::buy_menu()
{
	printf("************************************************\n");
	printf("[1] insert(��ǰ ����)\n");
	printf("[2] select(��ǰ��ȣ�� �˻�)\n");
	printf("[3] select(ȸ�������� �˻�)\n");
	printf("[4] ���� �޴��� ����\n");
	printf("************************************************\n");
}

char WbMenu::select_menu()
{
	char ch = _getch();  //#include <conio.h>
	return ch;
}
