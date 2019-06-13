// Justin Pulido
// Employee.cpp
// 4/17/17
// P 6.14
// Employee class implementation.

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(): name(""), salary(0) { }

Employee::Employee(string n, double s): name(n), salary(s) { }

string Employee::get_name() 
{
    return name;
}

double Employee::get_salary()
{
    return salary;
}

void Employee::set_salary(double s)
{
    salary = s;
}

