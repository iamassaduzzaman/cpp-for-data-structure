#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{
    Student rifat;
    strcpy(rifat.name, "Rifat Ahmad");
    rifat.roll = 6;
    rifat.section = 'A';
    rifat.math_marks = 90;
    rifat.cls = 11;

    Student sristy;
    strcpy(sristy.name, "Sristy Ahmad");
    sristy.roll = 6;
    sristy.section = 'A';
    sristy.math_marks = 95;
    sristy.cls = 11;

    Student tanzina;
    strcpy(tanzina.name, "Tanzina Ahmad");
    tanzina.roll = 6;
    tanzina.section = 'A';
    tanzina.math_marks = 94;
    tanzina.cls = 11;

    // compare who got highest marks on math and show his/her name

    return 0;
}