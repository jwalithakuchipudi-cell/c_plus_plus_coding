#include <iostream>
using namespace std;

// ====================================================================
// RECURSION NOTES
// ====================================================================
/*
   What is Recursion?
   - Recursion is a programming technique where a function calls itself to solve a problem.
   - It breaks down a complex problem into smaller, similar subproblems until a trivial case (base case) is reached.

   Key Components of a Recursive Function:
   1. Base Case: The condition that stops the recursion. Without it, the function will call itself indefinitely.
   2. Recursive Case: The part where the function calls itself with modified arguments, moving toward the base case.

   Things to Keep in Mind:
   - Every recursive call should bring you closer to the base case.
   - Recursion uses the call stack; each call consumes memory.
   - Recursive solutions can be elegant but may be less efficient than iterative ones due to overhead.

   Common Pitfalls:
   - Missing or incorrect base case → infinite recursion (stack overflow).
   - Not making progress toward the base case → same problem.
   - Excessive recursion depth → stack overflow if the problem size is too large.
   - Redundant calculations (e.g., naive Fibonacci) → can be optimized with memoization.
   - Assuming recursion is always better; sometimes iteration is simpler and faster.
*/
// ====================================================================

// ======================
// 1. Sum of Numbers (1 to N)
// ======================

// Iterative approach (for comparison)
int sumIterative(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    return total;
}

// Recursive approach (decreasing)
// Base case: if n == 1, return 1 (smallest subproblem)
// Recursive case: n + sum of numbers from 1 to (n-1)
int sumRecursiveDesc(int n)
{
    if (n == 1)
    { // Base case
        return 1;
    }
    return n + sumRecursiveDesc(n - 1); // Recursive call (progress toward base case)
}

// Recursive approach (increasing) – demonstrates a different direction
// Base case: if n >= 10, return n (fixed upper limit)
// Recursive case: n + sum of numbers from (n+1) to 10
int sumRecursiveAsc(int n)
{
    if (n >= 10)
    { // Base case
        return n;
    }
    return n + sumRecursiveAsc(n + 1); // Recursive call (increasing n)
}

// ======================
// 2. Print Numbers from N down to 1
// ======================

// Recursive function to print numbers from n down to 1
void printNumbers(int n)
{
    if (n == 0)
    { // Base case: stop when n reaches 0
        return;
    }
    cout << n << " ";    // Process current number
    printNumbers(n - 1); // Recursive call with n-1 (progress)
}

// ======================
// 3. Factorial of a Number (N!)
// ======================

// Iterative approach
int factIterative(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Recursive approach
// Base case: n == 0 or n == 1, return 1 (0! = 1, 1! = 1)
// Recursive case: n * factorial of (n-1)
int factRecursive(int n)
{
    if (n == 0 || n == 1)
    { // Base case
        return 1;
    }
    return n * factRecursive(n - 1); // Recursive call (progress)
    // Note: For large n, this could cause stack overflow if n is too deep.
}

// ======================
// Main Function – Demonstrates all examples
// ======================
int main()
{
    cout << "=== Sum of Numbers (1 to 10) ===" << endl;
    cout << "Iterative: " << sumIterative(10) << endl;
    cout << "Recursive (descending): " << sumRecursiveDesc(10) << endl;
    cout << "Recursive (ascending): " << sumRecursiveAsc(1) << endl;

    cout << "\n=== Print Numbers from 10 to 1 ===" << endl;
    cout << "Output: ";
    printNumbers(10);
    cout << endl;

    cout << "\n=== Factorial of 5 ===" << endl;
    cout << "Iterative: " << factIterative(5) << endl;
    cout << "Recursive: " << factRecursive(5) << endl;

    return 0;
}