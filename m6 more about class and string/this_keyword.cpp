#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name; // this keyword is a pointer of a object(you are working with)
        this->age = age;
    }
};

int main()
{
    Person rakib("Rakib Hasan", 21);
 
    cout << rakib.name << endl;

    return 0;
}