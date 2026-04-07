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
        int a = 10;
        if (a != 50)
        {
            throw a;
        }
        cout << a;
    }
    catch (int a)
    {
        cout << "Number is :" << a;
    }

    return 0;
}
