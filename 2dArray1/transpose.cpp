#include<bits/stdc++.h>
using namespace std;
int main (){
    int a[2][3]={1,2,3,4,5,6};
    // original matrices 

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose
    int tr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            tr[i][j]=a[j][i];
        }
    }

    // print 

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }
}