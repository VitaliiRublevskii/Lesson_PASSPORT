#pragma once
#include <string>
#include <iostream>

using namespace std;

class Passport
{
	string name = "";
	string series = "AK";
	int number = 000001;
	string issued = "UMVS";
	string adress = "";
public:

	Passport();
	Passport(string, string, int, string, string);
	~Passport();

	void print();



};

