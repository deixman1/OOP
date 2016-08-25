#include <iostream>
#include <string>
#include "Product.h"
using namespace std;
using p::Product;
using p::Buy;
using p::Check;

int main(int argc,char** argv[])
{
	setlocale(LC_ALL, "Russian");
	Check a;
	a.setname("Уральские пельмени");
	a.setcen(12);
	a.setkg(1);
	a.setnum(30);
	a.setcenall();
	a.setkgall();
	a.prinfo();
	a.prbuy();
	cout << endl;
	system("pause");
}