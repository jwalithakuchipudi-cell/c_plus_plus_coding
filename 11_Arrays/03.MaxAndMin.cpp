#include <iostream>
using namespace std;

int main()
{

    // Max Element in the array
    int arr[5] = {1, 22, 143, 56, 78};

    int max = arr[0];

    // max = 1
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Min element in the array
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // cout
    printf("Max value is %d \n", max);
    printf("Min value is %d", min);

    return 0;
}