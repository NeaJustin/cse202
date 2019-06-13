//Justin Pulido
//Person.h
//March 10, 2017
//the class holds the name, date of birth and gender 
//of the person.
//Auto generated from argoUml

#ifndef Person_h
#define Person_h

#include <string>

using namespace std;

class Person 
{
public:
    Person();
    Person(string n, string d, string g);
	string get_name();
	string get_dob();
	string get_gender();
    virtual void print();

protected:
    string name;
    string dob;
    string gender;
};

#endif // Person_h
