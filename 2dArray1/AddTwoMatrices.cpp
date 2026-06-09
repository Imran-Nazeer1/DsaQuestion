#include<bits/stdc++.h>
using namespace std;
int main (){
    int mat1[2][3]={1,2,3,4,5,6};
    int mat2[2][3]={1,2,3,4,5,7};
    int res[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            res[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    // printing res matrics
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}