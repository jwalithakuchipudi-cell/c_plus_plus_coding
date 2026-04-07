#include <iostream>
using namespace std;

// void PrintVar(int x, int y, int t, int s)
// {
//     cout << x << y << t << s;
// }
int main()
{
    // int x = 100;
    // int y = 20, t = 60, s = 40;
    // cout << x << endl;
    // // 5
    // // PrintVar(x, y, t, s);
    // x = 400;
    // cout << x << endl;
    // int arr[10];
    // zerpo indexing
    int arr[5] = {1, 22, 43, 56, 78};
    // //           0   1    2.  3.  4
    arr[3] = 200;

    cout << arr[0] << " - " << arr[3];

    return 0;
}