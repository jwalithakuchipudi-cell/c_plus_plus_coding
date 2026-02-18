//
#include <iostream>
using namespace std;

// Write a program (WAP) which takes two integers as input and returns the sum of these numbers.
int AddNumbers(int x, int y)
{
    return x + y;
}

int AddNumbers(int x, int y, int z)
{
    return x + y + z;
}
//  WAP to print the product of three numbers passed to a function.
void product(int a, int b, int c)
{
    cout << "Product of a*b*c = " << a * b * c << endl;
}

// WAP that finds the sum of first 10 natural numbers and returns it.
int SumOfNaturalNum()
{
    int result = 0;
    for (int i = 1; i <= 10; i++)
    {
        result += i;
    }
    return result;
}

int SumOfNaturalNum2()
{
    // int result = 0;
    // result = (n * (n + 1) / 2);
    // result = (10 * (10 + 1)) / 2;
    return (10 * (10 + 1)) / 2;
}

// WAP which takes fname and lname of the user and returns the full name.
string FullName(string fname, string lname)
{
    return fname + " " + lname;
}
int main()
{
    int x = 30;
    int y = 50;
    // Storing the result in variable
    // int result = AddNumbers(x, y);
    // cout << "Sum :" << result << endl;
    // call the function within cout
    int z = 40;
    cout << "Result :" << AddNumbers(x, y, z) << endl;
    product(12, 3, 5);
    cout << "Sum of 1-10 Numbers :" << SumOfNaturalNum() << endl;
    cout << "Sum of 1-10 Numbers :" << SumOfNaturalNum2() << endl;
    string fname = "Arvinder";
    string lname = "Pal";
    cout << "Full Name :" << FullName(fname, lname) << endl;
}
