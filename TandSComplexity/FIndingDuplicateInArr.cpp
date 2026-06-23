#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter your number till you want to use in array:";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the element of array:";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Your array:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum=0;
    int total=(n*(n+1))/2;
    for(int i=0;i<=n;i++){
        sum += arr[i];
    }

    int ans=sum-total;
    if(ans==0) cout<<"No duplicate";
    else{
        cout<<"Duplicate element is:"<<ans;
    }
}