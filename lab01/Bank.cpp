// Justin Pulido
// Bank.cpp
// April 9, 2017
// Will be able to deposit or withdraw money from their checkings or savings account. As well as transfer money over. 
// 100% Completed

#include "Bank.h"
#include "Account.h"
#include <string>
#include <iostream>

using namespace std;

Bank::Bank(): savings(0,0), checking (0,0) { }

Bank::Bank(double savings_amount, double checking_amount): savings(savings_amount, 0), checking(checking_amount, 0) { }


void Bank::deposit(double amount, string account)
{
    if(account  == "S") {
        savings.deposit(amount);
    } else if(account == "C") {
        checking.deposit(amount);
    } else 
	cout << "Error, Account was not found." << endl;
}   

void Bank::withdraw(double amount, string account)
{
    if(account == "C") {
        checking.withdraw(amount);
    } else if(account == "S") {
	savings.withdraw(amount);
    } else 
	cout << "Error, Account not found." << endl;
}

void Bank::transfer(double amount, string account)
{
    if(account == "S") {
	if(savings.withdraw(amount)) {
	    checking.deposit(amount);
	}
    } else if(account == "C") {
	if(checking.withdraw(amount)) {
	    savings.deposit(amount);
	}
    } else
	cout << "Error, Account not found," << endl;
}

void Bank::print_balances()
{
    cout << "Savings is now: $" << savings.query() << endl;
    cout << "Checkings is now: $" << checking.query() << endl;
}


