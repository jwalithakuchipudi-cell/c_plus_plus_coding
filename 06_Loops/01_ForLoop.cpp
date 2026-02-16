#include <iostream>
using namespace std;

int main()
{
    cout << "=== FOR LOOP DEMONSTRATION ===\n\n";

    // Syntax: for (initialisation; condition; increment/decrement) { body }
    // Execution order:
    // 1. initialisation – runs once at the beginning.
    // 2. condition check – evaluated before each iteration.
    // 3. loop body – executed if condition is true.
    // 4. increment/decrement – performed after the body.
    // Then repeat from step 2 until condition becomes false.

    // Example 1: Count from 0 to 9
    cout << "Counting from 0 to 9:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Example 2: Count down from 10 to 0
    cout << "Counting down from 10 to 0:\n";
    for (int i = 10; i >= 0; i--)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Example 3: Sum of first 10 natural numbers (1 to 10)
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i; // same as sum = sum + i
    }
    cout << "Sum of numbers 1 through 10 = " << sum << "\n\n";

    return 0;
}