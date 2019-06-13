/*****************************************************************
Justin Pulido
maps.cpp
June 7th, 2017
-The program will tell the user to enter a month and 
then it will tell them whether that month has 31 days.
-the program checks the months and looks for a matching name 
the user entered into the program. If it is only three letters,
it will still be correct. However, with the modification, if the
user enters in the full month name it will still be correct and 
say if that specific month has 31 days.
PERCENT COMPLETED 100%
*****************************************************************/

#include <map>
#include <string>
#include <iostream>

using namespace std;

//will ask the user for a month name and will tell them if that 
//month has 31 days inside of it or if the month does not exist
//or does not have 31 days. 
int main()
{
	//creating the map to hold all the months.
	map<string, bool> months;

	months["Jan"] = true;
	months["Feb"] = false;
	months["Mar"] = true;
	months["Apr"] = false;
	months["May"] = true;
	months["Jun"] = false;
	months["Jul"] = true;
	months["Aug"] = true;
	months["Sep"] = false;
	months["Oct"] = true;
	months["Nov"] = false;
	months["Dec"] = true;
	
	months["January"] = true;
	months["February"] = false;
	months["March"] = true;
	months["April"] = false;
	months["May"] = true;
	months["June"] = false;
	months["July"] = true;
	months["August"] = true;
	months["September"] = false;
	months["October"] = true;
	months["November"] = false;
	months["December"] = true;

	string response;

	cout << "Enter a month name: ";
	//cin >> response;
	getline(cin, response);
	//looping through so we do not have to continously use a.out
	while (!cin.eof()) {
		if(months[response]) { 
			cout << "This is a 31-day month.\n" << endl;
		} else {
			cout << "This is a non-31-day month or it is an invalid month name.\n" << endl;
		}
		cout << "Please enter another month: ";
		//cin >> response;
		getline(cin, response);
	}
	
	return 0;
}
