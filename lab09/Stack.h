#ifndef STACK_H
#define STACK_H

//Justin Pulido
//Stack.h
//March 31, 2017
//

#include <vector>

using namespace std;

template <typename T>
class Stack
{
private:
	vector<T> container;
public:
	Stack(): container() { }
	void push(T x) { container.push_back(); }
	void pop() { return container.pop_back(); }
	T top() { return container.back(); }
	bool empty() { return container.empty(); }
};

#endif
	
