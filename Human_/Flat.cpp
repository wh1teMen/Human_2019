#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
#include "Flat.h"
using namespace std;
Flat::Flat() {};
Flat::Flat(int HouseNumber, int NumberFlat, string StritName, double AreaFlat) {
	this->HousNumber = HouseNumber;
	this->StritName = StritName;
	this->AreaFlat = AreaFlat;
	this->NumberFlat = NumberFlat;
}
void Flat:: SetHousNumber(int HouseNumber) {
	this->HousNumber = HouseNumber;
}
int Flat::GetHouseNumber() {
	return HousNumber;
}
void Flat:: SetStritName(string StritName) {
	this->StritName = StritName;
}
string Flat:: GetStritName() {
	return StritName;
}
void Flat:: SetAreaFlat(double AreaFlat) {
	this->AreaFlat = AreaFlat;
}
double Flat:: GetAreaFlat() {
	return AreaFlat;
}
void Flat:: SetNumberFlat(int NumberFlat) {
	this->NumberFlat = NumberFlat;
}
int Flat:: GetNumberFlat() {
	return NumberFlat;
}
void Flat::Full_Flat() {
	cout << "Название улицы: " << GetStritName()<<endl;
	cout << "Номер дома: " << GetHouseNumber()<<endl;
	cout << "Номер квартиры: " << GetNumberFlat()<<endl;
	cout << "Площадь квартиры: " << GetAreaFlat()<<endl;
}
double Flat:: GetMinAreaFlat() {
	return GetAreaFlat() / 18;

}