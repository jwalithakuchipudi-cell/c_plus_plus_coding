#include <iostream>
using namespace std;

int main()
{
    cout << "=== DO-WHILE LOOP DEMONSTRATION ===\n\n";

    // Syntax: do { body } while (condition);
    // The body is executed at least once, because condition is checked after the body.

    int x = 2;
    cout << "This loop runs once even though condition (x < 0) is false:\n";
    do
    {
        x = 4; // this assignment happens
        cout << "Hello CPP (from do-while) ";
    } while (x < 0); // condition false, but loop already executed once

    cout << "\n\n";

    return 0;
}