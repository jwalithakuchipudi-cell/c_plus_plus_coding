// 1. Read a File Word by Word

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream file("data.txt");

    if (!file)
    {
        cout << "File not found \n";
        return 1;
    }

    string word;
    int count = 0;

    while (file >> word)
    {
        count++;
    }

    cout << "Total Words: " << count << endl;
    file.close();
    return 0;
}