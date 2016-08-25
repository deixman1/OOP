#include "Find.h"
#include <iostream>
#include <time.h>
using namespace std;

namespace p
{

	Arr::Arr(void)
	{
	}
	int* Arr::setmemori(int* arrr, int n) {
		arrr = new int[n];
		return arrr;
	}
	void Arr::setarr(int* arr, int n)
	{
		srand(time(NULL));
		for (int i(0); i < n; i++) {
			arr[i] = rand();//в каждую яйчейку записываем i+1 числ
		}
	}
	void Arr::getprarr(int* arr, int n) {
		for (int i(0); i < n; i++) {
			cout << arr[i] << endl;
		}
	}
	auto Arr::find(int* arr, int element, int left, int right) -> decltype(arr)
	{
		int index = (left + right) / 2;
		int middle = arr[index];
		if (left == index) {
			if (arr[left + 1] == element)
				return arr + (left + 1);
			else if (arr[left] == element)
				return arr + (left);
			else
				return NULL;
		}
		if (middle == element)
			return arr + index;
		else if (middle > element)
			find(arr, element, left, index);
		else find(arr, element, index, right);
	}
	void Arr::setQuickSort(int* arr, int l, int r)//создаем функцию сортировки. l принимает левый элемент. r правый.
	{
		int i, j;
		i = l;//i присваиваем левый
		j = r;//j присваеваем правый
		int middle = arr[(i + j) / 2];//находим средний элемент массива и присваиваем middle
		do {
			while (middle > arr[i]) i++;//i переносится в право
			while (middle < arr[j]) j--;//j переносится в лево
			if (i <= j) {//если не выполняется while
				swap(arr[i], arr[j]);//меняем значение переменных
									 //сдвигаем
				i++;
				j--;
			}
		} while (i < j);//i < j выполняется цикл
		if (i < r) Arr::setQuickSort(arr, i, r);//рассматриваем правую часть
		if (j > l) Arr::setQuickSort(arr, l, j);//рассматриваем левую часть
	}
	Arr::~Arr(void)
	{
	}
	Find::Find() :Arr() {};
	
	Find::~Find(void) {};
	Sort::Sort() {};
	Sort::~Sort(void) {};
}