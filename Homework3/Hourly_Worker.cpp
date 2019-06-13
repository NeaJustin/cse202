/********************************************
Justin Pulido 
Hourly_worker.cpp
may 7th, 2017
the hourly_worker.cpp class gets the 
amount of hours they work and computes the 
pay from that time. 
********************************************/

#include "Worker.h"
#include "Hourly_Worker.h"
#include <cmath>

using namespace std;
//calling the default constructor for worker since it is the same
Hourly_Worker::Hourly_Worker(): Worker()
{
}

//creating the constructor for worker.
Hourly_Worker::Hourly_Worker(string n, double rate): Worker(n, rate)
{
}

//makes the worker get paid for the amount of hours they worked 
//and if it over 40 hours, they get paid the difference.
float Hourly_Worker::compute_pay(int hours)
{
    string n;
    if (hours <= 40) {
	return salary_rate * hours;
    } else {
	return (salary_rate * 40) + (hours - 40) * (salary_rate * 1.5);
    }
}
 
        
