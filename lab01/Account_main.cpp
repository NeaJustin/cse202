// Justin Pulido
// Account_main.cpp
// April 5, 2017
// it checks to see if the person has the necessary funds to withdraw and if they do not they are charged a $5 penalty. It also allows the person to add in money through the deposit function. As well as 

#include <iostream>

#include "Account.h"

using namespace std;

int main()
{

    Account savings(10000, 6);
    cout << "Calcing interest for savings: " << endl;

    int i;
    for(i = 0; savings.query() < 20000; i++)
    {
        savings.add_interest();
        cout << "Savings after one year." << savings.query() << endl;
    }
    cout << i << endl;
/*
    int years = 0;
    while(savings.query() < 20000)
    {
        savings.add_interest();
        cout << "Savings after one year. " << savings.query() << endl;
	years++;
    }
    cout << years << endl;
*/
    return 0;
}
