/*********************************************
Justin Pulido
Salary_Worker.cpp
May 7th, 2017
the Salary_Worker.cpp will allow the class to 
compute the amount of work for someone who 
is on a full time salary. 
*********************************************/

#include "Worker.h"
#include "Salary_Worker.h"
#include <iostream>

Salary_Worker::Salary_Worker(): Worker() 
{
}

Salary_Worker::Salary_Worker(string n, double s): Worker(n, s) 
{
}

//creating a salary variable and multiplying the hours
//and they only get 40 hours, if it is more they will
//not be paid for that time.
float Salary_Worker::compute_pay(int hours)
{
    float salary;
    salary = salary_rate * 40;
    return salary;
}
