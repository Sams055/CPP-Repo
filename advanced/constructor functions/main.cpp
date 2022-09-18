#include <iostream>
#include <vector>
using namespace std;


class Student
{
    public:
        string name;
        int age;
        double grade;
        //A constructor for class x is written as x() {}
        Student()
        {
            cout << "Creating object" << endl;
        }
        //we can also create parameter based constructors;
        Student(string n, int a, double g)
        {
            cout << "Creating object" << endl;
            name = n;
            age = a;
            grade = g;
        }

};

int main()
{
    //Let's say we want to make a student
    Student stu1;
    //The constructor automatically runs after the object is created.
    stu1.name = "Joe";
    stu1.age = 13;
    stu1.grade = 77.3;
    cout << stu1.name << endl;
    cout << stu1.age << endl;
    cout << stu1.grade << endl << endl;


    //We will now use the constructor with parameters
    Student stu2("JimmyJimm", 19, 44.7);
    cout << stu2.name << endl;
    cout << stu2.age << endl;
    cout << stu2.grade << endl;

    return 0;
}

