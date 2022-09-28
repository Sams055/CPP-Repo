#include <iostream>
using namespace std;
#include <algorithm>
/*
 * Thore needs your help to decipher the names on the labels
 * select buttons with either “pink” or “rose” somewhere in the name, ignoring case.
 * Input starts with an integer , the number of button packages in the box.
 * The following lines each has a color name, one for each package.
 * names consist of up to 30 characters of letters A - Z, a - z.
 * Print one integer, the number of training sessions Thore can attend.
 * If he can’t attend any session because there are no pink buttons
 * output his standard excuse “I must watch Star Wars with my daughter”.
 */

int main() {
    int numstr;
    string currentstr;
    int counter = 0;
    cout << "Enter number of buttons:";
    cin >> numstr;
    for(int i = 0;i<numstr;i++)
    {
        cout << "Enter button " << i+1 << ":" << endl;
        cin >> currentstr;
        transform(currentstr.begin(), currentstr.end(), currentstr.begin(), ::tolower);
        size_t present1 = currentstr.find("pink"); //string will output string::npos if not found
        size_t present2 = currentstr.find("rose"); //string will output string::npos if not found
        if (present1 != string::npos || present2 != string::npos)
        {
            counter += 1;
        }
    }
    if (counter == 0)
    {
        cout << "I must watch Star Wars with my daughter" << endl;
    }
    else
    {
        cout << counter << endl;
    }
    return 0;
}