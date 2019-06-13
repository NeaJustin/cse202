/*********************************************************
Justin Pulido
Arrays_pointers.cpp
April 19, 2017
The program is able to check the size of the character 
array, copy one array to another, compare sizes, and add
one character array to another.  
Percent completed 100%
*********************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//string length gabs the lenght of
//the arrays and displays it.
unsigned int strlen(const char * s)
{
    unsigned int n;
	
    for (n = 0; *(s+n); n++);

    return n;
}
/*
void strcpy(char t[], const char s[])
{
    for (int i = 0; t[i] = s[i]; i++);
}
*/
//string copy takes pointer of s and 
//gives it to pointer of t. 
void strcpy(char * t, const char * s)
{
    for ( ; *t++ = *s++; );
}

//string compare is compaing the two 
//arrays and sees which one is bigger. 
//then subtracts the difference and displays it.
int strcmp(const char * s, const char * f)
{
    const char * p1 = s;
    const char * p2 = f;

    for (; * p1 == * p2 && * p1 != '\0'; p1++, p2++);

    return * p1 - * p2;
}
/*
void strncpy(char t[], const char s[], const unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n && s[i]; i++) {
	t[i] = s[i];
    }
    t[i] = '\0';
}
*/
//string copy copies pointer of s to pointer of t.
//then adds the appropiate amount of characters to that
//array.  
void strncpy(char * t, const char * s, const unsigned int n) 
{
    unsigned int i;
    const char * p = s;
    const char * b = t;

    for (i = 0; i < n && * p; i++) {
		t[i] = s[i];
        p++;
    }
    b++;
    t[i] = '\0';
}
/*
void strcat(char t[], const char s[])
{
    unsigned int i;

    for (i = 0; t[i]; i++);
    strcpy(t+i, s);
}
*/
//string cat grabs the length of t array. 
//it then calls string copy and adds s again.
void strcat(char * t, const char * s)
{
    int length_t = strlen(t);

    strcpy(length_t + t, s);
}

int strspn(const char s[], const char t[])
{
	int i;
	int j;
	int minpos = -1;
	int maxpos = -1;
	for (i = 0; t[i] != '\0'; i++) {
		bool flag = false;
		for (j = 0; s[j] != '\0'; j++) {
			if (t[j] == s[i]) {
				flag = true;
				if (j > maxpos) {
					maxpos = j;
				} else if (j < minpos) {
					minpos = j;
				}
			}
			else {
				return 0;
			}
		}
		//if (!flag) {
			//cout << "Hello";
			//return 0;
		//}
	}
	return (maxpos - minpos) + 1;
}

int main() 
{
    //declaring my character arrays.
    char str1[20] = "abcd", str2[20] = "ad";

    cout << "str1=" << str1 << " str2=" << str2 << endl;
    cout << "strlen(str1)=" << strlen(str1) << " strlen(str2)=" << strlen(str2) << endl;

    strcpy(str1, str2);
    cout << "str1=" << str1 << endl;

    strcat(str1, str2);
    cout << "str1=" << str1 << endl;

    cout << "strcmp(str1, str2)=" << strcmp(str1, str2) << endl;
    cout << "strcmp(str2, \"efh\")=" << strcmp(str2, "efh") << endl;

    strncpy(str2, "hi jkl", 2);
    cout << "str2=" << str2 << endl;
 
    strncpy(str2, "hi jkl", 12);
    cout << "str2=" << str2 << endl;	

    strspn(str1, str2);
	cout << strspn(str2, str1) << endl;

    return 0;
}
