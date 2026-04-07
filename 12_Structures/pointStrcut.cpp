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
};
// void DisplayInfo(Student S1)
// {
//     S1.x = 200;
//     cout << S1.x << " " << S1.name;
// }

void DisplayInfo(Student &S1)
{
    S1.x = 200;
    cout << S1.x << " " << S1.name;
}
int main()
{
    Student S1;
    S1.x = 100;
    S1.name = "C Course";

    Student *ptr = &S1;
    DisplayInfo(*ptr);

    // DisplayInfo(S1);

    return 0;
}
