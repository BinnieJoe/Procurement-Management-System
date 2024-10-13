#include <iostream>
#include <vector>
using namespace std;

#include "Product.h"
#include "Member.h"
#include "Buy.h"
#include "BuyControl.h"

void BuyControl::product_print(const vector<Product*>& products)
{
	for (int i = 0; i < products.size(); i++)
	{
		Product* product = products[i];
		printf("%d(%s)  ", product->get_number(), product->get_name().c_str());
	}
	cout << endl;
}

void BuyControl::member_print(const vector<Member*>& members)
{
	for (int i = 0; i < members.size(); i++)
	{
		Member* member = members[i];
		printf("%d(%s)  ", member->get_number(), member->get_name().c_str());
	}
	cout << endl;
}

string BuyControl::product_find(vector<Product*>& products, int number)
{
	vector<Product*>::iterator itr;
	itr = find_if(products.begin(), products.end(), Product::FindNumber(number));
	if (itr == products.end())
		throw "없는 제품 번호입니다";

	Product* p = *itr;
	return p->get_name();
}

string BuyControl::member_find(vector<Member*>& members, int number)
{
	vector<Member*>::iterator itr;
	itr = find_if(members.begin(), members.end(), Member::FindNumber(number));
	if (itr == members.end())
		throw "없는 고객 번호입니다";

	Member* p = *itr;
	return p->get_name();
}

int BuyControl::product_find_price(vector<Product*>& products, int number)
{
	vector<Product*>::iterator itr;
	itr = find_if(products.begin(), products.end(), Product::FindNumber(number));
	if (itr == products.end())
		throw "없는 제품 번호입니다";

	Product* p = *itr;
	return p->get_price();
}

vector<Buy> BuyControl::buy_list_pnumber(const vector<Buy*>& buys, int pnumber)
{
	vector<Buy> retbuys;

	for (int i = 0; i < buys.size(); i++)
	{
		Buy* buy = buys[i];
		if (buy->get_p_number() == pnumber)
		{
			Buy b = *buy;
			retbuys.push_back(b);
		}
	}

	return retbuys;
}