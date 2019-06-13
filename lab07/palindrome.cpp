/*******************************************************
Justin Pulido
palindrome.cpp
May 17, 2017
-the program will ask the user to enter a phrase and it
will see if the word backwards is equal to itself.
-the program solves the problem by looking at the first
and last letters of the word enter and see's if they 
are equal to each other. if they are, it chops them off
and goes to the next one and continues going until all 
the letters are checked to see if they are equal while
ignoring white spaces and commas and quotations. 
*******************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//it will make the lettters turn to upper case
//so the computer will not mistake a nonpalindrome
//that is a palindrome.
char to_lower(char c)
{
	if ( (c >= 'A' && c <= 'Z') ){
		return c + ('a' - 'A');
	}
	else 
		return c;
}

//checks to see if the letter is actually a letter. 
bool is_letter(char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
		return true;
	} 
	return false;
}

//this function will call itself while also calling
//is_letter and to_lower to continue checking the 
//two subrstrings and to see the letters and have a 
//palindrome.
bool is_palindrome(string s)
{
	if (s.length() <= 1) {
		return true;
	}

	char first = s[0];
	char last = s[s.length() - 1];
	if (!is_letter(first)) {
		string holder = s.substr(1, s.length() - 1);
		return is_palindrome(holder);
	}
	if (!is_letter(last)) {
		string second = s.substr(0, s.length() - 1);
		return is_palindrome(second);
	}
	if (to_lower(first) == to_lower(last)) {
		string shorter = s.substr(1, s.length() - 2);
		return is_palindrome(shorter);
	}
	return false;
}

//it will prompt the user to ask for a string name 
//and then it will call is_palindrome to see if the 
//entered word is a palindrome. 
int main()
{
	cout << "Enter a string: ";
	string input;
	getline(cin, input);
	cout << "\' " << input << "\' is ";
	if(!is_palindrome(input)) {
		cout << "not ";
	}
	cout << "a palindrome." << endl;
	return 0;
}
