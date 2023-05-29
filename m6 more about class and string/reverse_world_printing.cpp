#include <bits/stdc++.h>
using namespace std;

// recursive function
void print(stringstream& ss) // & must be included
{
  string word;
  if (ss>>word)
  {
    cout << word << endl;
    print(ss);
  }
}

int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);
    print(ss);
    return 0;
}