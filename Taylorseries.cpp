#include<iostream>
#include<stdio.h>
using namespace std;
int e(int x,int n){
    static int p=1,f=1;
    int result;
    if (n==0)
    {
        return 1;
    }
    else
    result=e(x,n-1);
    p=p*x;
    f=f*n;
    return result+p/f;
}
int main(){
    int a,b;
    int c;
    c=e(2,1);
    cout<<c;
    return 0;
}