#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char a[n + 1];
    cin.getline(a, n + 1);

    sort(a, a + n);

    cout << a << endl;
    return 0;
}