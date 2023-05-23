#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "IS DIGIT\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else
    {
        cout << "ALPHA\nIS SMALL";
    }
    return 0;
}