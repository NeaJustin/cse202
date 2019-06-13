#include "stack.h"


using namespace std;
template<typename T>

Stack::Stack(): container()
{
}

void Stack::push(T x)
{
	container.push_back(x);
}

void Stack::pop()
{
	container.pop_back();
}

Stack::T top()
{
	return container.back();
}

bool Stack::empty()
{
	return container.empty();
}

