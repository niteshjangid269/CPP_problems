#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;
}
int ncr(int n,int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
int NCR(int n,int r){
    if(r==0 || n==r)
    return 1;
    else
    return NCR(n-1,r-1)+NCR(n-1,r);

}
int main(){
    int a=5,b=1;
    cout<<ncr(a,b)<<endl;
    cout<<NCR(a,b)<<endl;
}