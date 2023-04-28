#include<iostream>
#include<stdio.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a=5;
    a=factorial(30);
    cout<<a;
    return 0;
}