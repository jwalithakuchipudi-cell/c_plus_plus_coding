/*
TERNARY OPERATOR IN C++
========================
The ternary operator (?:) is a shorthand for if-else statements.
Syntax: condition ? expression_if_true : expression_if_false

Key Points:
1. It returns a value (can be assigned to a variable)
2. More concise than if-else for simple conditions
3. Can be nested (but can become hard to read)
4. Both expressions must be of compatible types
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=== TERNARY OPERATOR EXAMPLES ===\n"
         << endl;

    // Example 1: Basic ternary operator
    cout << "1. Basic ternary operator:" << endl;
    int number = 15;

    // Using ternary to check even/odd
    string result = (number % 2 == 0) ? "even" : "odd";
    cout << "   " << number << " is " << result << "." << endl;
    cout << endl;

    // Example 2: Direct output with ternary
    cout << "2. Direct output with ternary:" << endl;
    int age = 20;

    cout << "   ";
    (age >= 18) ? cout << "Adult" : cout << "Minor";
    cout << endl
         << endl;

    // Example 3: Finding maximum of two numbers
    cout << "3. Finding maximum of two numbers:" << endl;
    int x = 25, y = 30;
    int max = (x > y) ? x : y;

    cout << "   Maximum of " << x << " and " << y << " is: " << max << endl;
    cout << endl;

    // Example 4: Nested ternary operator
    cout << "4. Nested ternary operator:" << endl;
    int num = 0;

    string type = (num > 0) ? "positive" : (num < 0) ? "negative"
                                                     : "zero";

    cout << "   The number " << num << " is " << type << "." << endl;
    cout << endl;

    // Example 5: Grading system with ternary
    cout << "5. Grading system with ternary:" << endl;
    int marks = 88;

    string grade = (marks >= 90) ? "A+" : (marks >= 80) ? "A"
                                      : (marks >= 70)   ? "B"
                                      : (marks >= 60)   ? "C"
                                      : (marks >= 50)   ? "D"
                                                        : "F";

    cout << "   Marks: " << marks << " -> Grade: " << grade << endl;
    cout << endl;

    // Example 6: Using ternary for simple validation
    cout << "6. Input validation with ternary:" << endl;
    int input = -5;

    string status = (input >= 0) ? ((input % 2 == 0) ? "positive even" : "positive odd") : "negative";

    cout << "   Input: " << input << " -> " << status << endl;
    cout << endl;

    // Example 7: Comparing ternary with if-else equivalent
    cout << "7. Comparison with if-else:" << endl;
    int a = 10, b = 20;

    // Using ternary
    string comparisonTernary = (a > b) ? "greater" : (a < b) ? "less"
                                                             : "equal";

    // Equivalent if-else
    string comparisonIfElse;
    if (a > b)
    {
        comparisonIfElse = "greater";
    }
    else if (a < b)
    {
        comparisonIfElse = "less";
    }
    else
    {
        comparisonIfElse = "equal";
    }

    cout << "   Ternary result: " << a << " is " << comparisonTernary
         << " than " << b << endl;
    cout << "   If-else result: " << a << " is " << comparisonIfElse
         << " than " << b << endl;
    cout << endl;

    // Example 8: Practical use - Discount calculation
    cout << "8. Discount calculation:" << endl;
    float amount = 1500.0;
    float discount = (amount > 1000) ? 0.20 : // 20% discount
                         (amount > 500) ? 0.10
                                        : // 10% discount
                         0.0;             // No discount

    float finalAmount = amount - (amount * discount);

    cout << "   Original amount: $" << amount << endl;
    cout << "   Discount rate: " << (discount * 100) << "%" << endl;
    cout << "   Final amount: $" << finalAmount << endl;

    return 0;
}