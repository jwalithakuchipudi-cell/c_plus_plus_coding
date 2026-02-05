#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter your number";
    cin >> x;
    cin.ignore();

    cout << "value of x is : " << x << endl;
    return 0;
}