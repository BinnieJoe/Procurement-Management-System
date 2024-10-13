#pragma once

class Control
{
private:
	vector<Member*> members;
	vector<Product*> products;
	vector<Buy*> buys;

public:
	Control();

public:
	void init_tempdata();

	//회원 관리 
public:
	void member_insert();
	void member_printall();
	void member_select();

	//제품 관리
public:
	void product_insert();
	void product_printall();
	void product_select();  //Product클래스에 내포클래스(함수객체)

	//구매 관리 
public:
	void buy_insert();
	void select_product();
	void select_member();
};

