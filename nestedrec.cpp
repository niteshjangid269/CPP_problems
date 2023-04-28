#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n)
{
    if (n>100)
        return n-10;
        return fun(fun(n+11));
}
int main()
{
    int a;
    a=fun(50);
    cout<<a;
    return 0;
}