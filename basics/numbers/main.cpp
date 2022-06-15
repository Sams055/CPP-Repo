#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << 5 << "x" << 3 << "=" << 5*3 << endl;
    cout << "10%3="<< 10 % 3 << "\n"; // modulus operator = %

    //dividing with integers produces a floored value
    cout << 10 / 3 << endl;
    cout << 108 / 30 << endl; //should be 3.6 in decimal and should round up to 4, however, we floor integers, hence 3.6 becomes 3
    cout << 108.0 / 30 << endl; //as long as there is one decimal between two numbers being evaluating, we will now be able to get unrounded nums.

    //If we want to use certain math functions, import them using #include <cmath> as seen at the top.
    cout << pow(2, 5) << endl; // 2^5 = 32
    cout << sqrt(36) << endl; // square root of 36 = 6
    cout << round(4.3) << endl; //rounding down = 4
    cout << round(4.6) << endl; //rounding up = 5
    cout << floor(4.7) << endl; //flooring = 4
    cout << fmax(457, 324) << endl; //returns larger of the two numbers = 457
    cout << fmax(324, 457) << endl; //returns larger of the two numbers = 457
    cout << fmin(457, 324) << endl; //fmin returns smaller of the two numbers = 324
    cout << fmin(324, 457) << endl; //fmin returns smaller of the two numbers = 324

    return 0;
}
