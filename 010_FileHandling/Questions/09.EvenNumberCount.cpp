#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream file("data.txt");

    if (!file)
    {
        cout << "FIle not found" << endl;
        return 1;
    }

    string word;
    int count = 0;

    // while (file >> word)
    // {
    //     if (word.length() % 2 == 0)
    //     {
    //         count++;
    //     }
    // }

    string Hello = "Good Morning";

    //              0 1 2 3
    cout << Hello[Hello.length() - 1];

    return 0;
}