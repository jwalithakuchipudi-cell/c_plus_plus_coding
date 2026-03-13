#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    if (!file)
    {
        cout << "File not found" << endl;
        return 1;
    }

    char ch;
    int count = 0;

    while (file.get(ch))
    {
        count++;
    }
    cout << "Total Character count :" << count << endl;

    return 0;
}