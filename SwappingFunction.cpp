/*
//Swapping By Call BY Address------->Change 

#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    a=100;
    b=50;
    swap(&a,&b);
    cout<<a<<endl<<b<<endl;
    return 0;
} 
//By Call By Value----> No change
#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    a=100;
    b=50;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
} */


//By Call Reference------> Change
#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    a=100;
    b=50;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}