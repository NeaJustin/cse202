#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Justin Pulido
// Employee.h'
// 4/17/17
// p 6.14
// Employee class interface. An employee has a name and salary.

#include <string>

using namespace std;

class Employee
{
private:
    string name;
    double salary;
public:
    Employee();
    Employee(string n, double s);
    string get_name();
    double get_salary();
    void set_salary(double s);
};

#endif

