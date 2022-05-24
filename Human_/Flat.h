#pragma once

#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
using namespace std;

class Flat {
public:
	//Конструкторы
	Flat(); 
	Flat(int HouseNumber, int NumberFlat, string StritName, double AreaFlat,int countHumans,Human*Humans); 
	//Деструктор
	~Flat();
	//Ввод
	void setHousNumber(int HouseNumber); 
	void setStritName(string StritName);
	void setAreaFlat(double AreaFlat);
	void setNumberFlat(int NumberFlat);
	void setcountHumans(int count);
	void sethumans(Human human, int index);
	
	//Вывод
	int getHouseNumber(); 
	string getStritName(); 
	double getAreaFlat(); 
	int getNumberFlat(); 
	double getMinAreaFlat(); 
	int getcountHumans();
	Human gethumans(int index);
	void flatFull();
	

private:
	int HousNumber;
	string StritName;
	double AreaFlat;
	int NumberFlat;
	int countHumans = 0;
	Human* humans = nullptr;

};
