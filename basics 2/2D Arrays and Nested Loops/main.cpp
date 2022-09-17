#include <iostream>
using namespace std;

int main() {
    //2D Arrays
    int numGrid[][3] = {{1,2,3},{2,3,4}};
    // you cannot just have an int x[][], one must have a value

    //Nested For Loop
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << numGrid[i][j] << endl;
        }
    }

    return 0;
}
