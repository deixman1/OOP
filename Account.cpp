#include "Account.h"
namespace Prog {//������������ ����


	Account::Account(void)//����������� �� ���������
	{
		Name = " ";
		ID = "0";
		Balance = 0;
	}
	Account::Account(char* id, char* name, ui balance)//��� �������� ���������� � ������������
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