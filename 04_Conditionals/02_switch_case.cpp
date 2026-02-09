/*
SWITCH STATEMENTS IN C++
========================
The switch statement provides an efficient way to handle multiple conditions
based on the value of a single variable/expression.

Key Points:
1. Works with integral types (int, char, enum) and strings (in C++17+)
2. Each case must have a unique constant value
3. break statement is needed to exit the switch (otherwise fall-through occurs)
4. default case handles all other values (optional)
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=== SWITCH STATEMENT EXAMPLES ===\n"
         << endl;

    // Example 1: Basic switch with days of the week
    cout << "1. Days of the week:" << endl;
    int day = 3;

    switch (day)
    {
    case 1:
        cout << "   Monday: Start of the work week!" << endl;
        break;
    case 2:
        cout << "   Tuesday" << endl;
        break;
    case 3:
        cout << "   Wednesday: Midweek!" << endl;
        break;
    case 4:
        cout << "   Thursday" << endl;
        break;
    case 5:
        cout << "   Friday: Weekend is near!" << endl;
        break;
    case 6:
        cout << "   Saturday: Weekend!" << endl;
        break;
    case 7:
        cout << "   Sunday: Weekend!" << endl;
        break;
    default:
        cout << "   Invalid day! Please enter 1-7." << endl;
    }
    cout << endl;

    // Example 2: Switch with characters
    cout << "2. Traffic light system:" << endl;
    char signal = 'Y'; // R=Red, Y=Yellow, G=Green

    switch (signal)
    {
    case 'R':
    case 'r':
        cout << "   STOP! Red light." << endl;
        break;
    case 'Y':
    case 'y':
        cout << "   GET READY! Yellow light." << endl;
        break;
    case 'G':
    case 'g':
        cout << "   GO! Green light." << endl;
        break;
    default:
        cout << "   Invalid signal!" << endl;
    }
    cout << endl;

    // Example 3: Deliberate fall-through (multiple cases with same output)
    cout << "3. Weekday vs Weekend using fall-through:" << endl;
    int dayNumber = 6;

    switch (dayNumber)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "   It's a weekday. Time to work!" << endl;
        break;
    case 6:
    case 7:
        cout << "   It's weekend. Time to relax!" << endl;
        break;
    default:
        cout << "   Invalid day number!" << endl;
    }
    cout << endl;

    // Example 4: Switch with simple calculator
    cout << "4. Simple calculator:" << endl;
    char operation = '+';
    int a = 10, b = 5, result;

    switch (operation)
    {
    case '+':
        result = a + b;
        cout << "   " << a << " + " << b << " = " << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "   " << a << " - " << b << " = " << result << endl;
        break;
    case '*':
        result = a * b;
        cout << "   " << a << " * " << b << " = " << result << endl;
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
            cout << "   " << a << " / " << b << " = " << result << endl;
        }
        else
        {
            cout << "   Error: Division by zero!" << endl;
        }
        break;
    default:
        cout << "   Invalid operation!" << endl;
    }
    cout << endl;

    // Example 5: Menu-driven program
    cout << "5. Restaurant menu:" << endl;
    int choice = 2;

    switch (choice)
    {
    case 1:
        cout << "   You ordered: Pizza - $12.99" << endl;
        break;
    case 2:
        cout << "   You ordered: Burger - $8.99" << endl;
        break;
    case 3:
        cout << "   You ordered: Pasta - $10.99" << endl;
        break;
    case 4:
        cout << "   You ordered: Salad - $6.99" << endl;
        break;
    case 5:
        cout << "   You ordered: Drink - $2.99" << endl;
        break;
    default:
        cout << "   Invalid choice! Please select 1-5." << endl;
    }

    return 0;
}