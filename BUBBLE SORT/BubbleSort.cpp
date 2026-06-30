#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={5,2,3,1,4};
    int n=5;
    cout<<"original array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // bubble sort

    for(int i=0;i<n-1;i++){ //no of passes required for bubble sort is n-1
        bool flag =true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag =false;
            }
        }

        if(flag==true){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}