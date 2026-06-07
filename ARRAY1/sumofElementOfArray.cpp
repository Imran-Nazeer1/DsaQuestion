#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size){
    cout<<"Your array:";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int ad(int arr[],int size){
    int summ=0;
    for(int i=0;i<size;i++){
        summ=summ+arr[i];
    }
    return summ;
}
int main(){
    int arr[5]={23,34,32,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=ad(arr,size);
    cout<<sum;
}