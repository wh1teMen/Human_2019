#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
#include<time.h>;
using namespace std;
void Student::SetNameStud(string name) {
	person.SetName(name);
}
string Student::GetNameStud() {
	return person.GetName();
}
//ввод группы
void Student::SetGroup(int group) {
	Group = group;
}
//вывод группы
int Student::GetGroup() {
	return Group;
}
//ввод специализации
void Student::SetSpecialization(string specialization) {
	Specialization = specialization;
}
//вывод специализации
string Student::GetSpecialization() {
	return Specialization;
}
//Полная информация о студенте
void Student::FullStud() {
	cout << "Информация о студенте:\nИмя: " <<	GetNameStud()<< endl;
	cout << "Фамилия: " << GetSurnameStud() << endl;
	cout << "Отчество: " << GetPatronamicStud() << endl;
	cout << "Специальность: " << GetSpecialization() << endl;
	cout << "Группа: " << GetGroup() << endl;
}
//Фамилия студента
void Student::SetSurnameStud(string surname) {
	person.SetSurname(surname);
}
string Student::GetSurnameStud() {
	return person.GetSurname();
}
//отчество студента
void Student::SetPatronamicStud(string patronamic) {
	person.SetPatronamic(patronamic);
}
string Student::GetPatronamicStud() {
	return person.GetPatronamic();
}
//пустой конструктор
Student::Student() {}

//конструктор с заполнением
Student::Student(Human person, int Group, string Specialization) {
	this->person = person;
	this->Group = Group;
	this->Specialization = Specialization;

	
	
}

