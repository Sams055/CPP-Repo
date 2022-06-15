#include <iostream>
using namespace std;

int main()
{
    cout << "hello" << endl; //endl asks for a newline

    cout << "my name is ";    //by removing the endl, we make it so the next print happens on the same line
    cout << "your mum." << endl;

    cout << "silly child\n";     //We can also specify a newline with \n
    cout << "there is no need for endl";
    cout << "\nback/n is more than enough\n";

    //We can also use string functions
    string phrase = "Terrible Trucks";
    cout << phrase;
    cout << "\n" << phrase.length() << "\n";

    //We can access a single char from a string by accessing it like an array that has its index start at 0
    cout << phrase[0];
    cout << phrase[1];
    cout << phrase[2] << " ";
    cout << phrase[4] << "\n";

    //Like an array, we can also modify these.
    phrase[0] = 'J';
    phrase[2] = 'e';
    phrase[1] = 'o';
    phrase[4] = 'y';

    cout << phrase[0];
    cout << phrase[1];
    cout << phrase[2] << " ";
    cout << phrase[4] << "\n";

    //More String Functions
    phrase = "Terrible Trucks";

    //Find function
    cout << phrase.find("Trucks", 0) << "\n"; // first parameter is what we are looking for, and the second parameter is where we start looking. It then returns the position where it starts if at all.
    cout << phrase.find("ucks", 5) << "\n"; // example of different position which will not work in this case (causes issues as seen in the answers.

    //Substr function
    cout << phrase.substr(9, 3) << "\n"; //the first parameter is the variable, the second parameeter is how many characters we want to take.
    string phrasesub = phrase.substr(9, 5);
    cout << phrasesub;

    return 0;
}
