#include <bits/stdc++.h>
using namespace std;

namespace rakib
{
    int age = 21;
    void hello()
    {
        cout << "hello from namespaces\n";
    }
}

using namespace rakib;
int main()
{
    // rakib::hello();
    // cout << rakib::age;

    // after including 'using namespaces rakib;'
    // hello();
    cout << age;

    return 0;
}