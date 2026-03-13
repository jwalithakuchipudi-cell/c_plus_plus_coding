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
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    cout << "Total Vowel count :" << count << endl;

    return 0;
}