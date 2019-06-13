#ifndef BANK_H
#define BANK_H

//Justin Pulido
//Bank.h
//April 9, 2017
//this will allow the user to be able to withdraw money from their savings and deposit money into their savings. As well as depositing money into their checkings and 
//withrdrawing money from their checking.

#include <string>

#include "Account.h"

using namespace std;

class Bank
{
private:
    Account savings;
    Account checking;
public:
    Bank();
    Bank(double savings_amount, double checking_amount);
    void deposit(double amount, string account);
    void withdraw(double amount, string account);
    void transfer(double amount, string account);
    void print_balances();
};

#endif

