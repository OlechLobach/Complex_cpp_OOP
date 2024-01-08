#include "complex.h"

int main() {
    Complex a, b;
    cout << "Enter the first complex number:\n";
    cin >> a;

    cout << "Enter the second complex number:\n";
    cin >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;

    return 0;
}