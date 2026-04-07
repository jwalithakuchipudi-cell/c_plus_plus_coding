// int x = 30
// x = 40
// Arrays -- Multiple values
//

#include <iostream>
using namespace std;

struct Student
{
    // Data memebers
    int x;
    string name;
    bool IsTrue;

    // Function memebers
    void DisplayInfo()
    {
        cout << x << " " << name;
    }
};
int main()
{
    Student S1;
    S1.x = 100;
    S1.name = "C COurse";
    S1.name = "MyName";

    cout << S1.x << " " << S1.name;
    // int x;
    // string name;
    // bool IsTrue;

    return 0;
}

// If you have to create number of variable of different types. -- > Starting POint

// These variables have different types.
// These variables are logically connected.
// We have to pass all the variable to functions