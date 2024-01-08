#include "complex.h"

Complex::Complex(float r, float i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex& c) const {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex& c) const {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(const Complex& c) const {
    return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

Complex Complex::operator/(const Complex& c) const {
    float denominator = c.real * c.real + c.imag * c.imag;
    return Complex((real * c.real + imag * c.imag) / denominator, (imag * c.real - real * c.imag) / denominator);
}

ostream& operator<<(ostream& os, const Complex& num) {
    os << num.real << " + " << num.imag << "i";
    return os;
}

istream& operator>>(istream& is, Complex& num) {
    cout << "Enter real part: ";
    is >> num.real;
    cout << "Enter imaginary part: ";
    is >> num.imag;
    return is;
}