#include <iostream>
using namespace std;

int pow(int, int);

int main() {
    cout << pow(2,3) << endl; // 2^3 = 8
    cout << pow(60, 0) << endl; // 60^0 = 1
    cout << pow(30, 1) << endl; // 30^1 = 30
    return 0;
}

int pow(int base, int power)
{
    int result = 1; //x^0 = 1 (our base case)
    for (int i=0;i < power; i++)
    {
        result = result * base;
    }
    return result;
}