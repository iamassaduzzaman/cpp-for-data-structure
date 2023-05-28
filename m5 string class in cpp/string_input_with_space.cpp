#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // getchar(); -> to ignore enter
    cin.ignore(); // -> to ignore enter

    string s;
    // cin>>s; -> input without space
    // cin.getline(s, 100); -> for char s[100]
    getline(cin, s); // -> to take input with sapce

    
    cout << n << endl;
    cout << s << endl;
    return 0;
}