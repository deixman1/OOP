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
	int n = 5;//������ �������
	int k = 3;//������� �����
	int* arr = 0;
	Arr a;
	Find b;
	Sort c;
	arr = a.setmemori(arr, n);
	a.setarr(arr, n);//���������� ��������� ����� � ��������� ��� ������
	//a.getprarr(arr, n);//������ ���� ��������� ������� ���������� �� ������
	double t1 = clock();
	c.setQuickSort(arr, 0, n - 1);
	double t2 = clock() - t1;//������� ���������� ������� ����� �������
	cout << t2 / CLOCKS_PER_SEC;//������� ����� � ��������
	cout << endl;
	//a.getprarr(arr, n);//������ ���� ��������� ������� ���������� �� ������ ����� ����������
	double t3 = clock();
	int *p = b.find(arr, k, 0, n);//k ��� ������� �����//0 and n this oblast poiska epta
	double t4 = clock() - t1;//������� ���������� ������� ����� �������
	cout << t4 / CLOCKS_PER_SEC;//������� ����� � ��������
	if (p == NULL) {
		cout << "\n����� �� �������\n";
	}
	else {
		cout << endl << *p << endl;//������� ������� �����
	}
	_getch();
	return 0;
}