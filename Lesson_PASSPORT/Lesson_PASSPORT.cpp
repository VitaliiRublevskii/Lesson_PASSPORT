

#include <iostream>
#include "Passport.h"
#include "InterPassport.h"
#include <Windows.h>


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Passport pass1;
	pass1.print();
	cout << endl << endl;

	Passport pass2("Петренко Роман Сергійович", "AK", 125850,
		"Жовтневим РВ", "Дніпро, вул. Шевченка, 12/4");
	pass2.print();
	cout << endl << endl;
	string visa2 = {"USA", "Canada"};
	InterPassport intPass2("Petrenko Roman Serhijovich", 562488, "1212", 2, visa2);
	intPass2.print(pass2);



}



