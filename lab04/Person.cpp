//Justin Pulido
//Person.cpp
//April 26th, 2017
//Grabs the name of the person and gets the popularity and sets their bestfriend.

#include "Person.h"

string Person::get_name()
{
    return name;
}

string Person::get_best_friend()
{
    if (best_friend != 0) //checking for null pointer
        return best_friend->name;
    else 
        return "";
}

int Person::get_popularity() 
{
    return popularity;
}

//if the person is a best friend of 
//someone else, increase popularity.
void Person::set_best_friend(Person * bf)
{
    best_friend = bf;
    (bf->popularity)++;
}

