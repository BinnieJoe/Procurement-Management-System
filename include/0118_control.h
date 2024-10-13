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

	//ȸ�� ���� 
public:
	void member_insert();
	void member_printall();
	void member_select();

	//��ǰ ����
public:
	void product_insert();
	void product_printall();
	void product_select();  //ProductŬ������ ����Ŭ����(�Լ���ü)

	//���� ���� 
public:
	void buy_insert();
	void select_product();
	void select_member();
};

