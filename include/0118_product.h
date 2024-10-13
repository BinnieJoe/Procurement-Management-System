#pragma once

/*
상품번호(저장시 자동으로 증가 : 1,2,3…N)
상품명
가격
*/
class Product
{
public:
	class FindNumber
	{
	private:
		int number;
	public:
		FindNumber(int _number) : number(_number) {}

	public:
		bool operator() (Product* s)
		{
			if (s->get_number() == number)  return true;
			else							return false;
		}
	};

private:
	static int s_number;
private:
	int number;
	string name;
	int price;

public:
	Product(string _name, int _price);

public:
	int get_number() const;
	string get_name() const;
	int get_price() const;
	void set_price(int value);

public:
	void print() const;
	void println() const;
};

