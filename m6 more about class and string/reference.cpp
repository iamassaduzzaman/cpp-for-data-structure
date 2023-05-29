#include <bits/stdc++.h>
using namespace std;

void print(string &s) // since string is a object we can't use pointer in this case, to referce we need to use &
{
    s = "hi mom";
}

int main()
{
    string s = "hello world";

    print(s);

    cout << s << endl;
    return 0;
}