#include <iostream>
using namespace std;

double addNums(double num1, double num2);
double subNums(double num1, double num2);
double mulNums(double num1, double num2);
double divNums(double num1, double num2);

int main()
{
    double num1, num2;
    char numOp;
    double result;
    bool valid = true;
    cout << "Please enter the first number:";
    cin >> num1;
    cout << "Please enter the operator (+, -, *, /):";
    cin >> numOp;
    cout << "Please enter the second number:";
    cin >> num2;

    if (numOp == '+')
    {   result = addNums(num1, num2);
    }
    else if (numOp == '-')
    {
        result = subNums(num1, num2);
    }
    else if (numOp == '*')
    {
        result = mulNums(num1, num2);
    }
    else if (numOp == '/')
    {
        result = divNums(num1, num2);
    }
    else
    {
        cout << "Invalid operator" << endl;
        valid = false;
    }
    if (valid)
    {
        cout << num1 << " " << numOp << " " << num2 << " = " << result;
    }

    return 0;
}

double addNums(double num1, double num2)
{
    return num1 + num2;
}

double subNums(double num1, double num2)
{
    return num1 - num2;
}

double mulNums(double num1, double num2)
{
    return num1 * num2;
}

double divNums(double num1, double num2)
{
    return num1 / num2;
}