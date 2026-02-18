#include<iostream>
using namespace std;
int main(){
    string type;
     float acc1,acc2,amount;
    cout<<"bank account transfer"<<endl;
    cout<<"enter balance of account 1:";
    cin>>acc1;
    cout<<"enter balance of account 2:";
    cin>>acc2;
    cout<<"enter amount of transfer:";
    cin>>type;
    if(type=="deposit")
    {
        cout << "Enter amount to deposit in Account 1: ";
        cin >> amount;
        acc1 = acc1 + amount;
        cout << "New Balance of Account 1 = " << acc1;
    }

    else if(type == "withdraw")
    {
        cout << "Enter amount to withdraw from Account 1: ";
        cin >> amount;

        if(amount <= acc1)
        {
            acc1 = acc1 - amount;
            cout << "New Balance of Account 1 = " << acc1;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }

    else if(type == "balance")
    {
        cout << "Account 1 Balance = " << acc1 << endl;
        cout << "Account 2 Balance = " << acc2;
    }

    else if(type == "transfer")
    {
        cout << "Enter amount to transfer from Account 1 to Account 2: ";
        cin >> amount;

        if(amount <= acc1)
        {
            acc1 = acc1 - amount;
            acc2 = acc2 + amount;

            cout << "Transfer Successful" << endl;
            cout << "Account 1 Balance = " << acc1 << endl;
            cout << "Account 2 Balance = " << acc2;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }

    else
    {
        cout << "Invalid operation";
    }

    return 0;
}
//mcqs
//1. c)execution continues after the switch block
//2. c)use [[fall throught]](c++17 and later)
//3. c)if(x=5)is usually considered wrong in exams because it is assignment,not comparision
//4. c) the entire swtich block,but must be inside its own block to avoid crossing case boundaries
//5. b)switch statement
//true or false
//1.false
//2.true
//3.false
//4.false
//5.true