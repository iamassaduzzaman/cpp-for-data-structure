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
    char name[100] = "Rifat Ahmad";
    Student rifat(9, 8, 'A', name);

   // Student rifat(9, 8, 'A', "Rifat Ahmad");
   // we can't do that cuz "Rifat Ahmad" is a array and my pc doesn't know the size of this array

    cout << rifat.roll;
    return 0;
}