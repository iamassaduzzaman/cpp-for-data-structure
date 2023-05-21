#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100); // string input without enter
    // fgets(s, 100, stdin); --> string input with enter

    cout << s << endl;
    cout << strlen(s);
    return 0;
}