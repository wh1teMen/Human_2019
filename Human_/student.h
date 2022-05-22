#pragma once
#include<iostream>
#include<string>
#include"human.h"
using namespace std;


class Student {
public:
	//пустой конструктор
	Student();
	//конструктор с заполнением
	Student(string name, int Group, string Specialization);


	void SetNameStud(string name);
	string GetNameStud();
	void SetGroup(int group);
	int GetGroup();
	void SetSpecialization(string specialization);
	string GetSpecialization();
	void FullStud();
	void SetSurnameStud(string surname);
	string GetSurnameStud();
	

	

private:
	string name;
	Human surnameStud;
	int Group;
	string Specialization;
	


};
