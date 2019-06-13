/*************************************************************************
Justin Pulido
Stack_main.cpp
March 31, 2017
-The problem we are given is that the stack is pushing back integers and
strings but using a template.
-It fixes the problem by having the template which allows us to use a 
function for any purpose we want to have. it can be used for string, 
integers, doubles, floats, just about anything you can think of. 
PERCENT COMPLETED 100%
*************************************************************************/

#include <iostream>
#include <string>

#include "Stack.h"

void reverse(stack<char> & s)
{

}
//creating stacks and pushing it into the template file to 
//call the functions inside of the Stack.h file. 
int main()
{
	Stack<int> s1;
	//pushing numbers into the stack.
	s1.push(4);
	s1.push(3);
	s1.push(2);
	s1.push(1);
	//getting the top of the stack and displaying it. 
	while (!s1.empty()) {
		cout << s1.top() << endl;
		s1.pop();
	}	
	
	Stack<string> s2;
	//pushing` back the string into a stack.
	s2.push("Yoda said ");
	s2.push("something");
	s2.push("to write");
	//getting the bottom of the stack and displaying it. 
	while (!s2.empty()) {
		cout << s2.top();
		s2.pop();
	}
	cout << endl;
	//#4.this is supposed to cause segmentation fault but with the new and 
	//improved class it causes it to not cause a segmentation fault. 
	//oh happy day. 
	s2.pop();
	cout << s2.top() << endl;
	Stack<int> s3;
	s3.push(8);
	s3.push(5);
	s3.push(7);
	s3.push(3);
	s3.push(6);

	while(!s3.empty()) {
		cout << s3.top() << endl;
		s3.pop();
	}

	Stack<string> s4;
	s4.push("yes professor, i am still tinkering with projects.");
	s4.push("i need an a in this class.");
	s4.push("please send help.");

	while(!s4.empty()) {
		cout << s4.top() << endl;
		s4.pop();
	}
	cout << endl;
	return 0;
}
