//Justin Pulido
//Student.h
//May 3, 2017
//
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

using namespace std;

class Student: public Person
{
protected:
	string major;
public:
	Student();
	Student(string n, string d, string g, string m);
	string get_major();
	virtual void print();
};

#endif
