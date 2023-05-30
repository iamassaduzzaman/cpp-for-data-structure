#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;

    for (int i = 0; ss >> word; i++)
    {
        if (i == 0)
        {
            for (int i = word.size() - 1; i >= 0; i--)
            {
                cout << word[i];
            }
        }
        if (i != 0)
        {
            cout << " ";
            for (int i = word.size() - 1; i >= 0; i--)
            {
                cout << word[i];
            }
        }
    }
    return 0;
}