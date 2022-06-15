#include <iostream>
using namespace std;

int main() {
    int niceNums[] = {4,1,2,69,2}; //array given length according to how many initial values put in.
    cout << niceNums[0] << "+" << niceNums[3] << "=" << niceNums[0]+niceNums[3] << endl;
    niceNums[3] = 65; //changing array value
    cout << niceNums[0] << "+" << niceNums[3] << "=" << niceNums[0]+niceNums[3] << endl;

    //In this case, by putting in a specified fixed length, we now have extra array spaces to work with.
    int niceNums2[20] = {4,1,2,69,2};
    niceNums2[15] = 4;
    cout << niceNums2[0] << "-" << niceNums2[15] << "=" << niceNums2[0]-niceNums2[15] << endl;
    niceNums2[15] = 2; //changing array value
    cout << niceNums2[0] << "-" << niceNums2[15] << "=" << niceNums2[0]-niceNums2[15] << endl;

    //We can also do the same with no initial values
    int niceNums3[10];
    niceNums3[2] = 5;
    cout << niceNums3[2] << endl;


    return 0;
}
