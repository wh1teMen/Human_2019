#include<iostream>
#include<string>
#include"human.h"
using namespace std;
//Human
//ввод возраста
void Human::SetAge(int Age) {
	this->Age = Age;
}
//вывод возраста
int Human::GetAge() {
	return Age;
}
//ввод имени
void Human::SetName(string Name) {
	this->Name = Name;
}
//вывод имени
string Human::GetName()const {
	return Name;
}
//ввод Фамилии
void Human::SetSurname(string Surname) {
	this->Surname = Surname;
}
//вывод фамилии
string Human::GetSurname() {
	return Surname;
}
//ввод Отчества
void Human::SetPatronamic(string Patronamic) {
	this->Patronamic = Patronamic;
}
//вывод отчества
string Human::GetPatronamic() {
	return Patronamic;
}
//вывод полного имени
string Human::Fullname() {
	string str;
	str = Surname + " " + Name + " " + Patronamic + "\n";
	return str;
}
void Human::Full_info_person() {
	cout << "Возраст: " << GetAge()<<endl;
	cout << "Имя: " << GetName() << endl;
	cout << "Фамилия: " << GetSurname()<<endl;
	cout << "Отчество: " << GetPatronamic()<<endl;
}