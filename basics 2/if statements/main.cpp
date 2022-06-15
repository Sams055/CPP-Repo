#include <iostream>
using namespace std;

int main() {
    //simple if statement
    bool isFemale = true;
    if (isFemale)
    {
        cout << "You are female." << endl;
    }
    //we can also use else
    if (isFemale == false)
    {
        cout << "You are not female.";
    }
    else
    {
        cout << "You are female." << endl;
    }

    //We can also use ! to negate
    if (!isFemale)
    {
        cout << "You are not female" << endl;
    }
    else
    {
        cout << "You are female" << endl;
    }

    //we can use AND with &&
    //we can use OR with ||
    int age = 18;
    if (isFemale && age >= 18)
    {
        cout << "You are a female adult." << endl;
    }
    else if (isFemale || age >= 18)
    {
        cout << "You are either female or an adult." << endl;
    }
    else
    {
        cout << "You are not female, and also a minor." << endl;
    }

    age = 19;
    isFemale = false;
    if (isFemale && age >= 18)
    {
        cout << "You are a female adult." << endl;
    }
    else if (isFemale || age >= 18)
    {
        cout << "You are either female or an adult." << endl;
    }
    else
    {
        cout << "You are not female, and also a minor." << endl;
    }

    age = 17;
    isFemale = true;
    if (isFemale && age >= 18)
    {
        cout << "You are a female adult." << endl;
    }
    else if (isFemale || age >= 18)
    {
        cout << "You are either female or an adult." << endl;
    }
    else
    {
        cout << "You are not female, and also a minor." << endl;
    }

    age = 15;
    isFemale = false;
    if (isFemale && age >= 18)
    {
        cout << "You are a female adult." << endl;
    }
    else if (isFemale || age >= 18)
    {
        cout << "You are either female or an adult." << endl;
    }
    else
    {
        cout << "You are not female, and also a minor." << endl;
    }



    return 0;
}
