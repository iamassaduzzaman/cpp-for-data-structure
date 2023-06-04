#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

// custom sort
bool cmpr(Student a, Student b)
{
    if (a.eng_marks + a.math_marks == b.eng_marks + b.math_marks)
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
    {
        if (a.eng_marks + a.math_marks > b.eng_marks + b.math_marks)
            return true;
        else
            return false;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        cin.ignore();
    }

    sort(a, a + n, cmpr);

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}