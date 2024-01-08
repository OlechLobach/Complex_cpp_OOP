#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0.0, float i = 0.0);

    Complex operator+(const Complex& c) const;
    Complex operator-(const Complex& c) const;
    Complex operator*(const Complex& c) const;
    Complex operator/(const Complex& c) const;

    friend ostream& operator<<(ostream& os, const Complex& num);
    friend istream& operator>>(istream& is, Complex& num);
};

#endif

