#include <iostream>
using namespace std;

int main() {
    int numOfBurgers = 5;
    string one = "burgers";
    // Just use the << to concatenate the variables
    cout << numOfBurgers << " " << one << "!" << endl;

    // to display the variables at work, look at the following
    numOfBurgers -= 1;
    cout << numOfBurgers << " " << one << "!" << endl;

    numOfBurgers -= 1;
    cout << numOfBurgers << " " << one << "!" << endl;

    numOfBurgers -= 1;
    cout << numOfBurgers << " " << one << "!" << endl;

    numOfBurgers -= 1;
    one = "burger";
    cout << numOfBurgers << " " << one << "!" << endl;

    return 0;
}
