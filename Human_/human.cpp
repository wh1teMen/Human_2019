#include<iostream>
#include<string>
#include"human.h"
using namespace std;
//Human
//���� ��������
void Human::SetAge(int Age) {
	this->Age = Age;
}
//����� ��������
int Human::GetAge() {
	return Age;
}
//���� �����
void Human::SetName(string Name) {
	this->Name = Name;
}
//����� �����
string Human::GetName()const {
	return Name;
}
//���� �������
void Human::SetSurname(string Surname) {
	this->Surname = Surname;
}
//����� �������
string Human::GetSurname() {
	return Surname;
}
//���� ��������
void Human::SetPatronamic(string Patronamic) {
	this->Patronamic = Patronamic;
}
//����� ��������
string Human::GetPatronamic() {
	return Patronamic;
}
//����� ������� �����
string Human::Fullname() {
	string str;
	str = Surname + " " + Name + " " + Patronamic + "\n";
	return str;
}
void Human::Full_info_person() {
	cout << "�������: " << GetAge()<<endl;
	cout << "���: " << GetName() << endl;
	cout << "�������: " << GetSurname()<<endl;
	cout << "��������: " << GetPatronamic()<<endl;
}