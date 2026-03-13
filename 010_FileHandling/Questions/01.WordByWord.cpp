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

    while (file >> word)
    {
        cout << word << endl;
    }

    file.close();
    return 0;
}