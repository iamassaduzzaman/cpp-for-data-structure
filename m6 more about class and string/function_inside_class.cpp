#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm, int a, int m1, int m2)
    {
        name = nm;
        age = a;
        marks1 = m1;
        marks2 = m2;
    }

    void hi()
    {
        cout << name << " " << age << endl;
    }

    int totalmarks()
    {
        cout << marks1 + marks2;
    }
};

int main()
{
    Person rakib("Rakib Hasan", 21, 80, 90);
    rakib.hi();
    rakib.totalmarks();
    return 0;
}