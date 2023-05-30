#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        int a = 0, b = 0;
        for (int j = 0; j < 3; j++)
        {
            int n = (int)num[j] - (int)'0';
            a += n;
        }

        for (int k = 3; k < 6; k++)
        {
            int n = (int)num[k] - (int)'0';
            b += n;
        }

        (a == b) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}