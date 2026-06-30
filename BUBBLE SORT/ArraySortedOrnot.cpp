#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={1,2,7,8,9};
    int flag=1;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]) flag=0;
    }
    cout<<flag;
}