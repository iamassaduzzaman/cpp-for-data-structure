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

Student fun()
{
    char name[100] = "Rifat Ahmad";
    Student r(9, 88, 'A', name);

    return r; // returning object value
}

int main()
{
    Student rifat = fun(); // RVO - Return Value Optimization

    cout << rifat.roll;
    return 0;
}