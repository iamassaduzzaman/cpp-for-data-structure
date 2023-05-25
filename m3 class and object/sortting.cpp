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

    // for ascending order
    // sort(a, a+n);

    // for descending order
    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}