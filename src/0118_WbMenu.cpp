#include <iostream>
using namespace std;
#include <stdlib.h>
#include <conio.h>
#include "WbMenu.h"

void WbMenu::logo()
{
	system("cls");		//#include <stdlib.h>
	printf("************************************************\n");
	printf(" 2022년도 겨울학기 비트단기과정\n");
	printf(" 2023-1-18\n");
	printf(" 구매 관리 프로그램\n");
	printf("************************************************\n");
	system("pause");
}

void WbMenu::ending()
{
	system("cls");
	printf("************************************************\n");
	printf("프로그램을 종료합니다.\n");
	printf("************************************************\n");
	system("pause");
}

void WbMenu::main_menu()
{
	printf("************************************************\n");
	printf("[1] 회원 기능\n");
	printf("[2] 제품 기능\n");
	printf("[3] 구매 기능\n");
	printf("[4] 프로그램 종료\n");
	printf("************************************************\n");
}

void WbMenu::member_menu()
{
	printf("************************************************\n");
	printf("[1] insert(회원정보 저장)\n");
	printf("[2] select(회원번호 검색)\n");
	printf("[3] update(회원전화번호를 수정)\n");
	printf("[4] delete(회원정보 삭제)\n");
	printf("[5] 이전 메뉴로 가기\n");
	printf("************************************************\n");
}

void WbMenu::product_menu()
{
	printf("************************************************\n");
	printf("[1] insert(제품 저장)\n");
	printf("[2] select(제품번호 검색)\n");
	printf("[3] update(제품 수정)\n");
	printf("[4] delete(제품 삭제)\n");
	printf("[5] 이전 메뉴로 가기\n");
	printf("************************************************\n");
}

void WbMenu::buy_menu()
{
	printf("************************************************\n");
	printf("[1] insert(제품 구매)\n");
	printf("[2] select(제품번호로 검색)\n");
	printf("[3] select(회원명으로 검색)\n");
	printf("[4] 이전 메뉴로 가기\n");
	printf("************************************************\n");
}

char WbMenu::select_menu()
{
	char ch = _getch();  //#include <conio.h>
	return ch;
}
