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
        cin.ignore();
        string s;
        getline(cin, s);

        int arr[26] = {0};
        for (int j = 0; j < n; j++)
        {
            int val = (int)s[j] - 65;
            if (arr[val] != 0)
            {
                arr[val]++;
            }
            else
            {
                arr[val] += 2;
            }
        }
        int balloons = 0;
        for (int k = 0; k < 26; k++)
        {
            balloons += arr[k];
        }
        cout << balloons << endl;
    }
    return 0;
}