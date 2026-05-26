#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main (){
    // Enter you array size
    int n;
    cout<<"Enter your size of Array: ";
    cin>>n;

    // Taking aray as input

    int arr[n];
    cout<<"Enter your array: "<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    // printing array as it is 
    cout<<"Your array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertion_sort(arr,n);

    cout<<"Your sorted array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // worst case o(n2);
    // best case o(n);
}