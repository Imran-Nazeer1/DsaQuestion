#include<bits/stdc++.h>
using namespace std;
int main (){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    // normal printing 
    for(int i=0;i<3;i++){//rows
        for(int j=0;j<3;j++){//col
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // coloum wise wave krna h ab 

    for(int j=0;j<3;j++){//col
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=2;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}