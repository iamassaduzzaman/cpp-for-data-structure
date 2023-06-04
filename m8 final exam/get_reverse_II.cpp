#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
        cin.ignore();
    }

    // reverse id
    int m = 0, k = n - 1;
    while (m < k)
    {
        int temp = a[m].id;
        a[m].id = a[k].id;
        a[k].id = temp;
        m++;
        k--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}