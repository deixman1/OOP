#include <iostream>
#include <conio.h>
#include "Account.h"

using namespace std;
using Prog::Account;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "rus");
	Account a("12", "asdas", 1000);
	Account b("2", "ass", 100);
	Account c();
	cout << a.getBalance() << endl;
	cout << b.getBalance() << endl;
	cout << (a.MAX(b)).getBalance();
	_getch();
	return 0;
}