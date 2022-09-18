#include <iostream>
#include <vector>
using namespace std;

//this book will act as a template / new datatype
class Book
{
    public:
        string title;
        string author;
        int pages;

};

int main() {
    string name = "Sam";
    double score = 4.123;
    char favouriteLetter = 'E';
    //we may want to make our own datatype e.g. book, grade etc.

    //lets represent a book in a class
    Book book1;
    book1.title = "Mojo's Bizarre Shopping Mall";
    book1.author = "Sam";
    book1.pages = 300;

    cout << "Book 1: " << book1.title << ", " << book1.author << ", " << book1.pages << endl;

    Book book2;
    book2.title = "Racoon's guide to C++";
    book2.author = "Indra";
    book2.pages = 123;

    cout << "Book 2: " << book2.title << ", " << book2.author << ", " << book2.pages << endl;

    return 0;
}
