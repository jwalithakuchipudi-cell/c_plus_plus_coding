//

#include <iostream>
#include <bitset>
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

    // During left shift operator the num ber increase

    // 21 -         1 0 1 0 1
    // 21 << 2 --   0 1 0 0 0 <--

    // new_number_after_left_shift = original_number *2^(number of bits shifted)
    cout << 5 << endl;
    // 5 * 2 ^1 = 10
    cout << (5 << 1) << endl;
    // 5 * 2 ^2 = 20
    cout << (5 << 2) << endl;
    // 5 * 2 ^3 = 40
    cout << (5 << 3) << endl;

    // Right Shift Operator
    // 21 -         1 0 1 0 1
    // 21 >> 2 -->  0 0 1 0 1

    // Right Shift -- In the right shift , we shift the number to the right by adding zeros on the left side.
    // During the right shift , the number decreases
    cout << 5 << endl;
    // 5 / 2 ^1 = 2
    cout << (5 >> 1) << 5 / 2 << endl;
    // 5 / 2 ^2 = 1
    cout << (5 >> 2) << 5 / 4 << endl;
    // 5 / 2 ^3 = 0
    cout << (5 >> 3) << 5 / 8 << endl;

    //  new_number_after_right_shift = original_number / 2^(number of bits shifted)

    // example -- 8 shifted 3 bits
    // cout << "8 << 3: " << (8 << 3) << endl;
    // cout << "8 >> 3: " << (8 >> 3) << endl;

    // XOR - Exclusive OR
    /*
    Bitwise XOR operator :
    condition1        Condition2        Result
    1                   1                 0
    1                   0                 1
    0                   1                 1
    0                   0                 0
*/

    // 11 - 8 +2 + 1 --   0 1 0 1 1
    // 19 - 16 + 2 + 1 -- 1 0 0 1 1
    //                    1 1 0 0 0 - 24

    cout << "11 ^ 19 :" << "Binary of 11 :" << bitset<4>(11) << " " << (11 ^ 19) << endl;

    return 0;
}

/*
17  -- 16 + 1
2^5 2^4 2^3 2^2 2^1 2^0
    1   0    0   0   1

34 -- 32 +2
1 0 0 0 1 0
*/