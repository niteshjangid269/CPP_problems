#include<iostream>
#include<stdio.h>
using namespace std;
/*int fib(int n){
    int r;
    if(n==1)
    return 1;
    else if(n==0)
    return 0;
    else
    r=fib(n-2)+fib(n-1);\
    return r;
}
int main(){
    int a;
    a=fib(7);
    cout<<a;
} */
int fib(int n){
    int t0=0,t1=1,s,i;
    if(n<=0)
    return n;
    for ( i = 2; i <= n; i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
int main(){
    int a;
    a=fib(5);
    cout<<a;

}