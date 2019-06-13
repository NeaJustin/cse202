/*********************************************
Justin Pulido
Person.cpp
May 9th, 2017
Person.cpp will create a default constructor 
with their name, date and gender. As well as
getting the objects.
*********************************************/

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person() 
{
	name  = "";
	dob = "";
	gender = "";
}

Person::Person(string n, string d, string g)
{
    name = n;
	dob = d;
	gender = g;
}

string Person::get_name()
{
	return name;
}

string Person::get_dob()
{
	return dob;
}

string Person::get_gender()
{
	return gender;
}

void Person::print()
{
	cout << name << ", " << dob << ", " << gender << endl;
}
