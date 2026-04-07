#include <iostream>
using namespace std;

int main()
{

    // Sum of all the elemenets
    int arr[5] = {1, 22, 143, 56, 78};

    int EvenSum = 0;
    int OddSum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            EvenSum = arr[i] + EvenSum;
        }
        else
        {
            OddSum = arr[i] + OddSum;
        }
    }
    cout << "Even Sum is : " << EvenSum;
    cout << "\nOdd Sum is :" << OddSum;
    return 0;
}