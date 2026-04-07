#include <iostream>
using namespace std;

void PrintArray(int arr[], int n, int x)
{
    arr[3] = 400;
    x = 500;
    cout << x << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Sum of all the elemenets
    int arr[5] = {1, 22, 143, 56, 78};
    int x = 100;
    PrintArray(arr, 5, x);

    cout << "\n"
         << x << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
