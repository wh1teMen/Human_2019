#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
#include<time.h>;
using namespace std;
void Student::SetNameStud(string name) {
	this->name = name;
}
string Student::GetNameStud() {
	return name;
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
void Student::FullStud() {
	cout << "Имя студента: " << GetNameStud() << endl;
	//cout << "Фамилия Студента: " << GetSurnameStud() << endl;
	cout << "Специальность: " << GetSpecialization() << endl;
	cout << "Группа: " << GetGroup() << endl;
}
void Student::SetSurnameStud(string surname) {
	surnameStud.SetSurname(surname);
}
string Student::GetSurnameStud() {
	return surnameStud.GetSurname();
}
//пустой конструктор
Student::Student() {}
//конструктор с заполнением
Student::Student(string name, int Group, string Specialization) {
	this->name = name;
	this->Group = Group;
	this->Specialization = Specialization;
	
	
}

