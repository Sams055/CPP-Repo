#include <iostream>
using namespace std;

int main() {

    //This is different for strings

    string name;
    //prompt
    cout << "Enter your name:";
    //input
    getline(cin, name);
    //output

    int age;
    //prompt
    cout << "Enter your age:";
    //input
    cin >> age;
    //output
    cout << "Your name is "<< name << " and your age is " << age << " years old." << endl;

    return 0;
}
