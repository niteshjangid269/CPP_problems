#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int i;
    for (int i=a; i<=b; i++) {
        if(i<=9){
            switch(i){
        case 1:cout<<"one"<<endl;
        break;
        case 2:cout<<"two"<<endl;
        break;
        case 3:cout<<"three"<<endl;
        break;
        case 4:cout<<"four"<<endl;
        break;
        case 5:cout<<"five"<<endl;
        break;
        case 6:cout<<"six"<<endl;
        break;
        case 7:cout<<"seven"<<endl;
        break;
        case 8:cout<<"eight"<<endl;
        break;
        case 9:cout<<"nine"<<endl;
        break;
        default:cout<<"Greater than 9\n";  
    }
            
        }
        else {
        if(i%2)
        cout<<"odd\n";
        else
         cout<<"even\n";
        }
    
    }}