#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    int cls;
    char section;

    // constructor
    Student(int c, int r, char s, char *n)
    {
        strcpy(name, n);
        roll = r;
        cls = s;
        section = s;
    }
};

int main()
{
    // daynamic object WITH constructor
    char name[100] = "Rifat Ahmad";
    Student *rifat = new Student(9, 8, 'A', name);

    // daynamic object WITHOUT constructor
    // Student *rifat = new Student;

    // WAY OF ACCESSING VALUE OF OBJECT
    // (*rifat). or rifat->

    cout << rifat->roll << endl;
    cout << (*rifat).roll << endl;

    // deleting an object
    delete rifat;

    // will print some zibrish
    cout << rifat->roll << endl;
    cout << rifat->cls << endl;
    cout << rifat->name << endl;
    cout << rifat->section << endl;
    return 0;
}