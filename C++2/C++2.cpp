#include<iostream>
#include<string>
#include <Windows.h>
#include <string>

using namespace std;

struct Shkolota
{
	string name;
	string last_name;
	string middle_name;
	string pol;
	string national;
	float height;
	float weight;
	int phone_number;
	int date[3];
	struct Adress
	{
		int post_index;
		string country;
		string oblast;
		string raqon;
		string city;
		string street;
		int house;
		int flat;
	}adress;
	string school;
	string clas;
	

	void Print()
	{
		cout << endl << endl << "Фамилия: " << name << "\nИмя: " << last_name << "\nОтчество: " << middle_name << "\nПол" << pol << "\nНациональность: " << national <<
			"\nРост: " << height << "\nВес: " << weight << "\nНомер телефона: " << phone_number << "\nДата рождения: "
			<< date[0] << "." << date[1] << "." << date[2] << "\nДомашний адрес: " << "\nПочтовый индекс: " << adress.post_index << "\nСтрана: " << adress.country <<
			"\nОбласть: " << adress.oblast << "\nРайон: " << adress.raqon << "\nГород: " << adress.city << "\nУлица: " << adress.street
			<< "\nНомер дома: " << adress.house << "\nНомер квартиры: " << adress.flat << "\nИмя школы: " << school << "\nКласс: " <<
			clas << endl;
	}
};

void data_input(Shkolota* shkolota, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Фамилия: ";
		cin >> shkolota[i].name;

		cout << "\nИмя: ";
		cin >> shkolota[i].last_name;

		cout << "\nОтчество: ";
		cin >> shkolota[i].middle_name;

		cout << "\nНациональность: ";
		cin >> shkolota[i].national;

		cout << "\nРост: ";
		cin >> shkolota[i].height;

		cout << "\nВес: ";
		cin >> shkolota[i].weight;

		cout << "\nНомер телефона: ";
		cin >> shkolota[i].phone_number;

		cout << "\nДата рождения: ";
		do
		{
			cout << "\nДень:  ";
			cin >> shkolota[i].date[0];
		} while (shkolota[i].date[0] > 30);
		do
		{
			cout << "\nМесяц: ";
			cin >> shkolota[i].date[1];
		} while (shkolota[i].date[1] > 12);

		do
		{
			cout << "\nГод: ";
			cin >> shkolota[i].date[2];
		} while (shkolota[i].date[2] > 2019);

		cout << "\nПочтовый индекс: ";
		cin >> shkolota[i].adress.post_index;

		cout << "\nСтрана: ";
		cin >> shkolota[i].adress.country;

		cout << "\nОбласть: ";
		cin >> shkolota[i].adress.oblast;

		cout << "\nРайон: ";
		cin >> shkolota[i].adress.raqon;

		cout << "\nГород: ";
		cin >> shkolota[i].adress.city;

		cout << "\nУлица: ";
		cin >> shkolota[i].adress.street;

		cout << "\nНомер дома: ";
		cin >> shkolota[i].adress.house;

		cout << "\nНомер квартиры: ";
		cin >> shkolota[i].adress.flat;

		cout << "\nШкола ";
		cin >> shkolota[i].school;

		cout << "\nКласс ";
		cin >> shkolota[i].clas;
	}
}

void sort_name(Shkolota* shkolota, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(shkolota[i].last_name.c_str(), shkolota[j].last_name.c_str()) > 0)
			{
				swap(shkolota[i], shkolota[j]);
			}
		}
	}
}

void sort_date(Shkolota* shkolota, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int temp1 = shkolota[i].date[0] + (shkolota[i].date[1] * 30) + (shkolota[i].date[2] * 365);
			int temp2 = shkolota[j].date[0] + (shkolota[j].date[1] * 30) + (shkolota[j].date[2] * 365);
			if (temp1 < temp2)
			{
				swap(shkolota[i], shkolota[j]);
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0, a = 0;
	cout << "Please enter quality students!\n";
	cin >> n;

	Shkolota* shkolota = new Shkolota[n];
	data_input(shkolota, n);

	cout << "\n1 - Сортировка по имени\n2 - Сортировка по дате\n0 - Bыйти";
	cin >> a;
	switch (a)
	{
	case 1:
		sort_name(shkolota, n);
		break;
	case 2:
		sort_date(shkolota, n);
		break;
	default:
		break;
	}

	for (int i = 0; i < n; i++)
	{
		shkolota[i].Print();
	}

	delete[] shkolota;
	system("pause");
	return 0;
}