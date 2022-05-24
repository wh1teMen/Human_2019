#include<iostream>
#include<string>
#include"human.h"
using namespace std;
//Human
//Конструкторы
Human::Human() {}
Human::Human(int age, string name, string surname, string patronamic){
	this->age = age;
	this->name = name;
	this->surname = surname;
	this->patronamic = patronamic;
}
Human::Human(int age,string name, string surname, string patronamic, int day, int mon, int year) {
	this->age = age;
	this->name = name;
	this->surname = surname;
	this->patronamic = patronamic;
	birthday.tm_year = year;
	birthday.tm_mon = mon;
	birthday.tm_mday = day;
}


//ввод 
void Human::setAge(int Age) {
	this->age = Age;
}
void Human::setName(string Name) {
	this->name = Name;
}
void Human::setSurname(string Surname) {
	this->surname = Surname;
}
void Human::setPatronamic(string Patronamic) {
	this->patronamic = Patronamic;
}
void Human::set_birthday(int day, int month, int year)
{
	birthday.tm_mday = day;
	birthday.tm_mon = month;
	birthday.tm_year = year;
}


//вывод 
int Human::getAge() {
	return age;
}
string Human::getName()const {
	return name;
}
string Human::getSurname() {
	return surname;
}
string Human::getPatronamic() {
	return patronamic;
}
string Human::Fullname() {
	string str;
	str = surname + " " + name + " " + patronamic + "\n";
	return str;
}
void Human::full_info_person() {
	cout << "Возраст: " << getAge()<<endl;
	cout << "Имя: " << getName() << endl;
	cout << "Фамилия: " << getSurname()<<endl;
	cout << "Отчество: " << getPatronamic()<<endl;
}
string Human::getbirthday()
{
	return std::to_string(birthday.tm_mday) + "." + std::to_string(birthday.tm_mon) + "." + std::to_string(birthday.tm_year);
}
void Human::birhaday() {
	cout << "День рождение: " << getbirthday() << endl;
}