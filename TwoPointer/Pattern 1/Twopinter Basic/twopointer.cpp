#include<bits/stdc++.h>
using namespace std;
int main (){
    int n=6;
    int arr[]={1,32,43,56,2,44};
    arr[0]=2;
    arr[1]=4;
    arr[4]=10;
    cout<<"Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Reversal traversal

    cout<<"Reversal traversal: ";

    for (int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
}