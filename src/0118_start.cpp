#include <iostream>
#include <vector>
using namespace std;
//------------------------------
#include "Member.h"
#include "Product.h"
#include "Buy.h"
//--------------------------------
#include "Control.h"
#include "App.h"

int main()
{
	App app;
	app.init();
	app.run();
	app.exit();

	return 0;
}