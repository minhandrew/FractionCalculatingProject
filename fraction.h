#pragma once
#include <iostream>
 
// declare a fraction
typedef struct fraction {
	int numerator;
	int denominator;	
} frc;
 
std::istream& operator >>(std::istream &, frc &); // fraction input
std::ostream& operator <<(std::ostream &, frc); // fraction output
frc operator +(frc, frc); // plus 2 fractions
frc operator -(frc, frc); // subtract 2 fractions
frc operator *(frc, frc); // multiplicate 2 fraction
frc operator /(frc, frc); // divide 2 fractions
int UCLN(int, int);