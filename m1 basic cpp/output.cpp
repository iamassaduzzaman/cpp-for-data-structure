#include <iostream>
using namespace std;

int main()
{
    // printf("hi mom"); -> for C
    // std::cout<<"hi mom, I'm learning cpp";
    // std::cout<<"hi\n";
    // std::cout<<"mom\n";
    // std::cout<<"hi "<<"mom";
    // std::cout<<"hi mom";
    // std::cout<<"hi"<<std::endl<<"mom";
    int a = 5, b = 10;
    // printf("%d %d", a, b); -> for C
    // std::cout<<a<<std::endl<<b;
    // std::cout<<a<<b;
    // std::cout<<a<<" "<<b;

    // by using "using namespace std" we don't need to add std::
    cout << a << " " << b;

    return 0;
}