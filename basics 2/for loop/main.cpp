#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=5;i++)
    {
        cout << i << endl;
    }
    //i is only available inside the for-loop.
    //if i were to use it below, it would not run without additional declaration.
    return 0;
}
