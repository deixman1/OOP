#include "zoo.h"
#include <iostream>
#include <conio.h>
using namespace std;
using p::zoo;
int main(int argc, char** argv[]) {
	char an[100], ba[100], ca[100];
	ui a1, b1;
	zoo a;
	cin.getline(an, 100);
	a.setZiv(an);
	cin.getline(ba, 100);
	a.setPol(ba);
	cin.getline(ca, 100);
	a.setname(ca);
	cin >> a1;
	a.setmoney(a1);
	cin >> b1;
	a.setscore(b1);
	cout << a.getZiv() << endl;
	cout << a.getPol() << endl;
	cout << a.getname() << endl;
	cout << a.getmoney() << endl;
	cout << a.getscore() << endl;
	_getch();
	return 0;
}