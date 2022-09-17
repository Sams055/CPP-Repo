#include <iostream>
using namespace std;

int main() {
    int index = 1;
    //pre conditional loop
    while(index <= 10)
    {
        cout << index << endl;
        index += 1;
    }
    // we can endlessly loop with a while true as well
    index = 1;

    //post conditional loop
    do
    {
        cout << '\n' << index;
        index ++;
    }while(index <= 10);

    return 0;
}
