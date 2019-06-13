/******************************************************************
Justin Pulido
LineCount.cpp
March 10, 2017
-The program counts the number of words, lines, and 
characters by using a loop to count each one.
-The program gets the file name and enters each word into an in1 
fstream by converting into a character string. it then opens the 
file if successful and counts lines with +1 to see the new line. 
Counts the numbers of words and lines and prints it out. 
PERCENT COMPLETED 100%
*******************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

//asks for the file and proccess it for words, characters, and lines.
int main()
{
    ifstream in1;
    string temp;

    int chars = 0, words = 0, lines = 0;
    cout << "Please enter a file name: ";
    cin >> temp;

    while (!cin.eof()) { //file does not end
        in1.open(temp.c_str()); 
		while (!in1.is_open()) {	
			cout << "Sorry could not find this file. " << endl;
			cout << "Please try another file: ";
			cin >> temp;
			in1.open(temp.c_str());
		}
		string line;
        getline(in1, line);	
		while (!in1.eof()) {
	    	lines++;
	    	chars += line.length() + 1; // + 1 for new-line
            istringstream line_string(line);
	    	while (line_string >> temp)
        		words++;
			getline(in1, line);
	    }
		cout << lines << " " << words << " " << chars << endl;
		cout << "Please enter another file, or if you do not want to, press ctrl D: \n";
		cin >> temp;
		//closing the file.
		in1.close(); 
    }
    return 0;
}

