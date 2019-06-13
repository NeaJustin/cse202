/************************************************************
Justin Pulido
main.cpp
May 3, 2017
the program will grab the vector of persons and hold them 
in a new variable. it will grab the type of the person
depending on if they are an instructor or a student and relay
the information. 
************************************************************/
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<Person *> gender(4); // vector pointing to gender because its 2017 
								// we cannot assume gender.
	//normal assignment of the same types: pointer of base class
	gender[0] = new Person("Precious", "4/20/20", "M");

	// Pointer of a derived class assigned to a pointer of base class
	gender[1] = new Student("Ali", "5/10/80", "F", "CS");

	// More Examples! YAY!!!!!!!!!!!!
	gender[2] = new Instructor("Bob", "2/14/88", "M", 75000);
	gender[3] = new Instructor("Princess", "1/1/11", "F", 57000);

	for (int i = 0; i < gender.size(); i++)
		gender[i]->print(); // dynamically (at run time) the correct print() is called

	Person T = *(gender[3]); //sliced off Professor
	T.print();

	//clean up everyone clean up
	for (int i = 0; i < gender.size(); i++)
		delete gender[i];

	return 0;
}

