#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char ch;
        cin >> ch;

        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                cout << ch;
            }
            if (j > 0)
            {
                cout << " " << ch;
            }
        }
        cout << endl;
    }
    return 0;
}