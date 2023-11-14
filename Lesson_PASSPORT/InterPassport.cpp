#include "InterPassport.h"
#include "Passport.h"


InterPassport::InterPassport() {}
InterPassport::InterPassport(string _engName, int _number,
	string _intIssued,  int _countVisa, string _visa) : engName(_engName), number(_number),
	intIssued(_intIssued), countVisa(_countVisa), visa(_visa) 
{
	//string* visa = new string[_countVisa];
	//for (int i = 0; i < _countVisa; i++)
	//	visa[i] = _visa[i];
}

InterPassport::~InterPassport() {
	
}

void InterPassport::print(Passport& pass) {
	pass.print();
	cout << "Name:              " << engName << endl;
	cout << "Number passport:   " << number << endl;
	cout << "Issued:            " << intIssued << endl;
	cout << "Visa:              " << visa << endl;
}