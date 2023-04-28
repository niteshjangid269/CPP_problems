#include<iostream>
using namespace std;
int main(){
    int A[3][4]={{1,2,3,4},{5,9,4,2},{2,2,9,1}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            cout<<A[i][j];
            printf("\n");
        
    }


    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    B[1][1]=10;
    B[2][2]=20;
    

    int **c;
    c=new int *[3];
    c[0]=new int[4];
    c[1]=new int[4];
    c[2]=new int[4];
    c[1][1]=10;

    return 0;
}