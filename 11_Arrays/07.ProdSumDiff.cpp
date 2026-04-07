#include <iostream>
using namespace std;

int main()
{

    // Sum of all the elemenets
    int arr[5] = {1, 22, 143, 56, 78};

    // Print the diff of Product and sum of all the numbers in the array

    int sum = 0;
    // Additive Identity
    int product = 1;
    // Multiplicative Identity

    for (int i = 0; i < 5; i++)
    {
        // sum = sum + arr[i];
        // product = product * arr[i];
        sum += arr[i];
        product *= arr[i];
    }

    // int Diff = product - sum;
    cout << "Diff of Product and Sum of array :" << product - sum;
    return 0;
}