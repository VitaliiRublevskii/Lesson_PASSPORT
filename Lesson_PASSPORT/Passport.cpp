#include "Passport.h"

Passport::Passport () {}

Passport::Passport(string _name, string _series, int _number,
	string _issued, string _adress) : name(_name), series(_series), 
number(_number), issued(_issued), adress(_adress) {}

Passport::~Passport () {}


void Passport::print() {
	cout << "ϲ�:               " << name << endl;
	cout << "����:             " << series << endl;
	cout << "�����:             " << number << endl;
	cout << "��� �������:       " << issued << endl;
	cout << "̳��� ����������:  " << adress << endl;
}

