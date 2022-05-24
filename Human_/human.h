#pragma once
#include<iostream>
#include<string>
#include <ctime>

using namespace std;
class Human {
public:
	//Конструкторы
	Human();
	Human(int age, string name, string surname, string patronamic);
	Human(int age,string name, string surname, string patronamic,int day,int mon,int year);
	//ввод 
	void setAge(int Age);
	void setName(string Name);
	void setSurname(string Surname);
	void setPatronamic(string Patronamic);
	void set_birthday(int day, int month, int year);
	
	//вывод
	int getAge();
	string getName()const;
	string getSurname();
	string getPatronamic();
	string Fullname();
	void full_info_person();
	string getbirthday();
	void birhaday();


private:
	int age;
	string name;
	string surname;
	string patronamic;
	tm birthday{0};

};
