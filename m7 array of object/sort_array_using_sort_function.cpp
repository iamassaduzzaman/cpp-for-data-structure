#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// based on which member we want to sort
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)  return true; 
    else return false;
}

int main()
{
    Student a[3];

    // reading input
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    // sorting
    sort(a, a+3, cmp);

    // output
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}
