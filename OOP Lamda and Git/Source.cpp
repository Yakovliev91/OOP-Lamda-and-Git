#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Auto{
	string name;
	int year;
	float price;
	float volume;
public:
	Auto():name(""),year(0),price(0),volume(0){}
	Auto(const Auto& copy):name(copy.name),year(copy.year),price(copy.price),volume(copy.volume){}
	Auto(string _name, int _year, float _price, float _volume) {
		name = _name;
		year = _year;
		price = _price;
		volume = _volume;
	}

	
string GetName()
{
	return name;
}

int GetYear()
{
	return year;
}

float GetPrice()
{
	return price;
}

float GetVolume()
{
	return volume;
}
};

class CarShowroom {
	vector<Auto>c;
public:
	void AddInfo(vector<Auto> &c) {
		cout << "Add car" << endl;
		string name;
		int year;
		double volume;
		double price;

		cout << "Enter name of car" << endl;
		cin >> name;
		cout << "Enter year of car manufacture :" << endl;
		cin >> year;
		cout << "Enter volume of engine :" << endl;
		cin >> volume;
		cout << "Enter price of car :" << endl;
		cin >> price;

		c.push_back(Auto(name, year, volume, price));
	}

	void ShowCars(vector<Auto> &c) {
		cout << "Information about cars" << endl;
		if (c.empty())
		{
			cout << "No cars" << endl;
		}
		vector<Auto>::iterator it = c.begin();
		for (vector<Auto>::iterator it = c.begin(); it != c.end(); ++it) {
			cout << "Name of car :" << it->GetName() << endl;
			cout << "Year of car manufacture:" << it->GetYear() << endl;
			cout << "Volume of engine :" << it->GetVolume() << endl;
			cout << "Price of car" << it->GetPrice() << endl;
		}
		it++;
	}
};

int main() {
	CarShowroom car;
	vector<Auto>c;
	car.AddInfo(c);
	car.ShowCars(c);

	system("pause");
	return 0;
}