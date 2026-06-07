#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter your Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to find:";
    cin>>x;

    // liner search

    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            cout<<"Element found at index:"<<i;
            break;
        }
        else if(i==0){
            cout<<"Element not found";
        }
    }
    
}