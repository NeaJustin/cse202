/***********************************
Justin Pulido
Student.h
April 29th, 2017
The class holds the students name
and ID.
**********************************/

#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>

using namespace std;
/*
the class of student grabs the 
student name and the ID.
*/

class Student
{
private:
    double student_ID;
    string student;
public:
    Student();
    Student(string n, double Identfication);
    double get_student_ID();
    string get_student();
};

#endif

