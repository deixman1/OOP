#pragma once
namespace p
{
	typedef unsigned int ui;
	class Product
	{
	private:
		char* name;
		ui cen;
		ui kg;
	public:
		Product(void);
		void setname(char* name);
		char* getname();
		void setcen(ui price);
		ui getcen();
		void setkg(ui weight);
		ui getkg();
		~Product(void);
	};
	class Buy :public Product
	{
	private:
		ui num;
		ui cenall;
		ui kgall;
	public:
		Buy(void);
		void setnum(ui number);
		ui getnum();
		void setcenall();
		ui getcenall();
		void setkgall();
		ui getkgall();
		~Buy(void);
	};
	class Check :public Buy
	{
	public:
		void prinfo();
		void prbuy();
	};
}