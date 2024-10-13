#pragma once

/*
상품번호
고객번호
구매수량
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
	void count_plus(int value);  //value값 만큼 count를 증가
	void print() const;          //한 줄에 모든 정보 출력
};

