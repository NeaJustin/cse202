/*************************************************
Justin Pulido
Student.cpp
May 9th, 2017
class student.cpp is a derived class and it is 
returning the major of the person.
*************************************************/

#include "Student.h"
#include <string>
#include <iostream>

using namespace std;

Student::Student(): Person()
{
	major = "";
}

Student::Student(string n, string d, string g, string m): Person(n, d, g)
{
	major = m;
}

string Student::get_major()
{
	return major;
}

void Student::print()
{
	Person::print();
	cout << " Student, Major: " << major << endl;
}

