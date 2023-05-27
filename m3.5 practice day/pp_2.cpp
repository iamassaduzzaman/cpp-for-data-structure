#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[20];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    strcpy(dhoni->country, "India");

    Cricketer kohli;
    kohli.jersey_no = dhoni->jersey_no;
    strcpy(kohli.country, dhoni->country);

    delete dhoni;

    cout << kohli.jersey_no << endl;
    cout << kohli.country << endl;

    return 0;
}