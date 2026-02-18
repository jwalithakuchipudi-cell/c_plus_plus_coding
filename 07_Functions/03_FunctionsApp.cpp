//
#include <iostream>
using namespace std;
// void F3()
// {
//     cout << "I am in F3" << endl;
// }
// void F2()
// {
//     F3();
//     cout << " I am done with F2" << endl;
// }
// void F1(int x)
// {
//     cout << "I am using x :" << x << endl;
// }
// string F1(string fname, string lname)
// {
//     // cout << "I am  :" << fname << " " << lname << endl;
//     int result = 0;
//     return fname + " " + lname;
//     // cout << "After return " << endl;
// }

int Add(int x, int y)
{
    return x + y;
}
// Parameters vs Arguments
int main()
{
    // cout << "Functions Importance " << endl;
    // F1(200);
    // F1(1200);
    // F1(20);
    // F1();
    // cout << result << endl;
    int result = Add(23, 45);
    cout << result;
    // cout << "Code completed";
}

// return and parameters

// 1. No return no parameters
void Fullname()
{
    // print result within the functions
}
// NO return with parameters
void Greet(string user)
{
    //
}

// with return type without parameters
int Counter()
{
    int x = 20;
    int y = 100;
    int result = x + y;
    return result;
}

// with return with parameters
float average(int a, int b, int c)
{
    int avg = (a + b + c) / 3;
    // cout << avg << endl;
    return avg;
}