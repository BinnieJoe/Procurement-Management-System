#pragma once

/*
��ǰ��ȣ
����ȣ
���ż���
*/
class Buy
{
private:
	int p_number;
	int c_number;
	int count;

public:
	Buy(int _pn, int _cn, int _count);

public:
	int get_p_number() const;
	int get_c_number() const;
	int get_count() const;

public:
	void count_plus(int value);  //value�� ��ŭ count�� ����
	void print() const;          //�� �ٿ� ��� ���� ���
};

