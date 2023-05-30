#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool word = true;
    int count = 0;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (word == true)
                count++;
            word = false;
        }
        else
        {
            word = true;
        }
    }

    cout << count << endl;
    return 0;
}