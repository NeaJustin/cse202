/************************************************
Justin Pulido
May 7th, 2017
Hourly_worker.h
holds the time for the amount of work the worker 
does. 
************************************************/

#include "Worker.h"
#ifndef HOURLY_WORKER
#define HOURLY_WORKER

#include <iostream>
#include <cmath>

using namespace std;

class Hourly_Worker : public Worker
{
public: 
    Hourly_Worker();
    Hourly_Worker(string n, double s);
    virtual float compute_pay(int time); //time is hours
};

#endif
