#include <iostream>

using namespace std;

int main()
{

    // int numbers[] = {10, 20, 50, 300, 500, 60};
    // int *ptr = numbers;
    // cout << ptr << "   -     " << &numbers[0] << endl;
    // cout << *ptr << endl;
    // cout << *(ptr + 1) << endl;

    // double pointers
    int age = 100;
    int *ptr = &age;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    cout << "Age : " << age << " Address of Age : &age " << &age << endl;
    cout << "First Pointer to age : " << ptr << " Address of Age : *ptr " << *ptr << endl;
    cout << "Double Pointer to age : " << ptr2 << " Address of Age : **ptr " << **ptr2 << endl;
    cout << "First Pointer to age : " << ptr3 << " Address of Age : ***ptr " << ***ptr3 << endl;
    return 0;
}

// Avoid passing pointers to local variables to another function
//  Always delete pointers to dynamic elements
//  Set pointer to null once deleted
// Only use pointers when you want to modify the originial data
