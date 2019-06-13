//Justin Pulido
//Student.h
//March 10, 2017
//The student.h file holds the major for the student 
//and inherits from person.h
//Auto generated from argoUml
#ifndef Student_h
#define Student_h

#include "Person.h"
#include <string>

using namespace std;

class Student : public Person 
{
public:
    Student();
    Student(string n, string d, string g, string m);
	string get_major();
    void print();

protected:
    string major;
};

#endif // Student_h
