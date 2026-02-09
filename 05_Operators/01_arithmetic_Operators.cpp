// Arithmetic Operators

#include <iostream>
using namespace std;

int main()
{
    int a = 400, b = 300;
    // Addition - +
    cout << "a + b: " << a + b << endl;

    // subtraction -
    cout << "a - b: " << a - b << endl;

    // Multiplication *
    cout << "a * b: " << a * b << endl;

    // Division -- /
    cout << "a / b: " << a / b << endl;

    cout << "Complete Division : a / b: " << float(a) / b << endl;

    // Modulus Operator / Remainder Operator (%)
    cout << "a % b: " << a % b << endl;

    // Integer division truncates the result
    // Modulus operator does not work with floats
    // Division by zero causes undefined behaviour.
    // cout << "a / b: " << a / 0 << endl;

    return 0;
}