/*
IF-ELSE STATEMENTS IN C++
========================
Conditionals allow us to make decisions in our code based on certain conditions.
The if-else statement is the most basic form of conditional execution.

Key Points:
1. if can be used independently
2. else cannot exist without an if
3. We can have multiple else-if statements
4. else is always at the end (optional)
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=== IF-ELSE EXAMPLES ===\n"
         << endl;

    // Example 1: Simple if statement
    cout << "1. Simple if statement:" << endl;
    int age = 18;
    if (age >= 18)
    {
        cout << "   You are eligible to vote!" << endl;
    }
    cout << endl;

    // Example 2: if-else statement
    cout << "2. if-else statement:" << endl;
    int temperature = 25;
    if (temperature > 30)
    {
        cout << "   It's hot outside!" << endl;
    }
    else
    {
        cout << "   The weather is pleasant." << endl;
    }
    cout << endl;

    // Example 3: if-else if-else ladder
    cout << "3. if-else if-else ladder:" << endl;
    int score = 85;
    char grade;

    if (score >= 90)
    {
        grade = 'A';
        cout << "   Excellent! Grade: " << grade << endl;
    }
    else if (score >= 80)
    {
        grade = 'B';
        cout << "   Good job! Grade: " << grade << endl;
    }
    else if (score >= 70)
    {
        grade = 'C';
        cout << "   Average. Grade: " << grade << endl;
    }
    else if (score >= 60)
    {
        grade = 'D';
        cout << "   Needs improvement. Grade: " << grade << endl;
    }
    else
    {
        grade = 'F';
        cout << "   Failed. Grade: " << grade << endl;
    }
    cout << endl;

    // Example 4: Nested if-else statements
    cout << "4. Nested if-else statements:" << endl;
    int number = 42;

    if (number >= 0)
    {
        if (number == 0)
        {
            cout << "   The number is zero." << endl;
        }
        else if (number % 2 == 0)
        {
            cout << "   " << number << " is a positive even number." << endl;
        }
        else
        {
            cout << "   " << number << " is a positive odd number." << endl;
        }
    }
    else
    {
        cout << "   " << number << " is a negative number." << endl;
    }
    cout << endl;

    // Example 5: Multiple conditions using logical operators
    cout << "5. Multiple conditions with logical operators:" << endl;
    int time = 14; // 24-hour format

    if (time >= 6 && time < 12)
    {
        cout << "   Good morning!" << endl;
    }
    else if (time >= 12 && time < 17)
    {
        cout << "   Good afternoon!" << endl;
    }
    else if (time >= 17 && time < 21)
    {
        cout << "   Good evening!" << endl;
    }
    else
    {
        cout << "   Good night!" << endl;
    }
    cout << endl;

    // Example 6: Checking for invalid input
    cout << "6. Input validation example:" << endl;
    int marks = 105;

    if (marks < 0 || marks > 100)
    {
        cout << "   Error: Marks should be between 0 and 100!" << endl;
    }
    else if (marks >= 40)
    {
        cout << "   Congratulations! You passed with " << marks << " marks." << endl;
    }
    else
    {
        cout << "   Sorry! You failed with " << marks << " marks." << endl;
    }

    return 0;
}