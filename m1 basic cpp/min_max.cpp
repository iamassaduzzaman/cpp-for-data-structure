#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mn = min(a, b); // extract minimum value
    int mx = max(a, b); // extract maximum value

    cout << mn << " " << mx << endl;
    return 0;
}