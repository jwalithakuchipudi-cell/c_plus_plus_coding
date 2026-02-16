#include <iostream>
using namespace std;

int main()
{
    cout << "=== WHILE LOOP DEMONSTRATION ===\n\n";

    // Syntax: while (condition) { body }
    // The condition is checked before each iteration.
    // If condition is false initially, the body is never executed.

    int x = 10;
    cout << "Counting down from 10 to 5 using while:\n";
    while (x >= 5)
    {
        cout << x << " ";
        x--; // decrement to avoid infinite loop
    }
    cout << "\n\n";

    return 0;
}