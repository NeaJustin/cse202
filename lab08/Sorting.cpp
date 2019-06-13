/****************************************************************
Justin Pulido
Sorting.cpp
May 24th, 2017
-The program has the user enter values and stores them into an 
vector and sorts through them if they are not in order. It also 
allows the user to ask for a specific number and gives the 
location of it. 
-it solves the problem by having cutting the vector in half and
sorting it in two seperate pieces, then merges them completely. 
After the user is able to find a specific number and see where
the location is by inputing the selected number. 
****************************************************************/

#include <iostream>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

//checks the values of the integer
//and sorts them by incrementing values
void selection (vector<int> & a)
{
    int i, j, n = a.size();
    for (i = 0; i < n-1; i++) {
        for (j = i +1; j < n; j++) {
            if (a[i] < a[j]) {
      	        swap(a[i], a[j]);
	    	}
        }     
    }
  
}

//binary search is grabbing the vector and checking where the
//values are. if it is the same then it returns -1, otherwise
//it will give the location of the numbers inside the vector.
int binary_search(vector<int> v, int from, int to, int value)
{
    if (from > to) {
		return -1;
    }
    int mid = (from + to) / 2;
    if (v[mid] == value) {
		return mid;
    } else if(v[mid] < value) {
		return binary_search(v, mid + 1, to, value);
    } else {
		return binary_search(v, from, mid - 1, value);
    }
}

//ask for the file name and will call the selection function
//to sort the file with the numbers. it will then print out 
//the numbers and ask the user which numbers they want the 
//location of by calling binary_search and looking for the 
//number they called for. 
int main()
{
	int search;
    vector<int> a;
    string file;
    ifstream in1;
    cout << "Please enter a file name: ";
    cin >> file;
	while (!cin.eof()) {
	    in1.open(file.c_str());
   	    while(!in1.is_open()) {
	        cout << "Sorry, could not find file." << endl;
	    	cout << "Please try again: ";
	    	cin >> file;
	    	in1.open(file.c_str());
	    }  

	    int temp;
	    in1 >> temp;
	    while (!in1.eof()) {
	   	a.push_back(temp);
		in1 >> temp;
	    }

	    selection(a);
	    for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	    }
	    in1.close();
	    cout << "Please enter another file name: ctrl D to quit\n";
	    cin >> file;
	}

	cin.clear();
	cout << "Please enter a number for binary search: ";
	cin >> search;
	while (!cin.eof()) {
		cout << binary_search(a, 0, a.size() - 1, search) << endl;
		cout << "Enter another value, press ctrl d to stop: " << endl;
		cin >> search;
	}

    return 0;
}
