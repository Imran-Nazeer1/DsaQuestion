#include<bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[],int n){
    for (int i = 0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
    }
}
int main (){
    // selection sort

    int n;
    cout<<"ENter size of Array =";
    cin>>n;

    // Take array as input 

    cout<<"Enter your array = "<<endl;
    
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    // printing the array without sort

    cout<<"Your Array: ";
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Selection_sort(arr,n);

    // printing array after sorting 

    cout<<"Array after sorting "<<endl;
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}