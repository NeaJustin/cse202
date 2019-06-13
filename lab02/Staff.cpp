// Justin Pulido 
// Staff.cpp
// 4/17/17
// this is the implementation of class Staff.

#include <iostream>
#include <string>
#include <vector>

#include "Staff.h"

using namespace std;

int Staff::find(string n)
{
    for (int i = 0; i < members.size(); i++)
	if (members[i].get_name() == n)
	    return i;
    return -1;
}

void Staff::add_employee(Employee e)
{
    if (find(e.get_name()) == -1) {
    members.push_back(e);
    }
}

void Staff::raise_salary(string n, double percent)
{
    double salary;

    int i = find(n);
    if (i == -1) {
	cout << "Could not find " << n << endl;
    } else {
	salary = members[i].get_salary();
	double raise_salary = salary * percent/100.0;
	if (raise_salary > 1000) {
	    raise_salary = 1000;
	}
        cout << percent;
	salary += raise_salary;
	members[i].set_salary(salary);
    }
}

void Staff::print() 
{
    for (int i = 0; i < members.size(); i++)
	cout << members[i].get_name() << " " << members[i].get_salary() << endl;
}

