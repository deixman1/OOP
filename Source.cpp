#include <iostream>
#include <conio.h>
#include "Account.h"

using namespace std;
using Prog::Account;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "rus");
	Account a("12","asdas",1000);
	a.setBalance(124);
	a.setID("№212");
	a.setName("Denis");
	cout << "ID " << a.getID() << endl;
	cout << "Name " << a.getName() << endl;
	cout << "ID " << a.getBalance() << endl;
	_getch();
	return 0;
}