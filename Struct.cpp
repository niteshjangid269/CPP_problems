#include<iostream>
using namespace std;
struct Student{
int Roll_no;
char Name[10];
char Department[50];
char Address[50];
int Mb_no;
};
int main(){
    struct Student s1={1,"Nitesh","CSE","jaipur",98};
    s1.Roll_no=10;
    cout<<s1.Roll_no<<endl<<s1.Name<<endl<<s1.Department<<endl<<s1.Address<<endl<<s1.Mb_no<<endl;
    return 0;

}