#include <iostream>
using namespace std;

int main()
{

    int x = 100;
    int *ptr = &x;
    cout << x << " " << ptr << " " << &ptr << endl;
    cout << *ptr << endl;
    return 0;
}