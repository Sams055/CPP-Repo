#include <iostream>
using namespace std;

/* The number S is called the mean of two numbers R1 and R2 if S is equal to (R1+R2)/2.
 * Mirko’s birthday present for Slavko was two integers R1 and R2.
 * Slavko promptly calculated their mean which also happened to be an integer but then lost R2!
 * Help Slavko restore R2.
 * The first and only line of input contains two integers R1 and S, both between −1000 and 1000.
 * Output R2 on a single line.
 *
 * Sample Input 1	Sample Output 1
 *  11 15           19
 *  Sample Input 2	Sample Output 2
 *  4 3             2
 *
 */

int main() {
    int r1, r2, mean;
    cout << "Sample Input 1" << endl;
    cin >> r1 >> mean;
    //mean == (r1 + r2) / 2
    //r2 = (mean*2) - r1
    r2 = (2*mean) - r1;
    cout << "Sample Output 1" << endl;
    cout << r2 << endl;

    return 0;
}
