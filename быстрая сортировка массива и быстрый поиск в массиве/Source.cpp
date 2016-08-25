#include <iostream>
#include <time.h>
#include <string>
#include <conio.h>
#include "Find.h"
using namespace std;
using p::Find;
using p::Sort;
using p::Arr;
int main() {
	setlocale(LC_ALL, "rus");
	int n = 5;//размер массива
	int k = 3;//искомое число
	int* arr = 0;
	Arr a;
	Find b;
	Sort c;
	arr = a.setmemori(arr, n);
	a.setarr(arr, n);//генерирует рандомные числа и заполняет ими массив
	//a.getprarr(arr, n);//убрать если появилось желание посмотреть на массив
	double t1 = clock();
	c.setQuickSort(arr, 0, n - 1);
	double t2 = clock() - t1;//создаем измеритель времени после функции
	cout << t2 / CLOCKS_PER_SEC;//выводим время в секундах
	cout << endl;
	//a.getprarr(arr, n);//убрать если появилось желание посмотреть на массив после сортировки
	double t3 = clock();
	int *p = b.find(arr, k, 0, n);//k это искомое число//0 and n this oblast poiska epta
	double t4 = clock() - t1;//создаем измеритель времени после функции
	cout << t4 / CLOCKS_PER_SEC;//выводим время в секундах
	if (p == NULL) {
		cout << "\nчисло не найдено\n";
	}
	else {
		cout << endl << *p << endl;//выводим искомое число
	}
	_getch();
	return 0;
}