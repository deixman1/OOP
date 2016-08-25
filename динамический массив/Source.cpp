#include <iostream>
#include <time.h>
#include <string>
#include <conio.h>
#include "Find.h"
using namespace std;
using p::Find;
using p::Sort;
int main() {
	int n = 100;
	int *arr = new int[n];
	srand(time(NULL));
	Find a;
	a.setarr(arr, n);
	_getch();
	return 0;
}