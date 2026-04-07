#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
private:
    string userName;
    double balance;
    int pin;

public:
    // setter
    void setAccountHolder(string name)
    {
        userName = name;
    }

    // getter
    string getuserName()
    {
        return userName;
    }

    void setBalance(double amount)
    {
        if (amount >= 0)
        {
            balance = amount;
        }
        else
        {
            cout << "Amount cannot be negative.";
            balance = 0;
        }
    }

    double getbalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount >= 0)
        {
            balance += amount;
            cout << "Amount deposited :" << amount << "New Balance :" << balance << endl;
        }
        else
        {
            cout << "Amount cannot be negative.";
        }
    }
};

int main()
{

    bankAccount sbi;

    sbi.setBalance(1200);
    cout << sbi.getbalance() << endl;

    cout << "SBI : " << &sbi << endl;
    bankAccount hdfc;
    hdfc.setBalance(2000);
    cout << hdfc.getbalance() << endl;
    cout << "HDFC : " << &hdfc << endl;
    return 0;
}