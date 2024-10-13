#include <iostream>
using namespace std;
#include "WbInput.h"

int WbInput::input_number(string msg)
{
	cout << msg << " : ";
	int number;
	cin >> number;
	return number;
}

string WbInput::input_string(string msg)
{
	cout << msg << " : ";
	string str;
	cin >> str;
	return str;
}