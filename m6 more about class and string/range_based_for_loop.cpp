#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }

    for (char ch : s) // take character form s and put it to ch one by one
    {
        cout << ch << " ";
    }
    return 0;
}