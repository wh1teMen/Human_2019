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
void Student::FullStud() {
	cout << "��� ��������: " << GetNameStud() << endl;
	cout << "������� ��������: " << GetSurnameStud() << endl;
	cout << "�������������: " << GetSpecialization() << endl;
	cout << "������: " << GetGroup() << endl;
}
void Student::SetSurnameStud(string surname) {
	surnameStud.SetSurname(surname);
}
string Student::GetSurnameStud() {
	return surnameStud.GetSurname();
}
//������ �����������
Student::Student() {}
Student::Student(Human person, int Group, string Specialization)
{
}
//����������� � �����������
Student::Student(Human name, int Group, string Specialization) {
	this->surnameStud = name;
	this->Group = Group;
	this->Specialization = Specialization;

	
	
}

