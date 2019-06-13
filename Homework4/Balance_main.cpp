/********************************************************************
Justin Pulido
Balance_main.cpp
June 2nd, 2017
-the program will run through a selected file and read symbols such
as (), {}, <>, and see if they are balance by the placement of it.
-it solves the problem by looking for the symbols and matching it 
throughout the line that it finds it in. if it finds a match where
they are both at the end, it is balanced, but if it is not at the 
end, then it is not balanced because another symbol will come and 
the stack will pop it off. It then continues iterating through the
stack until there is nothing left to pop off.  
PERCENT COMPLETE 100%
********************************************************************/

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>

#include "Stack.h"

using namespace std;

//the function will check to see if the top
//of the stack is corresponding with the 
//begging character and if it is it will pop 
//it off. { ( ) } if this is an example it 
//will pop off the two ( ) then the { } 
//after. 
bool check(char beginning, char end)
{
    if (beginning == '{' && end == '}') {
		return true;
    } else if (beginning == '[' && end == ']') {
		return true;
    } else if (beginning == '(' && end == ')') {
		return true;
    } else if (beginning == '<' && end == '>') {
		return true;
    } else
        return false;
}

//gets the file name and converts it into a character
//string. then it reads it into a fstream and calls
//the function of check to see if it is a balanced
//file.
int main()
{
    ifstream in1;
    string file;
    cout << "Please enter a file name: ";
    cin >> file;
    while (!cin.eof()) {
		in1.open(file.c_str());
        while (!in1.is_open()) {
	    	cout << "Error, sorry we could not find the file: " << file << endl;
	    	cout << "Please enter a different file name: ";
	    	cin >> file;
 	    	in1.open(file.c_str());
        }  
		Stack<char> s;
        string temp;
		getline(in1, temp);
        while (!in1.eof()) {
			//iterating through the size of temp.
	    	for (int i = 0; i < temp.size(); i++) {
				//checking for the beginning symbols.
				if (temp[i] == '(' || temp [i] == '{' || temp[i] == '<' || temp[i] == '[') {
					s.push(temp[i]);
				} else if (!s.empty() && check(s.top(), temp[i])) {
					//checking to see if the stack is empty and calls
					//check to see if the top of the stack matches with 
					//the index value of i. 
					s.pop();
				}
	    	}
		    getline(in1, temp);
        }
		//checking to see if the stack is empty or not. 
		if (!s.empty()) {
			cout << "Not a balanced file.\n" << endl;
		} else {
			cout << "The file is balanced.\n" << endl;
		}
		in1.close();
		cout << "Would you like to check another file for balance? ";
		cin >> file;
    }
    return 0;   
}
