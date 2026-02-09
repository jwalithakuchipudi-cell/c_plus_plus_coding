//

#include <iostream>
using namespace std;
int main()
{
    // Bitwise Operator

    // 5 - 1 0 1
    // 7 - 1 1 1

    // AND , OR , XOR , NOT , Left Shift , Right Shift

    // AND --

    /*
    Bitwise AND operator :
    condition1        Condition2        Result
    1                   1                 1
    1                   0                 0
    0                   1                 0
    0                   0                 0
*/

    // 5 - 1 0 1
    // 7 - 1 1 1
    //     1  0  1
    //
    cout << "Logical AND ------------------ \n";
    cout << "5 & 7: " << (5 & 7) << endl;

    // 12 -         0 1 1 0 0

    // 21 -         1 0 1 0 1

    // 21 & 12 =    0  0  1  0  0
    cout << "12 & 21: " << (12 & 21) << endl;

    /*
    Bitwise OR operator :
    condition1        Condition2        Result
    1                   1                 1
    1                   0                 1
    0                   1                 1
    0                   0                 0
*/
    // 5 - 1 0 1
    // 7 - 1 1 1

    //     1  1  1 -- 7
    cout << "Logical OR ------------------ \n ";
    cout << "5 | 7: " << (5 | 7) << endl;

    // 12 -         0 1 1 0 0

    // 21 -         1 0 1 0 1

    // 21 | 12 =    1  1  1  0  1
    cout << "12 | 21: " << (12 | 21) << endl;

    // Left Shift -- I need to shift the bits towards left by adding extra zeros on the right side

    // During left shioft operator the num ber increase

    // 21 -         1 0 1 0 1
    // 21 << 2 --   0 1 0 0 0

    // new_number_after_left_shift = original_number *2^(number of bits shifted)
    cout << 5 << endl;
    // 5 * 2 ^1 = 10
    cout << (5 << 1) << endl;
    // 5 * 2 ^2 = 20
    cout << (5 << 2) << endl;
    // 5 * 2 ^3 = 40
    cout << (5 << 3) << endl;
    return 0;
}