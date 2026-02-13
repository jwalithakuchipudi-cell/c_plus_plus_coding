// Conditionals in C++
// Assignment: Practice with if, else if, else, and switch statements

#include <iostream>
#include <string>

int main()
{
    std::cout << "Q1. Vowel Checker" << std::endl;
    // Write a program that takes a single character as input and determines if it's a vowel or consonant.
    // - Handle both uppercase and lowercase letters
    // - Use a switch statement with multiple case labels (e.g., case 'a': case 'e': ...)
    // - For non-alphabetic characters → "Not a letter"

    std::cout << "\nQ2. BMI Categorization" << std::endl;
    // Calculate BMI (Body Mass Index) using formula: BMI = weight(kg) / (height(m))²
    // Then categorize using if-else if-else:
    // - BMI < 18.5 → "Underweight"
    // - 18.5 ≤ BMI < 25 → "Normal"
    // - 25 ≤ BMI < 30 → "Overweight"
    // - BMI ≥ 30 → "Obese"
    // Print the BMI value and category.

    std::cout << "\nQ3. Ticket Price Calculator" << std::endl;
    // Calculate ticket price based on:
    // - Age (child: <12, adult: 12-64, senior: 65+)
    // - Day type (weekday/weekend)
    // - Student status (yes/no)

    // Rules:
    // - Base price: $10
    // - Children: 50% discount
    // - Seniors: 30% discount
    // - Students (adult age): 20% discount (only on weekdays)
    // - Weekend: +$2 extra

    std::cout << "\nQ4. Roman Numeral to Integer" << std::endl;
    // Convert Roman numerals to integers for values 1-10:
    // - I → 1
    // - II → 2
    // - III → 3
    // - IV → 4
    // - V → 5
    // - VI → 6
    // - VII → 7
    // - VIII → 8
    // - IX → 9
    // - X → 10
    // For invalid input → "Invalid Roman numeral"
    // Use if-else or a switch statement on a std::string (C++ doesn't allow switch on strings directly,
    // so you may use if-else or a map)

    std::cout << "\nQ5. Banking Transaction System" << std::endl;
    // Simulate banking operations:
    // - Input: transaction type ("deposit", "withdraw", "balance", "transfer")
    // - For deposit: add amount to balance
    // - For withdraw: check if sufficient balance
    // - For transfer: deduct from one account, add to another
    // - For invalid transaction → "Invalid operation"
    // Use if-else if-else or a series of comparisons to handle the transaction types.

    return 0;
}

// - - - - - - - - - - Theory Questions - - - - - - - - - - -

// Section 1: Multiple Choice Questions

// 1. What happens when no case matches in a switch statement and there is no default case?
//    a) Compilation error
//    b) Runtime error
//    c) Execution continues after the switch block
//    d) The first case is executed anyway

// 2. In C++, how do you explicitly fall through to the next case in a switch?
//    a) Automatic fallthrough by default
//    b) Use `continue`
//    c) Use `fallthrough` (C++17 and later requires [[fallthrough]] attribute)
//    d) It's not allowed

// 3. Which of the following is NOT a valid condition in an if statement?
//    a) if (true) { }
//    b) if (1) { }
//    c) if (x = 5) { }   // assignment
//    d) if (x > 5 && x < 10) { }

// 4. What is the scope of a variable declared inside a switch block (e.g., case 1: int x = 5;)?
//    a) The entire program
//    b) Only that case (if it's inside a block { }, otherwise potential cross-case initialization issues)
//    c) The entire switch block, but must be inside its own block to avoid crossing case boundaries
//    d) Only the function

// 5. Which is better for checking a single integral expression against many constant values?
//    a) Multiple if-else statements
//    b) switch statement
//    c) Both are exactly the same
//    d) Ternary operator

// Section 2: True/False Questions

// 1. T/F: In C++, braces {} are required around the body of an if statement even for single statements.
// 2. T/F: Switch cases in C++ are case-sensitive when comparing character constants.
// 3. T/F: You can use floating-point expressions in switch case labels.
// 4. T/F: The default case is mandatory in a switch statement.
// 5. T/F: In C++, the condition in an if statement must evaluate to a boolean expression.
