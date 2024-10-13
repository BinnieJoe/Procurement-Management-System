#pragma once

class BuyControl
{
public:
	static void product_print(const vector<Product*>& products);
	static void member_print(const vector<Member*>& members);

public:
	static string product_find(vector<Product*>& products, int number);
	static string member_find(vector<Member*>& members, int number);

	static int product_find_price(vector<Product*>& products, int number);


public:
	static vector<Buy> buy_list_pnumber(const vector<Buy*>& buys, int pnumber);
};

