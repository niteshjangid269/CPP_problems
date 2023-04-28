#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int A[3]={1,2,3};
    int *p;
    p=&A[1];
    p=new int[3];
    cout<<&A[1];
    return 0;
}

