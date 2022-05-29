#pragma once
#include<iostream>
#include<string>
#include <ctime>
#include<Windows.h>

using namespace std;
class Human {
public:
	//Конструкторы
	Human();
	Human(string name, string surname, string patronamic,int day,int mon,int year);
	//ввод 
	void setName(string Name);
	void setSurname(string Surname);
	void setPatronamic(string Patronamic);
	void set_birthday(int day, int month, int year);
	
	//вывод
	int getAge()const;
	string getName()const;
	string getSurname()const;
	string getPatronamic()const;
	string getbirthday()const;
	void birhaday();
	string Fullname();
	void full_info_person();
	

private:
	int age;
	string name;
	string surname;
	string patronamic;
	tm birthday{0};

};
int yearNow();