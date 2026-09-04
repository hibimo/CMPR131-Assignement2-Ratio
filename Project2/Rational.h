
#ifndef Rational_H
#define Rational_H
#include <iostream>

using namespace std;

class Rational
{
private:
	int numerator;
	int denominator;

	void normalize();
public:
	//constructor
	Rational(int numerator = 0, int denominator = 1);

	//destructor
	~Rational();

	//accessor
	int getNumerator() const;
	int getDenominator() const;

	//mutator
	void setNumerator(int numerator);
	void setDenominator(int denominator);

	//arithmetic operator
	friend Rational operator+(const Rational & r1, const Rational& r2);
	friend Rational operator-(const Rational & r1, const Rational& r2);
	friend Rational operator*(const Rational & r1, const Rational& r2);
	friend Rational operator/(const Rational & r1, const Rational& r2);

	//comparison operator - overloading with operators!=,<=,>,>=.
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator!=(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
	friend bool operator<=(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
	friend bool operator>=(const Rational& r1, const Rational& r2);

	//input/output operators
	friend ostream& operator<<(ostream& outs, const Rational& r);
	friend istream& operator>>(istream& ins, Rational& r);
};

#endif