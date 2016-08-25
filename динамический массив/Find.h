#pragma once
namespace p
{
	typedef unsigned int ui;
	class Find
	{
	private:
		int* arr;
	public:
		Find(void);
		void setarr(int* arr, ui n);
		~Find(void);
	};
	class Sort :public Find
	{
	private:
	public:
		Sort(void);

		~Sort(void);
	};
}