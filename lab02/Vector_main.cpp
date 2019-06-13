/***********************************************************************************
Justin Pulido
Vector_main.cpp
April 12, 2017
The program sorts numbers in a line depending on which one will come first. 
Percent completed 100%
***********************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Append vector will grab the two vectors of a and b
// and add them together to form one vector.
vector<int> append(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    vector<int> c(n + m);
    int i;

    for (i = 0; i < n; i++)
	c[i] = a[i];

    for (i = 0; i < m; i++)
	c[n + i] = b[i];

    return c;
}
// vector merge will grab the two vectors of a and b
// and merge them by putting one index of a and add it to c
// and it will put b into c after the b. 
// If the vector still has remaining numbers, it will add it 
// through another for loop.
vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> c;
    int i;

    for (i = 0; i < a.size() && i < b.size(); i++) {
	c.push_back(a[i]);
	c.push_back(b[i]);
    }

    for (; i < a.size(); i++) {
	c.push_back(a[i]);
    }

    for (; i < b.size(); i++) {
	c.push_back(b[i]);
    }
    return c;
}
// Merge sorted checks the two vectors of a and b 
// and checks the index's to see which one is greater
// if a is greater than b it will put a in front of b.
// otherwise it will grab b and put it after b.
vector<int> merge_sorted(vector<int> a, vector<int> b)
{
    vector<int> c;
    int i = 0, j = 0;
    
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
	    c.push_back(a[i]);
	    i++;
	} else {
	    c.push_back(b[j]);
	    j++;
	}
    }

    for (; i < a.size(); i++) {
	c.push_back(a[i]);
    }

    for (; j < b.size(); j++) {
	c.push_back(b[j]);
    }

    return c; 
}

int main()
{
    int i;

    vector<int> a;
    int temp;
    cout << "First set of numbers to input, enter -1 to stop: ";
    cin >> temp;

    while (temp != -1) {
        a.push_back(temp);
	cout << "Please enter another number, (-1 to stop): ";
	cin >> temp;
    }

    vector<int> b;
    cout << "Next set of numbers to input, enter -1 to stop: ";
    int holder;
    cin >> holder;

    while (holder != -1) {
	b.push_back(holder);
        cout << "Please enter another number, (-1 to stop): ";
	cin >> holder;
    }

    vector<int> c = merge(a, b);
    cout << "Print of merge list: " << endl;
    for (int i = 0; i < c.size(); i++) {
	cout << c[i] << "c" << endl;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> p = merge_sorted(a, b);

    cout << "Print of merge sorted list: " << endl;
    for (int i = 0; i < p.size(); i++) {
	cout << p[i] << endl;
    }



    return 0;
}
    






















