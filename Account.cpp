#include "Account.h"
namespace Prog {//пространство имен


	Account::Account(void)//конструктор по умолчанию
	{
		Name = " ";
		ID = "11231234"; //suck and suck and suck and suck and 
		Balance = 0;
	}
	Account::Account(char* id, char* name, ui balance)//для указания параметров в конструкторе
	{
		ID = id;
		Name = name;
		Balance = balance;
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
	ui Account::getBalance(){
		return Balance;
	}
	void Account::setBalance(ui b) {
		Balance = b;
	}
}
