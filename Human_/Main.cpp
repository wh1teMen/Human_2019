#include<iostream>
#include <conio.h>
#include<string>
#include"human.h"
#include"student.h"
#include"Flat.h"


using namespace std;
int main() {
	system("chcp 1251>nul");
	system("title �������� ������ �� ��� �1 / ����� ��������� ��������� / ������ ��-111 ");
	Human first;
	Human two( "�������", "������", "��������",23,04,1975);
	Human men3( "���������_", "�����_", "���������_",1,12,1958);
	Human men4("�������", "������", "��������", 14, 12, 1983);
	first.setName("����");
	first.setSurname("�������");
	first.setPatronamic("����������");
	first.set_birthday(17, 2, 1990);
	first.full_info_person();
	first.birhaday();
	cout << endl;
	two.full_info_person();
	cout << endl; 
	men3.full_info_person();
	cout << endl;
	men4.full_info_person();
	men4.birhaday();
	cout << endl;
	//#########################################################
	Student firstStud(men3, 551, "�����", 4, new int[4]{5,6,7,12});
	firstStud.fullStud();
	Student twoStud;
	twoStud.setNameStud("���������");
	twoStud.setSurnameStud("�����");
	twoStud.setPatronamicStud("���������");
	twoStud.setGroup(111);
	twoStud.setSpecialization("����������� ��");
	twoStud.set_countMarks(4);
	twoStud.set_marks(11, 0);
	twoStud.set_marks(12, 1);
	twoStud.set_marks(12, 2);
	twoStud.set_marks(12, 3);
	cout << endl<<endl;
	twoStud.fullStud();
	cout << endl<<endl;
	//#########################################################
	Flat room(17, 313, "������", 74.5,2 , new Human[2]{ men3,men4 });
	room.flatFull();
	cout << endl;
	Flat room2;
	room2.setStritName("��������");
	room2.setAreaFlat(98.4);
	room2.setHousNumber(15);
	room2.setNumberFlat(257);
	room2.setcountHumans(2);
	room2.sethumans(men3,0);
	room2.flatFull();
	first.getAge();

	system("pause>nul");;
	return 0;
}
