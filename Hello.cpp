/*
#include <iostream> --
This is a preprocessor directive.
It tells the compiler to include the contents of the iostream header file.
 */
#include <iostream>
using namespace std;

// ==============================================
// MAIN FUNCTION - Program Entry Point
// ==============================================
int main()
{
    // Variable declaration
    int x; // Integer variable (whole numbers)

    // Single line comment - prints "Hello World"
    cout << "Hello World";

    // to take input from user
    cin >> x;

    // ------------------------------------------
    // DATA TYPES IN C++
    // ------------------------------------------
    /*
     * INTEGER: 23, 100, 300     (whole numbers)
     * FLOAT:   34.5, 67.78      (decimal numbers)
     * STRING:  "Hello World"    (text)
     * BOOL:    true, false      (boolean values)
     */
    // INTEGER: whole numbers
    int age = 23;

    // FLOAT: decimal numbers
    float price = 34.5;

    // STRING: text
    string message = "Hello World";

    // BOOL: boolean values
    bool isActive = true;

    // Print examples
    cout << "Integer: " << age << endl;
    cout << "Float: " << price << endl;
    cout << "String: " << message << endl;
    cout << "Bool: " << isActive << endl;

    // ------------------------------------------
    // VARIABLE NAMING RULES
    // ------------------------------------------
    // RULE 1: NO special symbols except underscore (_)
    int age_20;   // ✅ VALID - underscore allowed
    int my_score; // ✅ VALID - underscore allowed

    // Uncomment the below to see the error
    // int age @20;     // ❌ INVALID - @ not allowed
    // int user - name; // ❌ INVALID - dash not allowed

    // RULE 2: Digits allowed but NOT at beginning
    int age1;    // ✅ VALID - digit at end
    int player2; // ✅ VALID - digit in middle

    // Uncomment the below to see the error
    // int 1age;    // ❌ INVALID - digit at start
    // int 2player; // ❌ INVALID - digit at start

    // RULE 3: Cannot use reserved keywords
    int total; // ✅ VALID - not a keyword
    int score; // ✅ VALID - not a keyword
    int main;  // ❌ INVALID - reserved keyword

    // Uncomment the below to see the error
    // int return; // ❌ INVALID - reserved keyword
    // int cout;   // ❌ INVALID - reserved for cout

    // RULE 4: Use descriptive names
    int student_age; // ✅ VALID - descriptive
    int sa;          // ❌ INVALID - not descriptive
    int temp_score;  // ✅ VALID - descriptive
    int ts;          // ❌ INVALID - not descriptive

    // Other examples:
    int _age; // ✅ VALID - underscore allowed
    int Age;  // ✅ VALID - uppercase different
    int age2; // ✅ VALID - lowercase okay

    return 0; // Program ends successfully
}

// ==============================================
// CONSOLE OPERATIONS SUMMARY
// ==============================================
/*
 * cout -> Console Output (Monitor/Terminal)
 * cin  -> Console Input (Keyboard/Terminal)
 */

// ==============================================
// COMPILER vs INTERPRETER
// ==============================================
/*
 * COMPILER:
 * - Translates entire source code to machine code at ONCE
 * - Creates executable file that can run independently
 * - Examples: GCC, Clang, Visual C++ Compiler
 * - Advantages: Faster execution, better optimization
 * - Disadvantages: Longer build time, platform-dependent
 *
 * INTERPRETER:
 * - Translates and executes code LINE BY LINE
 * - Needs interpreter at runtime
 * - Examples: Python, JavaScript, PHP
 * - Advantages: Platform-independent, easier debugging
 * - Disadvantages: Slower execution, requires interpreter
 *
 * KEY DIFFERENCE:
 * Compiler: Entire code → Machine code → Execute
 * Interpreter: Code → Line-by-line translation/execution
 */

// ==============================================
// C++ LANGUAGE CHARACTERISTICS
// ==============================================
/*
 * STATICALLY TYPED:
 * - Variable types declared at compile-time
 * - Type checking occurs during compilation
 * - Examples: C++, Java, C#
 *
 * COMPILED LANGUAGE:
 * - Requires compilation before execution
 * - Source code → Object code → Executable
 * - Examples: C, C++, Go, Rust
 */