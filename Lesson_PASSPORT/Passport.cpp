#include "Passport.h"

Passport::Passport () {}

Passport::Passport(string _name, string _series, int _number,
	string _issued, string _adress) : name(_name), series(_series), 
number(_number), issued(_issued), adress(_adress) {}

Passport::~Passport () {}


void Passport::print() {
	cout << "ПІБ:               " << name << endl;
	cout << "Серія:             " << series << endl;
	cout << "Номер:             " << number << endl;
	cout << "Ким виданий:       " << issued << endl;
	cout << "Місце проживання:  " << adress << endl;
}

