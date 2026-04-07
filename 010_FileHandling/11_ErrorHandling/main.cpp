// Error Handling

// try
// throw -->
// catch

#include <iostream>

using namespace std;
int main()
{
    // try
    // {
    //     cout << "I am trying to print a message." << endl;
    //     // throw("Not able to ;rint the message")
    // }
    // catch()

    try
    {
        int a = 10, b = 0;
        if (b == 0)
        {
            throw("Division by zero is not possible");
        }
        cout << a / b;
    }
    catch (const char *msg)
    {
        cout << "Error:" << msg;
    }

    return 0;
}
