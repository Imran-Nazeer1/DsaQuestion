#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size){
    cout<<"Your array:";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void findMark(int arr[],int size){
    cout<<"Roll no is:";
    for(int i=0;i<size;i++){
        if(arr[i]<35){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int arr[]={91,34,23,37,45,100,45,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    findMark(arr,size);
}