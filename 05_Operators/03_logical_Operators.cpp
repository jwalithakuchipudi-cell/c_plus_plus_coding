// Logical Operators

// AND -- &&  OR-- ||  NOT - !

#include <iostream>
using namespace std;

int main()
{
    // AND -- False - 0 True - 1

    /*
    condition1        Condition2           result
    True              True                 True
    True              False                False
    False             True                 False
    False             False                False
    */

    bool isReady = true;
    bool notReady = false;
    bool notSet = true;

    cout << "True and False :" << (isReady && notReady) << endl;
    cout << "True and True :" << (isReady && notSet) << endl;
    cout << "False and False :" << (notReady && notReady) << endl;
    cout << "False and True :" << (notReady && notSet) << endl;

    /*
    Logical OR operator :
    condition1        Condition2           result
    True              True                 True
    True              False                True
    False             True                 True
    False             False                False
*/

    cout << "Logical OR ----------------------------- \n";
    cout << "True and False :" << (isReady || notReady) << endl;
    cout << "True and True :" << (isReady || notSet) << endl;
    cout << "False and False :" << (notReady || notReady) << endl;
    cout << "False and True :" << (notReady || notSet) << endl;

    // Logical NOT !
    cout << "Logical NOT ----------------------------- \n";
    cout << "Input (True), Output :" << !isReady << endl;
    cout << "Input (False), Output:" << !notReady << endl;

    return 0;
}
