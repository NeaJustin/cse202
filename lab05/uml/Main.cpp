/**************************************************
Justin Pulido
Main.cpp
May 9th, 2017
the main.cpp creates a vector to hold people and 
calls on the classes to display if they are a 
student, teacher, or just a person.
-The program solves the problem by grabbing the 
constructor of Person, Student, or Instrucor and
outputs it using a pointer to print function.
PERCENT COMPLETED 100%
**************************************************/

#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//declaring the vector and the size.
	vector<Person *> gender(5);
	gender[0] = new Person("Jason", "5, 13, 87" , "M");
	gender[1] = new Student("Stefan", "6, 17, 95", "F", "Comm");
	gender[2] = new Instructor("Matthew", "12, 30, 99", "F", 20000);
	gender[3] = new Instructor("Billy", "1, 01, 96", "M", 40000);
	gender[4] = new Student("Tyler", "2, 02, 95", "M", "Reforming");

	//iterating through a loop to be able to display the people
	for (int i = 0; i < gender.size(); i++)
		gender[i]->print();
	
	Person I = *(gender[1]);
	I.print();

	Person Q = *(gender[0]);
	Q.print();

	//clean up time because everyone loves this
	for (int i = 0; i < gender.size(); i++)
		delete gender[i];

	return 0;
}
