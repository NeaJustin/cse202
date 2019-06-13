/******************************************
Justin Pulido
Worker.cpp
May 6th, 2017
sets default constructers and gets the name
and salary rate of the worker.
******************************************/

#include "Hourly_Worker.h"
#include "Worker.h"
#include <string> 

//default constructor
Worker::Worker()
{
    Worker_name = "";
    salary_rate = 1;
}

Worker::Worker(string n, float rate)
{
    Worker_name = n;
    salary_rate = rate;
}

string Worker::get_Worker_name()
{
    return Worker_name;
}

float Worker::get_salary_rate()
{
    return salary_rate;
}

//returning the pay for the worker.
float Worker::compute_pay(int hours)
{
    return salary_rate * hours;
}

