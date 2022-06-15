#include <iostream>
using namespace std;

void printAddNums(int num1, int num2){
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
}

void printSubNums(int num1, int num2);
//If we want to use a function after main, we have to declare it before main. (we call this a function stub).

int squareNum(int num1);


int main(){ //main is the code that gets executed when the program is executed

    // Void functions have no return values
    printAddNums(3, 4);
    printSubNums(3, 4);

    //Here, we can get values back instead.
    int squareNumber = squareNum(3); //base number = 3
    cout << squareNumber << endl; //3^2 = 3*3 = 9
    cout << squareNum(squareNumber) << endl; //9^2 = 9*9 = 81
    return 0;
    //when we type return, the function is over, hence nothing will execute after it.
    cout << "this should not output anything";
}

void printSubNums(int num1, int num2){
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
}

int squareNum(int num1)
{
    return num1*num1;
}