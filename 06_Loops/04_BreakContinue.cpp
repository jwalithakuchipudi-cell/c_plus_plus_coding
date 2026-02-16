#include <iostream>
using namespace std;

int main()
{
    cout << "=== BREAK / CONTINUE DEMONSTRATION ===\n\n";

    // 'break' immediately exits the loop.
    // 'continue' skips the rest of the current iteration and jumps to the next.

    cout << "Using break to stop at 6:\n";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break; // loop stops when i reaches 6
        }
        cout << i << " > ";
    }
    cout << " (loop ended)\n\n";

    cout << "Using continue to skip printing 6:\n";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue; // skip printing 6, go to next iteration
        }
        cout << i << " > ";
    }
    cout << " (loop completed all iterations except 6)\n\n";

    return 0;
}