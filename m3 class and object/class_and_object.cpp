#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student rifat;
    rifat.roll = 10;
    rifat.cls = 9;
    rifat.section = 'H';

    // rifat.name = "Rifat Ahmad";
    strcpy(rifat.name, "Rifat Ahmad");

    cout << rifat.name;
    return 0;
}