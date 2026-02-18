#include <iostream>
#include <string>
using namespace std;

int main() {
    string roman;

    cout << "\nQ4. Roman Numeral to Integer" << endl;
    cout << "Enter Roman Numeral (I to X): ";
    cin >> roman;

    if (roman == "I")
        cout << "Integer value = 1";
    else if (roman == "II")
        cout << "Integer value = 2";
    else if (roman == "III")
        cout << "Integer value = 3";
    else if (roman == "IV")
        cout << "Integer value = 4";
    else if (roman == "V")
        cout << "Integer value = 5";
    else if (roman == "VI")
        cout << "Integer value = 6";
    else if (roman == "VII")
        cout << "Integer value = 7";
    else if (roman == "VIII")
        cout << "Integer value = 8";
    else if (roman == "IX")
        cout << "Integer value = 9";
    else if (roman == "X")
        cout << "Integer value = 10";
    else
        cout << "Invalid Roman numeral";

    return 0;
} 


