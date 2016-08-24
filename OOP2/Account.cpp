#include "Account.h"
namespace Prog {//пространство имен


	Account::Account(void)//конструктор по умолчанию
	{
		Name = " ";
		ID = "0";
		Balance = 0;
		Max = 9999;
	}
	Account::Account(char* id, char* name, ui balance)//для указания параметров в конструкторе
	{
		Max = 9999;
		ID = id;
		Name = name;
		if (balance < Max)
			Balance = balance;
		else Balance = 0;
	}


	Account::~Account(void)
	{
	}
	void Account::setID(char* id) {
		ID = id;
	}
	char* Account::getID() {
		return ID;
	}
	void Account::setName(char* name) {
		Name = name;
	}
	char* Account::getName()
	{
		return Name;
	}
	ui Account::getBalance() {
		return Balance;
	}
	void Account::setBalance(ui b) {
		if(b < Max)
		Balance = b;
		else Balance = 0;
	}
	void Account::Addbalance(ui add) {
		if (Balance + add < Max) Balance += add;
		else Balance = Balance;
	}
	void Account::Takemoney(ui take) {
		if (take <= Balance) Balance -= take;
	}
	Account Account::MAX(Account& object) {
		if (Balance < object.getBalance()) return object;
		else return *this;
	}
}