#include "Find.h"
#include <iostream>
using namespace std;

namespace p
{
	Find::Find(void)
	{
	}
	void Find::setarr(int* arr, ui n)
	{
		for (int i(0); i < n; i++) {
			arr[i] = i + 1;//в каждую ¤йчейку записываем i+1 число
			cout << arr[i] << endl;
		}
	}
	Find::~Find(void)
	{
	}
	Sort::Sort() {};
	Sort::~Sort(void) {};
}