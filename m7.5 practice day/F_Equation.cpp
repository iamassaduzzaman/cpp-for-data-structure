#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;
    long long int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        long long int y = 1;
        for (int j = 1; j <= i; j++)
        {
            y *= x;
        }
        sum += y;
    }
    cout << sum << endl;
    return 0;
}