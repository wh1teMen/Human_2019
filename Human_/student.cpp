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
//���� ������
void Student::SetGroup(int group) {
	Group = group;
}
//����� ������
int Student::GetGroup() {
	return Group;
}
//���� �������������
void Student::SetSpecialization(string specialization) {
	Specialization = specialization;
}
//����� �������������
string Student::GetSpecialization() {
	return Specialization;
}
//������ ���������� � ��������
void Student::FullStud() {
	cout << "���������� � ��������:\n���: " <<	GetNameStud()<< endl;
	cout << "�������: " << GetSurnameStud() << endl;
	cout << "��������: " << GetPatronamicStud() << endl;
	cout << "�������������: " << GetSpecialization() << endl;
	cout << "������: " << GetGroup() << endl;
}
//������� ��������
void Student::SetSurnameStud(string surname) {
	person.SetSurname(surname);
}
string Student::GetSurnameStud() {
	return person.GetSurname();
}
//�������� ��������
void Student::SetPatronamicStud(string patronamic) {
	person.SetPatronamic(patronamic);
}
string Student::GetPatronamicStud() {
	return person.GetPatronamic();
}
//������ �����������
Student::Student() {}

//����������� � �����������
Student::Student(Human person, int Group, string Specialization) {
	this->person = person;
	this->Group = Group;
	this->Specialization = Specialization;

	
	
}

