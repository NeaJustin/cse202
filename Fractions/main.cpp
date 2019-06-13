#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private: 
    int numerator;
    int denominator;
public:
    Fraction(): numerator(0), denominator(1) { }
    Fraction(int top): numerator(top), denominator(1) { }
    Fraction(int top, int bottom): numerator(top), denominator(bottom) { assert(bottom != 0); }
    Fraction operator=(const Fraction & rhs)
    {
	    numerator = rhs.numerator;
	    denominator = rhs.denominator;
	    return *this;
    }
    Fraction operator*(const Fraction & rhs)
    {
	    Fraction temp;
    	temp.numerator = numerator*rhs.numerator;
	    temp.denominator = denominator*rhs.denominator;
	    return temp;
    }
    Fraction operator+(const Fraction & rhs)
    {
	    Fraction temp;
	    temp.numerator = numerator*rhs.denominator + rhs.numerator*denominator;
	    temp.denominator = denominator*rhs.denominator;
	    return temp;
    }

    friend ostream & operator<<(ostream & out, const Fraction & value);
};

ostream & operator<<(ostream & out, const Fraction & value)
{
    out << value.numerator << "/" << value.denominator;
    return out;
}

int main()
{
    Fraction e(1, 5);
    Fraction d(9, 8);
    Fraction c(6);

    d = e = c + d * e;

    cout << e << " " << c <<  " " << d << endl;

    return 0;
}

