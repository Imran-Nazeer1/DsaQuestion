#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][2]={{24,34},{21,45},{45,67}};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<"Your array:"<<endl;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}