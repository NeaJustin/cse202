/**************************************
Justin Pulido
Salary_Worker.h
may 7th, 2017
derived class from base class and it 
sees if the worker is hourly paid or
full time salary worker.
**************************************/

#include "Worker.h"
#ifndef SALARY_WORKER
#define SALARY_WORKER

#include <iostream>

using namespace std;

class Salary_Worker: public Worker
{
public:
    Salary_Worker();
    Salary_Worker(string n, double s);
    virtual float compute_pay(int hours);
};

#endif
