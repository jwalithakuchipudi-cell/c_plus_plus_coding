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
    bool found = false;

    searchingInput = "python";

    // cout <<"Enter your word to be searched :";
    // cin >>  searchingInput ;

    while (file >> word)
    {
        if (word == searchingInput)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Word Found \n";
    }
    else
    {
        cout << "Word not Found \n";
    }

    return 0;
}