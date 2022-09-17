#include <iostream>
#include <vector>

using namespace std;

int main() {
    //we want to dynamically create an array.
    //we can import in the <vector> class and use it to make a dynamic array.

    int n = 3; // n is the size of the array
    vector<int> dynamicArray(n,0);
    for(int i = 0; i < n; i++)
    {
        cout << dynamicArray[i] << endl; //printing all values, they should all be set to 0
    }
    cout << endl;
    dynamicArray[0] = 1; //setting first element to 1

    for(int i = 0; i < n; i++)
    {
        cout << dynamicArray[i] << endl; // all values should be 0, but first element should be 1
    }
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        dynamicArray[i] = i; // setting all values so each element is consecutive; 1,2,3...
    }

    for(int i = 0; i < n; i++)
    {
        cout << dynamicArray[i] << endl; //output; should be 1,2,3
    }


    return 0;
}
