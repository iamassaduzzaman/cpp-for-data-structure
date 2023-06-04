#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);

    cin >> s1;

    stringstream ss(s);

    int count = 0;
    string word;
    while (ss >> word)
    {
        if (word == s1)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}