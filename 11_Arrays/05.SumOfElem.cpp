#include <iostream>
using namespace std;

int main()
{

    // Sum of all the elemenets
    int arr[5] = {1, 22, 143, 56, 78};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        // sum = arr[i] + sum;
        sum += arr[i];
    }
    cout << "Sum of array elements is :" << sum;

    return 0;
}