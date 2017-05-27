#include <iostream>
#include <fstream>
using namespace std;

int n = 0; // счётчик студентов
struct STUDENT // структура STUDENT
{
	char name[255];
	int group;
	float ses[5];
};
const int students = 2; // количество сеудентов
STUDENT studen[students]; // массив
class Tools
{
public:
	static void typing()
	{
		for (int i = 0; i < students; i++)  // ввод информации
		{
			cout << "Введите фамилию студента " << endl;
			cin.ignore();
			cin.getline(studen[n].name,255);
			cout << "Введите номер группы " << endl;
			cin >> studen[n].group;
			cout << "Введите 5 оценок " << endl;
			for (int i = 0; i < 5; i++)
				cin >> studen[n].ses[i];
			n++;
		}
	}
	static void toFile()
	{
		ofstream file("bd.txt");
		n = 0;
		for (int i = 0; i < students; i++)  // запись информации
		{
			file << studen[n].name << endl;
			file << studen[n].group << endl;
			for (int i = 0; i < 5; i++)
				file << studen[n].ses[i] << endl;
			n++;
		}
		file.close();
	}
	static void read()
	{
		ifstream file("bd.txt");
		n = 0;
		for (int i = 0; i < n; i++)  // чтение информации
		{
			file >> studen[n].name;
			file >> studen[n].group;
			for (int i = 0; i < 5; i++)
				file >> studen[n].ses[i];
			n++;
		}
		file.close();
	}
	static void print()
	{
		int count = 0; // счётчик студентов с плохими отметками 
					   // усли он равен количеству студентов значит  
					   // хорошистов нет

		bool two = false; // поиск студента с 2
		for (int i = 0; i < students; i++)
		{
			for (int j = 0; j < students; j++)
				if (studen[i].ses[j] == 2)
					two = true;

			if (two) // условие двоишника
			{
				cout << studen[i].name << endl;
				cout << studen[i].group << endl;
			}
			else
				count++;

			two = false;
		}
		if (count == students)
			cout << "Такие студенты отсутствуют " << endl;
	}
	static void sorting()
	{
		char temp[255];
		for (int i = 0; i<students; i++)
		{
			for (int j = i; j<students; ++j)
				if (strcmp(studen[j].name, studen[i].name)<0)
				{
					strcpy_s(temp, studen[i].name);
					strcpy_s(studen[i].name, studen[j].name);
					strcpy_s(studen[j].name, temp);
				}
		}
	}
};

int main()
{
	setlocale(0, "rus");
	Tools::typing();
	Tools::toFile();
	Tools::read();
	Tools::print();
	Tools::sorting();
	Tools::toFile();
	system("Pause");
	return 0;
}
