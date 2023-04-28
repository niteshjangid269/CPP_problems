#include<iostream>
using namespace std;
struct Rectangle{
int length;
int breadth;
};
int main(){
    struct Rectangle r={10,5};
    r.length;
    r.breadth;
    cout<<"Area of rectangle:"<<r.length*r.breadth;
    return 0;

}