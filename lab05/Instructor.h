//Justin Pulido 
//Instructor.h
//May 3, 2017
//

#include "Person.h"
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

using namespace std;

class Instructor: public Person
{
protected: 
	int salary;
public:
	Instructor();
	Instructor(string n, string d, string g, int s);
	int get_salary();
	virtual void print();
};

#endif
