#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int a2[n];
    for (int i = 0; i < n; i++)
    {
        a2[i] = a[i];
    }

    // two pointers
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a2[i] != a[i])
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}