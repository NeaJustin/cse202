// Justin Pulido
// Bank_main.cpp
// April 10, 2017
// allows the user to deposit money into their savings or withdraw money from their    savings as well as being able to transfer money.

#include <iostream>
#include <string>

#include "Bank.h"

using namespace std;

int main()
{
    Bank csusb_bank(1000, 100);

    csusb_bank.deposit(50, "S");
    csusb_bank.withdraw(10, "CH");
    csusb_bank.withdraw(10, "C");
    csusb_bank.transfer(40, "S");
    csusb_bank.withdraw(150, "C");
    csusb_bank.print_balances();

return 0;
}

