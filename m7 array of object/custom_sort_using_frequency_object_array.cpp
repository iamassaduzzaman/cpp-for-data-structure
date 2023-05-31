#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char c;
    int count;
};

bool cmp(CustomSort a, CustomSort b)
{
    if (a.count > b.count)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    CustomSort ch[26];

    for (int i = 0; i < 26; i++)
    {
        ch[i].c = i + 'a';
        ch[i].count = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char chh;
        cin >> chh;
        ch[chh - 'a'].count++;
    }

    sort(ch, ch + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if (ch[i].count > 0)
        {
            for (int j = 0; j < ch[i].count; j++)
            {
                cout << ch[i].c;
            }
            cout << endl;
        }
    }
    return 0;
}