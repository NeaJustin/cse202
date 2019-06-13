// Justin Pulido
// Account.cpp
// April 5, 2017
// Checks the ammount the user has in their bank and is able to withdraw, deposit, and take out money. Then takes out the money or puts in and displays the amount in their bank.
// Percent completed 100% 

#include <iostream>

#include "Account.h"

using namespace std;

Account::Account(): balance(0) { }

Account::Account(double amount, double rate): balance (amount) 
{
    balance = amount;
    interest_rate = rate;
}


bool Account::withdraw(double amount)
{
    bool status;

    if (amount > balance) {
        balance -= 5; // penalty
	status = false;
    } else {
	balance -= amount;
	status = true;
    }

    return status;
}

void Account::deposit(double amount)
{
     balance += amount;   
}
double Account::query()
{
    return balance;
}

void Account::set_interest_rate(double rate) 
{
    interest_rate = rate;
}

double Account::get_interest_rate() 
{
    return interest_rate;
}

void Account::add_interest()
{
    balance += balance * interest_rate / 100;
}


    

