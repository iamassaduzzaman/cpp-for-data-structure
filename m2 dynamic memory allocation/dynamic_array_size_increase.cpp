#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int *b = new int[7];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;

    // print b array
    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // delete a array
    delete[] a;

    // print a array
    // 1. might show the array it's because of windows
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}