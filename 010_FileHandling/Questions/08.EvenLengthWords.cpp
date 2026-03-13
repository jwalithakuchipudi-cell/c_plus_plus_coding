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

    while (file >> word)
    {
        if (word.length() % 2 == 0)
        {
            count++;
        }
    }
    cout << "Words with even length :" << count;
    return 0;
}