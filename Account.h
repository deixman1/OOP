#pragma once
namespace Prog//пространство имен
{
	typedef unsigned int ui;
	class Account
	{
	private:
		char* ID;
		char* Name;
		unsigned int Balance;
	public:
		Account(void);
		Account(char*, char*, ui);
		void setID(char*);
		char* getID();
		void setName(char*);
		char* getName();
		ui getBalance();
		void setBalance(ui);
		~Account(void);
	};

}