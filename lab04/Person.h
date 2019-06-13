#ifndef PERSON_H
#define PERSON_H 

//Justin Pulido
//Person.h
//april 26, 2017
//creating a class to keep count of the popularity and best friends. 

#include <string>

using namespace std;

class Person
{
private:
    string name;
    Person * best_friend;
    int popularity;
public:
    Person(): name(""), best_friend(0), popularity(0) { } 
    Person(string n): name(n), best_friend(0), popularity(0) { }
    string get_name();
    string get_best_friend();
    int get_popularity();
    void set_best_friend(Person *);
};

#endif

