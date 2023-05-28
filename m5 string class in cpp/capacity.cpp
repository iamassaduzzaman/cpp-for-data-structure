#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello mom, I'm learning cpp";

    // cout << s.size() << endl; -> returs the size of the string
    // cout << s.max_size() << endl; -> returns the maximum size that string can hold
    // cout << s.capacity() << endl; -> returns current available capacity of the string

    // s.clear(); // -> clear the string

    // if (s.empty() == true) // -> return true/false if the string is empty
    //     cout << "empty" << endl;
    // else
    //     cout << "not empty" << endl;

    s.resize(9); // -> change the size of the string
    s.resize(15, 'h');
    cout << s << endl;

    return 0;
}