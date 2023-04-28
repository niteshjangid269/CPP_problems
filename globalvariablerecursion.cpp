#include<iostream>
using namespace std;
int x=0;
int fun1(int n){
    
    if(n>0){
        x++;
        return fun1(n-1)+x;
        
    }
    return 0;
}
int main(){
    int a=5;
    cout<<fun1(a);
    cout<<fun1(a);
}