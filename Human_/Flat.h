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
	int getHouseNumber()const;
	string getStritName()const;
	double getAreaFlat()const;
	int getNumberFlat()const;
	double getMinAreaFlat()const;
	int getcountHumans()const;
	Human gethumans(int index)const;
	void flatFull();
	

private:
	int HousNumber;
	string StritName;
	double AreaFlat;
	int NumberFlat;
	int countHumans = 0;
	Human* humans = nullptr;

};
