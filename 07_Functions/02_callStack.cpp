#include <iostream>
using namespace std;
void F3()
{
    cout << "I am in F3" << endl;
}
void F2()
{
    F3();
    cout << " I am done with F2" << endl;
}
void F1()
{
    cout << "I am in F1" << endl;
    F2();
    cout << " I am done with F1" << endl;
}

int main()
{
    cout << "Call Stack Demo " << endl;
    F1();
    cout << "Code completed";
}