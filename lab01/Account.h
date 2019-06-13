#ifndef ACCOUNT_H
#define ACCOUNT_H

// Justin Pulido
// Account.h
// April 5, 2017
// creates a class to hold the users balance and withdraw and deposit in their inquery and will now 
// accumulate interest for the time it was given. 


class Account 
{
private:
    double balance;
    double interest_rate; // for example, interest_rate = 6 means 6%
public:
    Account();
    Account(double amount, double rate);
    void deposit(double);
    bool withdraw(double); // returns true if enough money, returns false otherwise
    double query();
    void set_interest_rate(double rate);
    double get_interest_rate();
    void add_interest();
};

#endif
