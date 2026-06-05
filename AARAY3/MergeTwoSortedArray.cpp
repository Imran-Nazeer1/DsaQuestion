#include<bits/stdc++.h>
using namespace std;
void display (vector<int> v){
    cout<<"Your array:";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int> v1,vector<int> v2){
    int m=v1.size();
    int n=v2.size();
    int first=0;
    int second=0;
    int k=0;
    vector<int> res(m+n);
    while (first<m && second<n)
    {
        if(v1[first]<v2[second]){
            res[k]=v1[first];
            k++;
            first++;
        }
        else if(v1[first]>v2[second]){
            res[k]=v2[second];
            second++;
            k++;
        }
        else if(v1[first]==v2[second]){
            res[k]=v1[first];
            res[k+1]=v2[second];
            first++;
            second++;
            k=k+2;
        }
    }
    while (first<m)
    {
        res[k]=v1[first];
        k++;
        first++;
    }
    while(second<n){
        res[k]=v2[second];
        k++;
        second++;
    }
    return res;
}
int main(){
    vector<int> arr1={1,3,5,7,9,9,11};
    display(arr1);
    vector<int> arr2={2,4,6,8,9,9,9,9,12};
    display(arr2);
    vector<int> res=merge(arr1,arr2);
    display(res);
}