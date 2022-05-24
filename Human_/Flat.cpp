#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
#include "Flat.h"
using namespace std;
//Конструкторы
Flat::Flat() {}
Flat::Flat(int HouseNumber, int NumberFlat, string StritName, double AreaFlat, int countHumans, Human* Humans) {
	this->HousNumber = HouseNumber;
	this->StritName = StritName;
	this->AreaFlat = AreaFlat;
	this->NumberFlat = NumberFlat;
	humans = new Human[countHumans];
	for (int i = 0; i < countHumans; i++) {
		humans[i] = Humans[i];
	}
	this->countHumans = countHumans;
}
//Деструктор
Flat::~Flat()
{
	if (humans != nullptr)
		delete[]humans;
}
//Ввод
void Flat:: setHousNumber(int HouseNumber) {
	this->HousNumber = HouseNumber;
}
void Flat::setStritName(string StritName) {
	this->StritName = StritName;
}
void Flat::setAreaFlat(double AreaFlat) {
	this->AreaFlat = AreaFlat;
}
void Flat::setNumberFlat(int NumberFlat) {
	this->NumberFlat = NumberFlat;
}
void Flat::setcountHumans(int count)
{
	if (humans != nullptr)
	{
		Human* tmp = new Human[countHumans];
		for (int i = 0; i < countHumans; i++)
		{
			tmp[i] = humans[i];
		}
		delete[]humans;
		humans = new Human[count];
		for (int i = 0; i < countHumans; i++)
		{
			humans[i] = tmp[i];
		}
		delete[]tmp;
		tmp = humans;
	}
	else
		humans = new Human[count];
	countHumans = count;
}
void Flat:: sethumans(Human human, int index)
{
	humans[index] = human;
}

//Вывод
int Flat::getHouseNumber() {
	return HousNumber;
}
string Flat:: getStritName() {
	return StritName;
}
double Flat:: getAreaFlat() {
	return AreaFlat;
}
int Flat:: getNumberFlat() {
	return NumberFlat;
}
double Flat:: getMinAreaFlat() {
	return getAreaFlat() / 18;

}
int Flat::getcountHumans()
{
	return countHumans;
}
Human Flat:: gethumans(int index)
{
	return humans[index];
}
void Flat::flatFull()
{
	cout << "Улица: " << getStritName() << std::endl;
	cout << "Номер дома:" << getHouseNumber() << std::endl;
	cout << "Площадь квартиры: " << getAreaFlat() << std::endl;
	cout << "Количество человек:" << getcountHumans() << endl;
	if(getcountHumans()==1)
		cout << "Минимальная площадь: 33" << endl;
	if (getcountHumans() >3)
		cout << "Минимальная площадь: 18" << endl;
	if (getcountHumans() ==2)
		cout << "Минимальная площадь: 42" << endl;
}
