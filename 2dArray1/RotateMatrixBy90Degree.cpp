#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // cout<<"Your array:";
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // rotate array ny 90 degree 

    // 1=> transpose the give matrix

    for (int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // printing after transpose 
    // cout<<"Your array:";
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // reverse all row 
    
    for (int row=0;row<3;row++){
        int first=0;
        int last=2;
        while(first<last){
            swap(arr[row][first],arr[row][last]);
            first++;
            last--;
        }
    }

    // printing rortated matric 

    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // 180 degree rotate
    // transpose

    for (int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // reverse

    for (int row=0;row<3;row++){
        int first=0;
        int last=2;
        while(first<last){
            swap(arr[row][first],arr[row][last]);
            first++;
            last--;
        }
    }

    // printing after 180 rotate 

    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


}