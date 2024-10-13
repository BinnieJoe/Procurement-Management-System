#include <iostream>
#include <vector>
using namespace std;

#include "Member.h"
#include "Product.h"
#include "Buy.h"
#include "BuyControl.h"
#include "Control.h"
#include "WbInput.h"

Control::Control()
{
	init_tempdata();
}

void Control::init_tempdata()
{
	members.push_back(new Member("홍길동"));
	members.push_back(new Member("김길동"));
	members.push_back(new Member("고길동"));
	members.push_back(new Member("공길동"));

	products.push_back(new Product("컴퓨터", 5000));
	products.push_back(new Product("마우스", 300));
	products.push_back(new Product("키보드", 500));
	products.push_back(new Product("모니터", 2000));
}


void Control::member_insert()
{
	cout << "\n[회원 가입]\n" << endl;

	string name = WbInput::input_string("이름");

	Member* pmember = new Member(name);

	members.push_back(pmember);

	cout << "저장되었습니다" << endl;
}

void Control::member_printall()
{
	cout << "[회원수] " << members.size() << "명" << endl;
	for (int i = 0; i < members.size(); i++)
	{
		Member* member = members[i];
		member->print();
	}
	cout << "\n" << endl;
}

void Control::member_select()
{
	cout << "\n[회원 검색]\n" << endl;

	int number = WbInput::input_number("회원번호입력");

	vector<Member*>::iterator itr;
	itr = find_if(members.begin(), members.end(), Member::FindNumber(number));
	if (itr == members.end())
	{
		cout << "없는 번호입니다" << endl;
	}
	else
	{
		Member* member = *itr;
		member->println();
	}
}


void Control::product_insert()
{
	cout << "\n[제품 저장]\n" << endl;

	string name = WbInput::input_string("제품명");
	int price = WbInput::input_number("제품가격");

	Product* product = new Product(name, price);

	products.push_back(product);

	cout << "저장되었습니다" << endl;
}

void Control::product_printall()
{
	cout << "[제품수] " << products.size() << "개" << endl;
	for (int i = 0; i < products.size(); i++)
	{
		Product* product = products[i];
		product->print();
	}
	cout << "\n" << endl;
}

void Control::product_select()
{
	cout << "\n[제품 검색]\n" << endl;

	int number = WbInput::input_number("재퓸번호입력");

	vector<Product*>::iterator itr;
	itr = find_if(products.begin(), products.end(), Product::FindNumber(number));
	if (itr == products.end())
	{
		cout << "없는 번호입니다" << endl;
	}
	else
	{
		Product* product = *itr;
		product->println();
	}
}

/*
* 첫 줄 : 등록된 제품번호와 제품명을 출력
* 두번째 줄 : 등록된 고객번호와 고객명을 출력
* 사용자에게 정보를 입력받는다.*****
* 제품번호의 존재 여부를 확인(제품의 이름을 반환)
* 회원번호의 존재 여부를 확인(고객의 이름을 반환)
* 구매 객체를 생성 *************
* 저장 *****************
* 정보를 출력
*  "고객명 : 홍길동
*   제품명 : 컴퓨터
*   수량   : 1개
*   금액   : XXX원
*   >> 구매처리가 완료되었습니다.
*/
void Control::buy_insert()
{
	try
	{
		cout << "\n[제품 구매]\n" << endl;

		BuyControl::product_print(products);
		int p_number = WbInput::input_number("제품번호");

		BuyControl::member_print(members);
		int c_number = WbInput::input_number("회원번호");

		int count = WbInput::input_number("개수");

		string p_name = BuyControl::product_find(products, p_number);
		string c_name = BuyControl::member_find(members, c_number);
		int money = BuyControl::product_find_price(products, p_number);

		//BuyControl 질문
		//buys, c_number, p_number를 줄께.. 
		//동일한 사람이 동일 제품을 구매한 이력이 있는지 확인해줘
		//동일 이력이 있으면 해당 객체를 반환
		//없으면 NULL반환처리 

		Buy* buy = new Buy(p_number, c_number, count);

		buys.push_back(buy);

		cout << "고객명 : " << c_name << endl;
		cout << "제품명 : " << p_name << endl;
		cout << "수량 : " << count << endl;
		cout << "금액 : " << money * count << "원" << endl;
		cout << ">> 구매처리가 완료되었습니다." << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
		cout << "제품 구매 실패" << endl;
	}
}

void Control::select_product()
{
	cout << "\n[구매정보 검색]\n" << endl;

	int number = WbInput::input_number("제품번호입력");

	vector<Buy> ret = BuyControl::buy_list_pnumber(buys, number);

	for (int i = 0; i < ret.size(); i++)
	{
		Buy b = ret[i];
		b.print();
	}
}

void Control::select_member()
{

}