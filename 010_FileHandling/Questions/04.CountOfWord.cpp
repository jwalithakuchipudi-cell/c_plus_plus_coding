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

    string word, searchingInput;
    int count = 0;

    searchingInput = "Python";

    while (file >> word)
    {
        if (word == searchingInput)
        {
            count++;
        }
    }

    cout << searchingInput << " comes " << count << " times" << endl;
    return 0;
}