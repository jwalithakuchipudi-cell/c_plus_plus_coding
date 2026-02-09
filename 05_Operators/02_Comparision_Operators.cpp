// Relational Operators / Comparision Operators

#include <iostream>

using namespace std;

int main()
{

    // == , != , > ,< ,>= , <=
    int a = 50, b = 60, c = 50;
    cout << "a ==b :" << (a == b) << endl;
    cout << "a==c: " << (a == c) << endl;
    cout << "a !=b :" << (a != b) << endl;
    cout << "a !=c: " << (a != c) << endl;
    cout << "a > c: " << (a > c) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < c: " << (a < c) << endl;
    cout << "a < b: " << (a < b) << endl;

    cout << "a >= c: " << (a >= c) << endl;
    cout << "a >= b: " << (a >= b) << endl;

    cout << "a <= c: " << (a <= c) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    return 0;
}