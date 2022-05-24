#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
#include<time.h>;
using namespace std;
//Конструкторы
Student::Student() {}
Student::Student(Human person, int Group, string Specialization) {
	this->person = person;
	this->Group = Group;
	this->Specialization = Specialization;
}
Student::Student(Human person, int Group, string Specialization, const int studentMarkCount, const int* studentMarks) {
	this->person = person;
	this->Group = Group;
	this->Specialization = Specialization;
	marks = new int[studentMarkCount];
	for (int i = 0; i < studentMarkCount; i++) {
		marks[i] = studentMarks[i];
	}
	countMarks = studentMarkCount;
}
//Деструктор
Student::~Student()
{
	if (marks != nullptr)
		delete[]marks;
}

//ввод
void Student::setNameStud(string name) {
	person.setName(name);
}
void Student::setGroup(int group) {
	Group = group;
}
void Student::setSpecialization(string specialization) {
	Specialization = specialization;
}
void Student::setSurnameStud(string surname) {
	person.setSurname(surname);
}
void Student::setPatronamicStud(string patronamic) {
	person.setPatronamic(patronamic);
}
void Student::set_countMarks(int count)
{
	if (marks != nullptr)
		delete[]marks;
	marks = new int[count];
	countMarks = count;
}
void Student::set_marks(int mark, int pos)
{
	if (mark > 12 || mark < 0)
		mark = 0;
	marks[pos] = mark;
}
//вывод
string Student::getNameStud() {
	return person.getName();
}
int Student::getGroup() {
	return Group;
}
string Student::getSpecialization() {
	return Specialization;
}
string Student::getSurnameStud() {
	return person.getSurname();
}
string Student::getPatronamicStud() {
	return person.getPatronamic();
}
void Student::fullStud() {
	cout << "Информация о студенте:\nИмя: " << getNameStud() << endl;
	cout << "Фамилия: " << getSurnameStud() << endl;
	cout << "Отчество: " << getPatronamicStud() << endl;
	cout << "Специальность: " << getSpecialization() << endl;
	cout << "Группа: " << getGroup() << endl;
	cout << "Оценки: ";
		for (int i = 0; i < countMarks; i++) {
		cout << marks[i] << ", ";
	}
	cout << "\b\b.";
}
	




