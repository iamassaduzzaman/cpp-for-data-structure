#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "one\n";
        break;
    case 2:
        cout << "two\n";
        break;
    case 3:
        cout << "three\n";
        break;
    default:
        cout << "didn't match\n";
        break;
    }

    return 0;
}