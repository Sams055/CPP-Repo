#include <iostream>
using namespace std;

int main() {
    //source text
    cout << "A man has fallen ";
    cout << "into the river ";
    cout << "in lego city" << endl;

    //madlib text
    string person, place, cityType;
    cout << "Enter a person:";
    getline(cin, person);
    cout << "Enter a place:";
    getline(cin, place);
    cout << "Enter a city type:";
    getline(cin, cityType);

    cout << "A " << person << " has fallen ";
    cout << "into the " << place << " ";
    cout << "in "<< cityType << " city" << endl;

    return 0;
}
