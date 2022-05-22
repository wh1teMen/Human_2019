#include<iostream>
#include<string>
#include"human.h"
#include"student.h"
#include"Flat.h"
using namespace std;





int main() {
	system("chcp 1251>nul");
	Human first;
	Human two(21, "Alesha", "ivanov", "ivanovich");
	Human men3(30, "Alexandr", "Belov", "Sergeevich");
	//cout << two.Fullname();
	//cout << men3.Fullname();
	//men3.Full_info_person();


	//#########################################################
	
	Student firstStud("oleg",123,"da");
	//firstStud.FullStud();
	Student twoStud("Alexandr", 1234, "programmer");
	//#########################################################
	//firstStud.FullStud();
	//cout << twoStud.GetNameStud();
	//twoStud.FullStud();

	//#########################################################
	Flat one(17, 191, "Ленина", 63.2);
	twoStud.FullStud();
	one.Full_Flat();
	cout << one.GetMinAreaFlat();



	system("pause>nul");
	return 0;
}
