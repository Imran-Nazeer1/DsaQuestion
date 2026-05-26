#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        cout<<"kitna "<<endl;
        int flag=0;
        for (int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;

    }
}
int main(){
    // taking size of array
    int n;
    cout<<"ENter size of Array =";
    cin>>n;

     // Take array as input 

    cout<<"Enter your array = "<<endl;
    
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    // print raw array 

    cout<<"Your Array: ";
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Bubble_sort(arr,n);

    // printing array after sorting 

    cout<<"Array after sorting "<<endl;
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}