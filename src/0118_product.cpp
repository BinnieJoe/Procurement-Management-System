#include <iostream>
using namespace std;
#include "Product.h"

int Product::s_number = 1;

Product::Product(string _name, int _price)
	:name(_name), price(_price), number(s_number)
{
	s_number++;
}


int Product::get_number() const
{
	return number;
}

string Product::get_name() const
{
	return name;
}

int Product::get_price() const
{
	return price;
}

void Product::set_price(int value)
{
	price = value;
}

void Product::print() const
{
	cout << number << "\t";
	cout << name << "\t";
	cout << price << endl;
}

void Product::println() const
{
	cout << "��ǰ��ȣ : " << number << endl;
	cout << "��ǰ�� : " << name << endl;
	cout << "���� : " << price << "��" << endl;
}
