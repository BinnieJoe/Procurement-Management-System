#include <iostream>
using namespace std;
#include "Member.h"

int Member::c_number = 100;

Member::Member(string _name, int _point /*= 10*/)
	:name(_name), point(_point), number(c_number)
{
	c_number++;
}

int Member::get_number() const
{
	return number;
}

string Member::get_name() const
{
	return name;
}

int Member::get_point() const
{
	return point;
}

void Member::point_plus(int value)
{
	point = point + value;
}

void Member::print() const
{
	cout << number << "\t";
	cout << name << "\t";
	cout << point << endl;
}

void Member::println() const
{
	cout << "회원번호 : " << number << endl;
	cout << "이름 : " << name << endl;
	cout << "포인트 : " << point << endl;
}