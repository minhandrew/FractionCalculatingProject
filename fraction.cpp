#include "fraction.h"
 
int UCLN(int a, int b)
{
	// Use Euclid Algorithm
	if (a % b == 0)
		return b;
	return UCLN(b, a % b);
}
 
std::istream& operator >>(std::istream &is, frc &f)
{
	is >> f.numerator >> f.denominator;
	return is;
}
 
std::ostream& operator <<(std::ostream &os, frc f)
{
	os << f.numerator << "/" << f.denominator;
	return os;
}
 
frc operator +(frc f1, frc f2)
{
	frc f;
	f.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	f.denominator = f1.denominator * f2.denominator;
	int ucln = UCLN(f.numerator, f.denominator);
	f.numerator /= ucln;
	f.denominator /= ucln;
	if (f.denominator < 0) {
		f.denominator *= -1;
		f.numerator *= -1;
	}
	return f;
}
 
frc operator -(frc f1, frc f2)
{
	frc f;
	f.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
	f.denominator = f1.denominator * f2.denominator;
	int ucln = UCLN(f.numerator, f.denominator);
	f.numerator /= ucln;
	f.denominator /= ucln;
	if (f.denominator < 0) {
		f.denominator *= -1;
		f.numerator *= -1;
	}
	return f;
}
 
frc operator *(frc f1, frc f2)
{
	frc f;
	f.numerator = f1.numerator * f2.numerator;
	f.denominator = f1.denominator * f2.denominator;
	int ucln = UCLN(f.numerator, f.denominator);
	f.numerator /= ucln;
	f.denominator /= ucln;
	return f;
}
 
frc operator /(frc f1, frc f2)
{
	frc f;
	f.numerator = f1.numerator * f2.denominator;
	f.denominator = f1.denominator * f2.numerator;
	int ucln = UCLN(f.numerator, f.denominator);
	f.numerator /= ucln;
	f.denominator /= ucln;
	return f;
}