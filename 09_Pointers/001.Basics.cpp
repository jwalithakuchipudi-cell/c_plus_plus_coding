#include <iostream>

using namespace std;

int main()
{

    int marks = 40;
    int *ptr = &marks;
    int salary = 10000;
    int *ptr2 = &salary;
    // int* ptr3 = &salary;
    // int * ptr3 = &salary;
    // cout << "Vaue of marks :" << marks << endl;
    // cout << "Vaue of marks :" << ptr << endl;
    // cout << "Vaue of salary :" << salary << endl;
    // cout << "Vaue of Salary :" << ptr2 << endl;

    // Derefrencing of pointers
    cout << "Vaue of marks :" << marks << endl;
    cout << "Vaue of marks (*) :" << *ptr << endl;
    cout << "Vaue of salary :" << salary << endl;
    cout << "Vaue of Salary (*):" << *ptr2 << endl;

    return 0;
}
