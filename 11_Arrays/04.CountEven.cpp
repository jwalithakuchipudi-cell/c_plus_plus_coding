#include <iostream>
using namespace std;

int main()
{

    // Count number of even values in the array
    int arr[5] = {1, 22, 143, 56, 78};

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << "Total Even numbers :" << count;

    return 0;
}