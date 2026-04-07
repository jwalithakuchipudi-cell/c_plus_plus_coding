#include <iostream>
using namespace std;

int main()
{
    try
    {
        int score = 1;

        if (score > 0)
        {
            throw score;
        }
        else
        {

            throw -1;
        }
    }
    catch (int i)
    {
        cout << i << endl;
    }
    catch (string i)
    {
        cout << i << endl;
    }
    catch (double i)
    {
        cout << i << endl;
    }

    return 0;
}
