#include "Product.h"
#include <iostream>
using namespace std;

namespace p
{
	Product::Product(void)
	{
		name = " ";
		cen = 0;
		kg = 0;
	}
	void Product::setname(char* name1)
	{
		name = name1;
	}
	char* Product::getname()
	{
		return name;
	}
	void Product::setcen(ui cen1)
	{
		cen = cen1;
	}
	ui Product::getcen()
	{
		return cen;
	}
	void Product::setkg(ui kg1)
	{
		kg = kg1;
	}
	ui Product::getkg()
	{
		return kg;
	}

	Product::~Product(void)
	{
	}
	Buy::Buy() :num(0), cenall(0), kgall(0), Product() {};
	void Buy::setnum(ui num1)
	{
		num = num1;
	}
	ui Buy::getnum()
	{
		return num;
	}
	void Buy::setcenall()
	{
		ui resylt;
		resylt = num*getcen();
		cenall = resylt;
	}
	ui Buy::getcenall()
	{
		return cenall;
	}
	void Buy::setkgall()
	{
		ui resylt;
		resylt = num*getkg();
		kgall = resylt;
	}
	ui Buy::getkgall()
	{
		return kgall;
	}
	void Check::prinfo()
	{
		cout <<"Товар: " <<getname() <<"."<<endl << "Цена: " << getcen() << " руб." << endl << "Вес: " << getkg() <<" кг."<< endl<<endl<<endl;
	}
	void Check::prbuy()
	{
		cout <<"Товара куплено: " <<getnum() <<"шт."<<endl << "На сумму: " << getcenall() << " руб." << endl << "Общий вес: " << getkgall() <<" кг."<< endl;
	}

	Buy::~Buy(void) {};
}