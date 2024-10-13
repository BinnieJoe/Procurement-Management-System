#include <iostream>
#include <vector>
using namespace std;
#include <conio.h>

//------------------------------
#include "Member.h"
#include "Product.h"
#include "Buy.h"
//--------------------------------
#include "Control.h"
#include "App.h"
#include "WbMenu.h"

App::App()
{
	con = new Control;
}

App::~App()
{
	delete con;
}

void App::init()
{
	WbMenu::logo();
}

void App::run()
{
	while (true)
	{
		system("cls");

		WbMenu::main_menu();
		switch (WbMenu::select_menu())
		{
		case '1':  member_sub_run();	break;
		case '2':  product_sub_run();	break;
		case '3':  buy_sub_run();		break;
		case '4':  return;
		}
		system("pause");
	}
}

void App::member_sub_run()
{
	while (true)
	{
		system("cls");
		con->member_printall();
		WbMenu::member_menu();
		switch (WbMenu::select_menu())
		{
		case '1':  con->member_insert();	break;
		case '2':  con->member_select();	break;
			//case '3':  buy_sub_run();		break;
			//case '4':  buy_sub_run();		break;
		case '5':  return;
		}
		system("pause");
	}
}

void App::product_sub_run()
{
	while (true)
	{
		system("cls");
		con->product_printall();
		WbMenu::product_menu();
		switch (WbMenu::select_menu())
		{
		case '1':  con->product_insert();	break;
		case '2':  con->product_select();	break;
			//case '3':  buy_sub_run();		break;
			//case '4':  buy_sub_run();		break;
		case '5':  return;
		}
		system("pause");
	}
}

void App::buy_sub_run()
{
	while (true)
	{
		system("cls");
		//con->product_printall();
		WbMenu::buy_menu();
		switch (WbMenu::select_menu())
		{
		case '1':  con->buy_insert();		break;
		case '2':  con->select_product();	break;
			//case '3':  buy_sub_run();		break;
		case '4':  return;
		}
		system("pause");
	}
}

void App::exit()
{
	WbMenu::ending();
}
