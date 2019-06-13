//Justin Pulido
//Intructor.cpp
//May 3, 2017
//

#include "Instructor.h"
#include <iostream>

using namespace std;

Instructor::Instructor(): Person()
{
	salary = 0;
}

Instructor::Instructor(string n, string d, string g, int s): Person(n, d, g)
{
	salary = s;
}

int Instructor::get_salary()
{
	return salary;
}

void Instructor::print()
{
	if (gender == "M")
		cout << "Mr. ";
	else //assuming gender == "F"
		cout << "Ms. ";
	Person::print();
	cout << " Instructor, Salary: " << salary << endl;
}

