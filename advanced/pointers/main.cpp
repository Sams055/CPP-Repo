#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int age = 19;
    double cost = 3.50;
    string name = "sam";

    //&x; tells c++ to print out the memory address where the value x is stored.
    // cout << &age << endl; this prints the hexadecimal number of where it is stored.

    //any memory address we are using is called a pointer.
    cout << "Age: " << &age << endl;
    cout << "Cost: " << &cost << endl;
    cout << "Name: " << &name << endl << endl;

    /* However, we don't really have a use for the addresses above
       what we will most likely be doing is setting a pointer to a
       variable itself. We can do this with a *                    */

    int *pAge = &age; //an integer pointer pAge stores the memory address of age.
    double *pCost = &cost; //a double pointer pCost stores the memory address of cost.
    string *pName = &name; //a string pointer pName stores the memory address of cost.

    cout << "Age: " << pAge << endl;
    cout << "Cost: " << pCost << endl;
    cout << "Name: " << pName << endl << endl;

    //De-referencing a pointer.
    /* By using *x we will get the value stored at the
       memory address the pointer was representing */

    cout << "Age: " << *pAge << endl;
    cout << "Cost: " << *pCost << endl;
    cout << "Name: " << *pName << endl << endl;

    //We can also de-reference the original variable

    cout << "Age: " << *&age << endl;
    cout << "Cost: " << *&cost << endl;
    cout << "Name: " << *&name << endl << endl;

    return 0;
}
