#pragma once
#include "Passport.h"
#include <string>
#include <iostream>

using namespace std;

class InterPassport : public Passport
{
	string engName = "";
	int number = 000001;
	string intIssued = "1212";
	int countVisa = 0;
	string visa = "";
	
public:

	InterPassport();
	InterPassport(string, int, string,  int, string);
	~InterPassport();

	void print(Passport&);
};

