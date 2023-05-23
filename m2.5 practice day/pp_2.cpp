#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int a2[m];
    for (int i = n; i < m; i++)
    {
        cin >> a2[i];
    }

    for (int i = 0; i < n; i++)
    {
        a2[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }

    return 0;
}