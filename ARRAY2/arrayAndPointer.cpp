#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={1,3,4 ,53,3};
    int *ptr=arr;
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    /* cout<<ptr[6];  wrong thing to do because pointer is getting garbage value for this so never do this 
    cout<<ptr[6];  wrong thing to do because pointer is getting garbage value for this so never do this */
}