// int -- without decimal -- 13 , 24 ,-13 , 567, 200

// floating-point (floats) -- with decimal -- 132.45 , 567,48 , - 34,567

// Character -- 'A'

// boolean -- True / False

// Void Empty --

#include <iostream>
using namespace std;

int main()
{
    // <datatype> <name> -- Declaration
    int salary = 100; // 4 bytes
    // salary = 400;
    // cout << salary;
    // <datatype> <name> = Value; -- Decalaration + Initialisation
    // int age = 40;
    //

    // unsigned int -ve to +ve
    //  int -100 99 -- 200
    // unsigned int -- 0 - 200 --> 200

    // C/ C++ --> Don't leave the variables at delcaration try to assign some values if possible.Otherwise some garbage values will get associated to it.

    // Float
    // float price = 100.023; // 4 bytes
    // cout << price << endl;

    // double DoublePrice = 100.023; // 8 bytes
    // cout << DoublePrice;

    // character
    char Grade = 'A'; // 1 Byte  --> 0 - 255

    // Bool --
    bool IsReady = false;

    // Void -- Nothing or  absence of value or no value

    // Modifiers
    // signed , unsigned , short long

    // signed -- This is the dfefault modifier
    //  int == signed int

    // unsigned int , short int -- 2 bytes ,

    //
    // cout << "Hello World";

    // // ASCII -- https://www.geeksforgeeks.org/dsa/ascii-table/
    // cout << 234;
    // cout << "234 + 123" << endl;
    // cout << 234 + 123;

    // Overflow and underflow --
    // int --> -100 to 99

    // 99 + 2 --> 101 -- -98

    //  Constants -- variables

    // Variables
    int x = 30;
    cout << x << endl;
    // reassignment of value
    x = 40;
    cout << x;

    //
    const int MAX_NUMBER = 200;
    cout << MAX_NUMBER << endl;
    // MAX_NUMBER = 300;

    // int f ;
    // cout << f ;
    // We should initialise const when we are declararing them
    // const int MY_NUMBER;
}