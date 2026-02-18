// Functions -- is a block of code that will be executed together.
// block -- {}

// Global , Local , Block -- Scopes of variable

#include <iostream>
using namespace std;

// Global
// int x = 100;
// int main()
// {
//     cout << "=== Scopes of Variables ===\n\n";
//     // local
//     int j = 0;
//     cout << x;
//     for (int i = 0; i < 10; i++)
//     {
//         // block
//         cout << i << j << x << " ";
//     }
//     // cout << i << "\n\n"; // This will throw an error "i" is not defined

//     cout << "\n\n";
//     return 0;
// }

// Trasport -- Scopes
// -- Train/ Bus  -- Global
// -- Family car -- Family -- Within your family -- means within the function - Local / Function
//  -- Personal Bike / car -- Block -- Only within the bracket

// int x = 100;

// int main()
// {
//     cout << "=== Shadowing of Variables ===\n\n";
//     // local
//     int x = 50;
//     cout << x;
//     for (int i = 0; i < 4; i++)
//     {
//         // block
//         x = 1000;
//         cout << x << " ";
//     }

//     cout << "\n\n";
//     return 0;
// }

void FullName()
{
    string fname = "Arvinder";
    string lname = "CPP";
    cout << "First name :" << fname << " ---- Last Name : " << lname << endl;
}
void Greet()
{
    // Function Body / definition
    cout << "Hello User !" << endl;
}

int main()
{
    cout << "=== Functions of Variables ===\n";

    // Functions -- Built in Functions and User Defined Functions
    // functionName()
    Greet();
    cout << "I am in between both functions" << endl;
    FullName();
    Greet();
    Greet();
    Greet();
    return 0;
}