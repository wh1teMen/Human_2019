#include<iostream>
#include<string>
#include"human.h"
#include<Windows.h>
#include <ctime>
using namespace std;
//Human
//������������
Human::Human() {}
Human::Human(string name, string surname, string patronamic, int day, int mon, int year) {
	this->name = name;
	this->surname = surname;
	this->patronamic = patronamic;
	birthday.tm_year = year;
	birthday.tm_mon = mon;
	birthday.tm_mday = day;
}


//���� 
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


//����� 

int Human::getAge()const{
	return yearNow()- birthday.tm_year;
}
string Human::getName()const {
	return name;
}
string Human::getSurname()const{
	return surname;
}
string Human::getPatronamic()const {
	return patronamic;
}
string Human::Fullname() {
	string str;
	str = surname + " " + name + " " + patronamic + "\n";
	return str;
}
void Human::full_info_person() {
	cout << "�������: " << getAge()<<" ����" << endl;
	cout << "���: " << getName() << endl;
	cout << "�������: " << getSurname()<<endl;
	cout << "��������: " << getPatronamic()<<endl;
}
string Human::getbirthday()const{
	return std::to_string(birthday.tm_mday) + "." + std::to_string(birthday.tm_mon) + "." + std::to_string(birthday.tm_year);
}
void Human::birhaday() {
	cout << "���� ��������: " << getbirthday() << endl;
}
int yearNow() {
	SYSTEMTIME st;
	GetLocalTime(&st);
	return st.wYear;
}