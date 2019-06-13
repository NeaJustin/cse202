/****************************
Justin Pulido
Student.cpp
April 29, 2017
Retruns the student ID and name
of the students and the courses. 
****************************/

#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

Student::Student() 
{
    student_ID = 0;
    student = "";
}

Student::Student(string n, double Identification)
{
    student = n;
    student_ID = Identification;
}

double Student::get_student_ID()
{
    return student_ID;
}

string Student::get_student() 
{
    return student;
}

