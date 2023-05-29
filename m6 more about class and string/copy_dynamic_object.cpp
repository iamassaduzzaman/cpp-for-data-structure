#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *rakib = new Person("Rakib Hasan", 21);
    Person *sakib = new Person("Sakib Hasan", 22);

    // rakib = sakib; // -> change the pointer directly
    *rakib = *sakib; // -> copy object value one object to another

    // delete sakib;
    cout << rakib->name << endl;
    // cout << sakib->name;

    return 0;
}