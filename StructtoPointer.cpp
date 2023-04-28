#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;

};
int main(){
    struct Rectangle r1={10,5};
    struct Rectangle *p;
    p=&r1;
    r1.length=15;
    (*p).length=20;
    p->length=25;
    cout<<r1.length<<endl;
    cout<<(*p).length<<endl;
    cout<<p->length;
    return 0;



}