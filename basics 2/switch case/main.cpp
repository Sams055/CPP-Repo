#include <iostream>
using namespace std;

int getWord(string word, int wordLength)
{
    int numLetters = 0;

    switch(wordLength)
    {
        case 0:
            numLetters = 4; //zero = 4 letters
            break; //we include the break as we have no need to test the other cases
        case 1:
            numLetters = 3; //one = 3 letters
            break;
        case 2:
            numLetters = 3; //two = 3 letters etc.
            break;
        case 3:
            numLetters = 5;
            break;
        case 4:
            numLetters = 4;
            break;
        case 5:
            numLetters = 4;
            break;
        case 6:
            numLetters = 3;
            break;
        case 7:
            numLetters = 5;
            break;
        case 8:
            numLetters = 5;
            break;
        case 9:
            numLetters = 4;
            break;
        case 10:
            numLetters = 3;
            break;
        default:
            cout << "INVALID NUMBER";
    }

    //It would be much quicker to:
    /*
     switch(numLetters)
    {
        case 0:
            return 4;
        case 1:
            return 3;
    etc...
    }
     However for demonstration purposes, I have done it the long way to show use of break
     */
    return numLetters;
}


int main() {
    //We use switch to compare one value against several other values.
    //Let's find the length of the number which is the length of a word between 0 and 10
    //Doing this with if statements would be extremely tedious
    string word;
    cout << "Enter a word between 0-10 letters long:";
    cin >> word;
    cout << word << " is " << word.length() << " letters long and " << word.length() << " has " << getWord(word, word.length()) << " letters in total";
    return 0;
}
