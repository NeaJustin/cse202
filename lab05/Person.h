//Justin Pulido
//Person.h
//May 3, 2017
//class of person holds name, date of birth and gender

#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
protected:
	string name;
	string dob;
	string gender;
public:
	Person();
	Person(string n, string d, string g);
	string get_name();
	string get_dob();
	string get_gender();
	virtual void print();
};

#endif
