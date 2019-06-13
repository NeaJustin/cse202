/********************************************
Justin Pulido
Worker.h
May 6th, 2017
Holds the name of the worker and is the base 
class to others. 
*********************************************/

#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>

using namespace std;

class Worker
{
protected:
    string Worker_name;
    float salary_rate;
public:
    Worker();
    Worker(string n, float rate);
    string get_Worker_name();
    float get_salary_rate();
    virtual float compute_pay(int hours);
};

#endif
