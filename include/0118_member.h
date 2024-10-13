#pragma once

/*
����ȣ(����� �ڵ����� ���� : 100,101,102..N)
�̸�
����Ʈ(���Ž� ���� ������ 10) ���ż���*10
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
	static int c_number;  //Ŭ���� �ɹ��ʵ�(1������, ��� �ν��Ͻ� ����)
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



