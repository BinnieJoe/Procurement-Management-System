#include <iostream>
using namespace std;
#include "Buy.h"

Buy::Buy(int _pn, int _cn, int _count)
	:p_number(_pn), c_number(_cn), count(_count)
{
}

int Buy::get_p_number() const
{
	return p_number;
}

int Buy::get_c_number() const
{
	return c_number;
}

int Buy::get_count() const
{
	return count;
}

void Buy::count_plus(int value)
{
	count = count + value;
}

void Buy::print() const
{
	cout << p_number << "\t";
	cout << c_number << "\t";
	cout << count << "°³" << endl;
}