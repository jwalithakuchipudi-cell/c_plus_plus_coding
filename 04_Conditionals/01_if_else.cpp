// Conditionals

// Sequential -- top to bottom

// if else

/*
if (condition){
// spme code - when condition is true
}
*/

#include <iostream>
using namespace std;

int main()
{
    // int number = 40;
    // if (number > 30)
    // {
    //     cout << "Number is greater than 30";
    // }

    // int number = 40;
    // if (number > 50)
    // {
    //     cout << "Number is greater than 30";
    // }
    // cout << "We will directly come here.As the condition is false";

    // int number = 60; // Change the number to see different output
    // if (number > 50)
    // {
    //     // This will execute if the condition is True
    //     cout << "Number is greater than 50";
    // }
    // else
    // {
    //     // This will execute if the condition is False
    //     cout << "Number is less than 50";
    // }

    // ---------------------- if else if else -------------
    // int number = -30; // Change the number to see different output
    // if (number > 0)
    // {
    //     // This will execute if the condition is True
    //     cout << "Number is positive";
    // }
    // else if (number == 0)
    // {
    //     cout << "Number is zero";
    // }
    // else
    // {
    //     // This will execute if the condition is False
    //     cout << "Number is negative";
    // }

    // if can be used independently
    // else can't come without if
    // We can have as many as else if between if and else
    // else will always be at the end

    // Nested Conditions

    // int number = -301;
    // if (number >= 0)
    // {
    //     if (number % 2 == 0)
    //     {
    //         cout << "Number is Even";
    //     }
    //     else
    //     {
    //         cout << "Number is Odd";
    //     }
    // }
    // else
    // {
    //     cout << "Number is non-positive";
    // }

    // int score = 30;

    // if (score >= 90)
    // {
    //     cout << "You have got grade A.";
    // }
    // else if (score >= 80)
    // {
    //     cout << "You have got grade B.";
    // }
    // else if (score >= 70)
    // {
    //     cout << "You have got grade C.";
    // }
    // else if (score >= 60)
    // {
    //     cout << "You have got grade D.";
    // }
    // else if (score >= 50)
    // {
    //     cout << "You have got grade E.";
    // }
    // else
    // {
    //     cout << "You have failed the exam.";
    // }

    // switch
    // int day = 10;
    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //     break;
    // case 3:
    //     cout << "Wednesday";
    //     break;
    // case 4:
    //     cout << "Thursday";
    //     break;
    // case 5:
    //     cout << "Friday";
    //     break;
    // case 6:
    //     cout << "Saturday";
    //     break;
    // case 7:
    //     cout << "Sunday";
    //     break;
    // default:
    //     cout << "Please enter a valid day (1-7).";
    // }

    // fallthrough
    // break

    // int day = 5;
    // switch (day)
    // {
    // case 1:
    // case 2:
    // case 3:
    // case 4:
    // case 5:
    //     cout << "Weekdays";
    //     break;
    // case 6:
    // case 7:
    //     cout << "Weekends";
    //     break;
    // default:
    //     cout << "Please enter a valid day (1-7).";
    // }

    // Ternary Operator

    int number = 34;
    // condition ? experession1 (if the condition is true) : expression2 (if the condition is false);
    // (number % 2 == 0) ? cout << "Even" : cout << "Odd";

    (number >= 0) ? (number % 2 == 0) ? cout << "Even and Positive" : cout << "Odd and Positive" : cout << "Negative";
}
