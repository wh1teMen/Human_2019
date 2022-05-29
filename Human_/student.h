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
	string getNameStud()const;
	int getGroup()const;
	string getSpecialization()const;
	string getSurnameStud()const;
	string getPatronamicStud()const;
	void fullStud();
	
	

	

private:
	
	Human person;
	int Group;
	string Specialization;
	int* marks=nullptr;
	int countMarks = 0;
	


};


