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
    string maxLengthWrd = "";

    while (file >> word)
    {
        if (word.length() > maxLengthWrd.length())
        {
            maxLengthWrd = word;
        }
    }

    // maxLengthWrd = "" -- length - 0

    // Arvinder -- From file -- 8 > 0
    // maxLengthWrd = "Arvinder"
    // GOlang -- 6       6 > 8
    // languages -- 9   9 > 8
    //  maxLengthWrd = "Languages"
    cout << "Word with max length :" << maxLengthWrd << " of " << maxLengthWrd.length();
    return 0;
}