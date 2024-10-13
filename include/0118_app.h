#pragma once

class App
{
private:
	Control* con;

public:
	App();
	~App();

public:
	void init();
	void run();
	void exit();

private:
	void member_sub_run();
	void product_sub_run();
	void buy_sub_run();
};

