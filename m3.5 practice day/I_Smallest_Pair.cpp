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
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int mn = INT_MAX;
        for (int m = 0; m < n - 1; m++)
        {
            for (int k = m + 1; k < n; k++)
            {
               mn = min((a[m] + a[k] + k - m), mn);
            }
        }

        cout << mn << endl;
    }
    return 0;
}