#pragma once

/*
고객번호(저장시 자동으로 증가 : 100,101,102..N)
이름
포인트(구매시 마다 적립금 10) 구매수량*10
*/
class Member
{
public:
	class FindNumber
	{
	private:
		int number;
	public:
		FindNumber(int _number) : number(_number) {}

	public:
		bool operator() (Member* s)
		{
			if (s->get_number() == number)  return true;
			else							return false;
		}
	};

private:
	static int c_number;  //클래스 맴버필드(1개생성, 모든 인스턴스 공유)
private:
	int number;
	string name;
	int point;

public:
	Member(string _name, int _point = 10);

public:
	int get_number() const;
	string get_name() const;
	int get_point() const;

public:
	void point_plus(int value);
	void print() const;
	void println() const;
};



