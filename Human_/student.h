#pragma once
#include<iostream>
#include<string>
#include"human.h"
using namespace std;


class Student {
public:
	//конструкторы
	Student();
	Student(Human name, int Group, string Specialization);
	Student(Human name, int Group, string Specialization,const int studentMarkCount,const int*studentMarks);
	//деструктор
	~Student();

	//ввод
	void setNameStud(string name);
	void setGroup(int group);
	void setSpecialization(string specialization);
	void setSurnameStud(string surname);
	void setPatronamicStud(string patronamic);
	void set_marks(int mark, int pos);
	void set_countMarks(int count);
	
	
	
	//вывод
	string getNameStud();
	int getGroup();
	string getSpecialization();
	string getSurnameStud();
	string getPatronamicStud();
	void fullStud();
	void akk();
	

	

private:
	
	Human person;
	int Group;
	string Specialization;
	int* marks=nullptr;
	int countMarks = 0;
	


};


