#include<iostream>
using namespace std;
/*int sum(int n)
{
    return n*(n+1)/2;
}
int main(){
    int a;
    a=sum(10);
    cout<<a;
} */
 int sum(int n){
    int i;
    int s=0;
    for (i=1;i<= n;i++){
        s=s+i;}
        return s;
 }
 int main(){
    int a;
    a=sum(50);
    cout<<a;
 }