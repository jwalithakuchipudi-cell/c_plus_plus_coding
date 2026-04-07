// int x = 30
// x = 40
// Arrays -- Multiple values
//

#include <iostream>
using namespace std;

struct Student
{
    // Data memebers
    int x;
    string name;
    bool IsTrue;

    struct NextLevel
    {
        int var1;
        int var2;
        string name;
    };
    NextLevel NextLevel;
    // Function memebers
    void DisplayInfo()
    {
        cout << x << " " << name;
    }
};
int main()
{
    Student S1;
    S1.x = 100;
    S1.name = "C COurse";
    S1.name = "MyName";
    S1.NextLevel.var1 = 345;
    cout << S1.NextLevel.var1;
    S1.DisplayInfo();

    return 0;
}
