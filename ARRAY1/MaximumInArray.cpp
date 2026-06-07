#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={23,32,12,43,23,31};
    // finding max;
    int max=INT16_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Max element in array is:"<<max;

    
}