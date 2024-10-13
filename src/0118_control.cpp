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
	members.push_back(new Member("ȫ�浿"));
	members.push_back(new Member("��浿"));
	members.push_back(new Member("��浿"));
	members.push_back(new Member("���浿"));

	products.push_back(new Product("��ǻ��", 5000));
	products.push_back(new Product("���콺", 300));
	products.push_back(new Product("Ű����", 500));
	products.push_back(new Product("�����", 2000));
}


void Control::member_insert()
{
	cout << "\n[ȸ�� ����]\n" << endl;

	string name = WbInput::input_string("�̸�");

	Member* pmember = new Member(name);

	members.push_back(pmember);

	cout << "����Ǿ����ϴ�" << endl;
}

void Control::member_printall()
{
	cout << "[ȸ����] " << members.size() << "��" << endl;
	for (int i = 0; i < members.size(); i++)
	{
		Member* member = members[i];
		member->print();
	}
	cout << "\n" << endl;
}

void Control::member_select()
{
	cout << "\n[ȸ�� �˻�]\n" << endl;

	int number = WbInput::input_number("ȸ����ȣ�Է�");

	vector<Member*>::iterator itr;
	itr = find_if(members.begin(), members.end(), Member::FindNumber(number));
	if (itr == members.end())
	{
		cout << "���� ��ȣ�Դϴ�" << endl;
	}
	else
	{
		Member* member = *itr;
		member->println();
	}
}


void Control::product_insert()
{
	cout << "\n[��ǰ ����]\n" << endl;

	string name = WbInput::input_string("��ǰ��");
	int price = WbInput::input_number("��ǰ����");

	Product* product = new Product(name, price);

	products.push_back(product);

	cout << "����Ǿ����ϴ�" << endl;
}

void Control::product_printall()
{
	cout << "[��ǰ��] " << products.size() << "��" << endl;
	for (int i = 0; i < products.size(); i++)
	{
		Product* product = products[i];
		product->print();
	}
	cout << "\n" << endl;
}

void Control::product_select()
{
	cout << "\n[��ǰ �˻�]\n" << endl;

	int number = WbInput::input_number("��Ǿ��ȣ�Է�");

	vector<Product*>::iterator itr;
	itr = find_if(products.begin(), products.end(), Product::FindNumber(number));
	if (itr == products.end())
	{
		cout << "���� ��ȣ�Դϴ�" << endl;
	}
	else
	{
		Product* product = *itr;
		product->println();
	}
}

/*
* ù �� : ��ϵ� ��ǰ��ȣ�� ��ǰ���� ���
* �ι�° �� : ��ϵ� ����ȣ�� ������ ���
* ����ڿ��� ������ �Է¹޴´�.*****
* ��ǰ��ȣ�� ���� ���θ� Ȯ��(��ǰ�� �̸��� ��ȯ)
* ȸ����ȣ�� ���� ���θ� Ȯ��(���� �̸��� ��ȯ)
* ���� ��ü�� ���� *************
* ���� *****************
* ������ ���
*  "���� : ȫ�浿
*   ��ǰ�� : ��ǻ��
*   ����   : 1��
*   �ݾ�   : XXX��
*   >> ����ó���� �Ϸ�Ǿ����ϴ�.
*/
void Control::buy_insert()
{
	try
	{
		cout << "\n[��ǰ ����]\n" << endl;

		BuyControl::product_print(products);
		int p_number = WbInput::input_number("��ǰ��ȣ");

		BuyControl::member_print(members);
		int c_number = WbInput::input_number("ȸ����ȣ");

		int count = WbInput::input_number("����");

		string p_name = BuyControl::product_find(products, p_number);
		string c_name = BuyControl::member_find(members, c_number);
		int money = BuyControl::product_find_price(products, p_number);

		//BuyControl ����
		//buys, c_number, p_number�� �ٲ�.. 
		//������ ����� ���� ��ǰ�� ������ �̷��� �ִ��� Ȯ������
		//���� �̷��� ������ �ش� ��ü�� ��ȯ
		//������ NULL��ȯó�� 

		Buy* buy = new Buy(p_number, c_number, count);

		buys.push_back(buy);

		cout << "���� : " << c_name << endl;
		cout << "��ǰ�� : " << p_name << endl;
		cout << "���� : " << count << endl;
		cout << "�ݾ� : " << money * count << "��" << endl;
		cout << ">> ����ó���� �Ϸ�Ǿ����ϴ�." << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
		cout << "��ǰ ���� ����" << endl;
	}
}

void Control::select_product()
{
	cout << "\n[�������� �˻�]\n" << endl;

	int number = WbInput::input_number("��ǰ��ȣ�Է�");

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