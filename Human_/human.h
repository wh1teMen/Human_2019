#pragma once
#include<iostream>
#include<string>
using namespace std;
class Human {
public:
	//пустой конструктор
	Human() {}
	//конструктор с заполнением
	Human(int Age, string Name, string Surname, string Patronamic) {
		this->Age = Age;
		this->Name = Name;
		this->Surname = Surname;
		this->Patronamic = Patronamic;
	}
	//ввод возраста
	void SetAge(int Age);
	int GetAge();
	void SetName(string Name);
	string GetName()const;
	void SetSurname(string Surname);
	string GetSurname();
	void SetPatronamic(string Patronamic);
	string GetPatronamic();
	string Fullname();
	void Full_info_person();

private:
	int Age;
	string Name;
	string Surname;
	string Patronamic;

};
