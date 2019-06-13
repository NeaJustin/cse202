//Justin Pulido
//Instructor.cpp
//March 10, 2017
//the instructor class gets the salary for the person
//while borrowing the constructor for person. As well as 
//saying if it is a mr. or mrs.

#include "Instructor.h"
#include <string>
#include <iostream>

using namespace std;

Instructor::Instructor(): Person()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108--65-1437df22:15bef0504a0:-8000:0000000000000891 begin
{
	salary = 0;
}
// section -117--74--108--65-1437df22:15bef0504a0:-8000:0000000000000891 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

Instructor::Instructor(string n, string d, string g, int s): Person(n, d, g)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108--65-1437df22:15bef0504a0:-8000:0000000000000893 begin
{
	name = n;
	dob = d;
	gender = g;
	salary = s;
}
// section -117--74--108--65-1437df22:15bef0504a0:-8000:0000000000000893 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void Instructor::print()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108--65-1437df22:15bef0504a0:-8000:0000000000000898 begin
{
	if (gender == "M")
		cout << "Mr. ";
	else //Assuming the persons gender is Female
		cout << "Ms. ";
	Person::print();
	cout << " Instructor, Salary: " << salary << endl;
	
}
// section -117--74--108--65-1437df22:15bef0504a0:-8000:0000000000000898 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

int Instructor::get_salary()
{
	return salary;
}
