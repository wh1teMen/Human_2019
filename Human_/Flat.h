#pragma once

#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
using namespace std;

class Flat {
public:
	Flat(); 
	Flat(int HouseNumber, int NumberFlat, string StritName, double AreaFlat); 
	void SetHousNumber(int HouseNumber); 
	int GetHouseNumber(); 
	void SetStritName(string StritName); 
	string GetStritName(); 
	void SetAreaFlat(double AreaFlat);
	double GetAreaFlat(); 
	void SetNumberFlat(int NumberFlat); 
	int GetNumberFlat(); 
	void Full_Flat();
	double GetMinAreaFlat(); 

private:
	int HousNumber;
	string StritName;
	double AreaFlat;
	int NumberFlat;


};
