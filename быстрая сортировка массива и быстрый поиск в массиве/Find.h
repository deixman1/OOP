#pragma once
namespace p
{
	typedef unsigned int ui;

	class Arr
	{
	private:
	public:
		Arr(void);
		int* setmemori(int* arr, int n);
		void setarr(int* arr,int n);
		void getprarr(int* arr, int n);
		~Arr(void);
	};
	class Find :public Arr
	{
	private:
		
	public:
		Find(void);
		auto find(int* arr, int element, int left, int right) -> decltype(arr);
		~Find(void);
	};
	class Sort :public Find
	{
	private:
	public:
		Sort(void);
		void setQuickSort(int* arr, int l, int r);
		~Sort(void);
	};
}