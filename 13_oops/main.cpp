#include <iostream>
#include <string>
using namespace std;

// OOPS --
// ATM -- withdrawal , Deposit , Check balance , Change Keys

// ATM -- SBI ATM
// ATM -- ICICI

// Blueprint -- Class
// Objects -- Object is an running instance of class
// ONly an object can access the fileds inside the class
// Objects are data (variables) and behaviour (methods)

// Function vs Method
// ObjectName.MethodName()

class Car
{
public:
    // Attributes
    string brand;
    int year;

    // method
    void displayInfo()
    {
        cout << "Brand :" << brand << " " << "Year:" << year << endl;
    }
};

int main()
{

    // Object creation
    Car myCar;
    // cout << brand;
    myCar.brand = "12334";
    myCar.year = 1997;
    cout << myCar.brand << endl;

    myCar.displayInfo();

    // Audi
    Car audi;
    // cout << brand;
    audi.brand = "AUDI";
    audi.year = 2000;
    cout << myCar.brand;
    cout << audi.brand;
    audi.displayInfo();
    return 0;
}

// class {
// private : fields
// public : setters , getters --- Data Hiding
// }