#include<iostream>
#include<stdio.h>
using namespace std;
int pow(int m,int n){
    if(n==0)
    return (1);
    else
    return pow(m,n-1)*m;
}
int main(){
    int a=10;
    int b=5;
    int c;
    c=pow(a,b);
    cout<<c;
}

/*int pow(int m,int n){
    if(n==0)
    return 1;
    int i;
    int power;
    for (i = 0;i<=n; i++)
    {
        power=pow(m,n-1)*m;
    }
    return power;
    

}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=pow(a,b);
    
    cout<<c;

}*/