#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
    cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
    cout << num1 << "^" << num2 << "=" << pow(num1,num2) << endl;

    return 0;
}
