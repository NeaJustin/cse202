#ifndef STACK_H
#define STACK_H

//Justin Pulido
//Stack.h
//June 6th, 2017
//holds the template of t to be used for any type and will push back
//and the top will grab the bottom of the stack. but it also checks 
//to se if the container is empty.

#include <vector>

using namespace std;

template<typename T>
class Stack
{
private:
    vector<T> container;
public:
    Stack(): container() { }
    void push(T x)
    {
	container.push_back(x);
    }
    void pop()
    {
	//checking to see if the vector is empty
	if (!container.empty()) {
	    container.pop_back();
	}
	else {
	    std::cout << "Cannot pop anything into the container.";
	}
    }

    T top()
    {
	if (!container.empty()) {
	    return container.back();
	}
	else 
	    //calling default constructor and creates a variable 
	    //and returns that variable
	    return T();
    }
    bool empty() { return container.empty(); }
};

#endif
