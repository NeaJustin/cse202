#ifndef STAFF_H
#define STAFF_H

// Justin Pulido
// Staff.h
// 4/17/17
// P 6.14
// Staff class includes a vector of Employee.
// We want to be able to add new employees and give raise
// to existing employees. 

#include <iostream> 
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;

class Staff
{
private:
    vector<Employee> members;
    int find(string n); // returns position of n in members of -1 if not found
public:
    Staff() { }
    void add_employee(Employee e); // better: const Employee &
    void raise_salary(string n, double percent);
    void print();
};

#endif
