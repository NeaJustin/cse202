// Justin Pulido
// Employee_main.cpp
// 4/17/17
// p 6.14
// this program finds and raises an employee's salary.
// It uses Employee and Staff classees.

#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"
#include "Staff.h"

using namespace std;

int main()
{
    Staff company;
    string name;
    double salary;

    cout << "Enter a set of name, salary pairs, terminate with -1 -1\n"; 
    cin >> name >> salary;

    while (name != "-1") {
	company.add_employee(Employee(name, salary));

	cin >> name >> salary;
    }

    string response;
    int percent;

    cout << "Raise anybody's salary? ";
    cin >> response;

    while (response == "yes" or response == "y") {
	cout << "Enter name and percent: ";
	cin >> name >> percent;
	company.raise_salary(name, percent);

	cout << "Raise anybody else's salary? ";
	cin >> response;
    }

    company.print();

    return 0;
}	
