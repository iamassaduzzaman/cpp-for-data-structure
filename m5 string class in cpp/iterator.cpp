#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] <<" ";
    // }

    // cout << *s.begin(); -> pointer to the first element

    // cout << *s.end(); -> pointer to the next element after the last element of the string

    // string:: iterator it;

    // for (string:: iterator it = s.begin(); it < s.end() ; it++)
    // {
    //     cout << *it << endl;
    // }

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}