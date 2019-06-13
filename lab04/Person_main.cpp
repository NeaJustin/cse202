/***********************************
Justin Pulido
Person_main.cpp
April 26th, 2017
Gets the class of person, and checks
to see the bestfriend and the popularity
of the people inside of the vectors.
***********************************/

#include <iostream>
#include <iomanip>    //used for setting w
#include <fstream>    //used for ifstream
#include <string>
#include <vector>

#include "Person.h"

using namespace std;

int main()
{
    string name;
    vector<Person *> people; //vector of pointer to object type person.
    Person * person_pointer;

    ifstream in;

    in.open("names");
    if (!in.is_open()) {
	cout << "Could not open 'names; file." << endl;
	return 1;
    }

    in >> name;
    while (!in.eof()) {
        //person_pointer = new Person(name);
	//people.push_back(person_pointer);
	//Checking if name already exists
	int i;
	for ( i = 0; i < people.size(); i++) {
	    if (people[i]->get_name() == name) {
	    cout << name << " already exist." << endl;
	    break;
	    }
	}

	if (i >= people.size()) {			
	    person_pointer = new Person(name);
            people.push_back(person_pointer);
	}
        in >> name;
    }

    in.close();

    int i, j;

    // for each person prompt for a best friend. 
    for (i = 0; i < people.size(); i++) {
	cout << "Who is " << people[i]->get_name() << " 's best friend? ";
	cin >> name;

	// searching for best friend
	for (j = 0; j < people.size(); j++) { 
	    if(j < people.size())
		people[i]->set_best_friend(people[j]);
	    else 
		cout << "Could not find best friend: " << name << endl;
	    if (people[j]->get_name() == name) 
	        break;
               
        }
   
    }

    //list of name, best friend, and popularity count
    for (i = 0; i < people.size(); i++) {
	person_pointer = people[i];
	cout << left << setw(10) << person_pointer->get_name();
	cout << left << setw(10) << person_pointer->get_best_friend();
	cout << right << setw(2) << person_pointer->get_popularity() << endl;
    }

    //cleaing up the new variables to not have code stored for no reason.
    for (i = 0; i < people.size(); i++) 
	delete people[i];
/*	
	cout << "How many programmers does it take to change a light bulb?" << endl;
	cout << "None, that's a hardware problem." << endl;
*/
    return 0;
}
 








