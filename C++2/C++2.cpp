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


	//void Print()
	//{
	//	cout << endl << endl << "Фамилия: " << name <<  endl; /*"\nИмя: " << last_name << "\nОтчество: " << middle_name << "\nПол" << pol << "\nНациональность: " << national <<
	//		"\nРост: " << height << "\nВес: " << weight << "\nНомер телефона: " << phone_number << "\nДата рождения: "
	//		<< date[0] << "." << date[1] << "." << date[2] << "\nДомашний адрес: " << "\nПочтовый индекс: " << adress.post_index << "\nСтрана: " << adress.country <<
	//		"\nОбласть: " << adress.oblast << "\nРайон: " << adress.raqon << "\nГород: " << adress.city << "\nУлица: " << adress.street
	//		<< "\nНомер дома: " << adress.house << "\nНомер квартиры: " << adress.flat << "\nИмя школы: " << school << "\nКласс: " <<
	//		clas <<*/
	//}
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

void data_input2(Shkolota* shkolota, int n, int a)
{
	for (int i = n; i < n + a; i++)
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

void sort_name(Shkolota* shkolota, int n, int a)
{
	for (int i = 0; i < n + a; i++)
	{
		for (int j = i + 1; j < n + a; j++)
		{
			if (strcmp(shkolota[i].name.c_str(), shkolota[j].name.c_str()) > 0)
			{
				swap(shkolota[i], shkolota[j]);
			}
		}
	}
}

void sort_date(Shkolota* shkolota, int n, int a)
{
	for (int i = 0; i < n+a; i++)
	{
		for (int j = i + 1; j < n+a; j++)
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

void Poisk(Shkolota* shkolota, int n, int a)
{
	string q;
	cout << "Введите фамилию для поиска студента(ов): ";
	cin >> q;
	int proverca = 0;
	for (int i = 0; i < n+a; i++)
	{
		if (shkolota[i].name == q)
		{
			cout << endl << endl << "Фамилия: " << shkolota[i].name << "\nИмя: " << shkolota[i].last_name << "\nОтчество: " << shkolota[i].middle_name << "\nПол" << shkolota[i].pol << "\nНациональность: " << shkolota[i].national <<
					"\nРост: " << shkolota[i].height << "\nВес: " << shkolota[i].weight << "\nНомер телефона: " << shkolota[i].phone_number << "\nДата рождения: "
					<< shkolota[i].date[0] << "." << shkolota[i].date[1] << "." << shkolota[i].date[2] << "\nДомашний адрес: " << "\nПочтовый индекс: " << shkolota[i].adress.post_index << "\nСтрана: " << shkolota[i].adress.country <<
					"\nОбласть: " << shkolota[i].adress.oblast << "\nРайон: " << shkolota[i].adress.raqon << "\nГород: " << shkolota[i].adress.city << "\nУлица: " << shkolota[i].adress.street
					<< "\nНомер дома: " << shkolota[i].adress.house << "\nНомер квартиры: " << shkolota[i].adress.flat << "\nИмя школы: " << shkolota[i].school << "\nКласс: " <<
					shkolota[i].clas << endl;
			++proverca;
		}		
	}
	if (proverca == 0)
	{
		cout << "/nТакого студента нет!!!/n";
	}
	
	
}

void Print(Shkolota* shkolota, int a, int n)
{
	for (int i = 0; i < a + n; i++)
	{
		/*shkolota[i].Print();*/
		cout << endl << endl << "Фамилия: " << shkolota[i].name /*<< "\nИмя: " << shkolota[i].last_name << "\nОтчество: " << shkolota[i].middle_name << "\nПол" << shkolota[i].pol << "\nНациональность: " << shkolota[i].national <<
					"\nРост: " << shkolota[i].height << "\nВес: " << shkolota[i].weight << "\nНомер телефона: " << shkolota[i].phone_number << "\nДата рождения: "
					<< shkolota[i].date[0] << "." << shkolota[i].date[1] << "." << shkolota[i].date[2] << "\nДомашний адрес: " << "\nПочтовый индекс: " << shkolota[i].adress.post_index << "\nСтрана: " << shkolota[i].adress.country <<
					"\nОбласть: " << shkolota[i].adress.oblast << "\nРайон: " << shkolota[i].adress.raqon << "\nГород: " << shkolota[i].adress.city << "\nУлица: " << shkolota[i].adress.street
					<< "\nНомер дома: " << shkolota[i].adress.house << "\nНомер квартиры: " << shkolota[i].adress.flat << "\nИмя школы: " << shkolota[i].school << "\nКласс: " <<
					shkolota[i].clas*/ << endl;
	}
}

void dopolnenie(Shkolota* shkolota, int n)
{
tryago:
	int  a, t;
	cout << "Введите кодичество студентов которое вы хотите добавить: ";
	cin >> a;
	cout << "/nВведите данніе студента(ов). ";

	Shkolota* shkolota2 = new Shkolota[n + a];
	for (int i = 0; i < n; i++)
	{
		shkolota2[i] = shkolota[i];
	}
	delete[] shkolota;
	shkolota = new Shkolota[a + n];
	for (int i = 0; i < n; i++)
	{
		shkolota[i] = shkolota2[i];
	}
	data_input2(shkolota, n, a);
	/*Print(shkolota, a, n);*/
tryAgo://Все остальные GOTO возвращают в эту точку
	cout << "\n1 - Сортировка по фамилии;\n2 - Сортировка по дате;\n3 - Добавить элементы;\n4 - Поиск конкретного студента;\n5 - Вывод данных;\n0 - Bыйти;\nВыбор - ";
	cin >> t;
	switch (t)
	{
	case 1:
		sort_name(shkolota, n, a);
		goto tryAgo;
	case 2:
		//sort_date(shkolota, n, a);
		goto tryAgo;
	case 3:
		dopolnenie(shkolota, n);
		goto tryago; //Возвращает в начало этой функции
	case 4:
		Poisk(shkolota, n, a);
		goto tryAgo;
	case 5:
		Print(shkolota, a, n);
		goto tryAgo;
	default:
		break;
	}

}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0, t = 0, a = 0;
	cout << "Сколько будет студентов!\n";
	cin >> n;

	Shkolota* shkolota = new Shkolota[n];
	data_input(shkolota, n);

tryAgo:
	cout << "\n1 - Сортировка по фамилии;\n2 - Сортировка по дате;\n3 - Добавить элементы;\n4 - Поиск конкретного студента;\n5 - Вывод данных;\n0 - Bыйти;\nВыбор - ";
	cin >> t;
	switch (t)
	{
	case 1:
		sort_name(shkolota, n, a);
		goto tryAgo;
	case 2:
		//sort_date(shkolota, n, a);
		goto tryAgo;
	case 3:
		dopolnenie(shkolota, n);
		break;
	case 4:
		Poisk(shkolota, n, a);
		goto tryAgo;
	case 5:
		Print(shkolota, a, n);
		goto tryAgo;
	default:
		break;
	}

	delete[] shkolota;
	system("pause");
	return 0;
}