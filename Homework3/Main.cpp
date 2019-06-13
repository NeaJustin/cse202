/***********************************************
Justin Pulido
Main.cpp 
May 7th, 2017
The main.cpp puts hourly workers and salary 
workers and computes the amount of money they
will recieve. using pointers it grabs specific 
data regarding the persons wages. 
***********************************************/

#include "Worker.h"
#include "Salary_Worker.h"
#include "Hourly_Worker.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //this is the tests for the hourly workers and salary workers.
    vector<Worker *> Employee(6);
    Employee[0] = new Salary_Worker("Jason", 10);
    Employee[1] = new Hourly_Worker("Valerie", 10);
    Employee[2] = new Salary_Worker("Person", 10);
    Employee[3] = new Hourly_Worker("Bob", 10);
    Employee[4] = new Hourly_Worker("Patrick", 10);
    Employee[5] = new Salary_Worker("Ashley", 10);

    //getting the employees to show their amount of work
    //and pay at the end of it.
    for (int i = 0; i < Employee.size(); i++) {
	cout << "Employee: " << Employee[i]-> get_Worker_name() <<  " "
	     << "Salary: $" << Employee[i]->compute_pay(45) <<  endl;
    } 

    //clean up
    for (int i; i < Employee.size(); i++)
	delete Employee[i];


    return 0;

} 
