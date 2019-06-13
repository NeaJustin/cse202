//Justin Pulido
//Instructor.h
//March 10, 2017
//The class instructor.h holds the salary for the instructor
//and borrows the class of person for the constructor.
//Auto generated from ArgoUml

#ifndef Instructor_h
#define Instructor_h

#include "Person.h"
#include <string>

using namespace std;

class Instructor : public Person 
{
public:
    Instructor();
    Instructor(string n, string d, string g, int s);
    int get_salary();
    void print();

protected:
    int salary;
};

#endif // Instructor_h
