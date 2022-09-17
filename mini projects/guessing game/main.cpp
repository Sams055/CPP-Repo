#include <iostream>
using namespace std;

int main() {
    //create a game where the user has x amount of tries to guess a fixed password
    string password = "password123";
    string guess;
    int numGuesses = 0;
    int guesslimit = 3;

    do //do while loop to ensure the user has at least one attempt
    {
        cout << "Enter password (no spaces):" << endl;
        cin >> guess;
        numGuesses += 1;
    } while(guess != password && numGuesses < guesslimit);

    if (guess != password)
    {
        cout << "You ran out of tries";
    }
    else
    {
        cout << "You guessed the password!";
    }

    return 0;
}
