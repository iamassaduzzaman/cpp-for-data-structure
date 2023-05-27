#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, r;
    char s, e;
    cin >> a >> s >> b >> e >> r;

    if (s == '+')
    {
        if (a + b == r)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (s == '-')
    {
        if (a - b == r)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << a - b;
        }
    }
    else if (s == '*')
    {
        if (a * b == r)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << a * b;
        }
    }
    return 0;
}