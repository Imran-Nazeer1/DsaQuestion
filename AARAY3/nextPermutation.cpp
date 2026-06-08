#include<bits/stdc++.h>
using namespace std;
void nextpermutaion(vector<int>& v){
    // finding piviot idx mtlb wo index jo reverse hoga 
    int idx=-1;
    for(int i=v.size()-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }

    if(idx==-1){
        reverse(v.begin(),v.end());
        cout<<"Your array:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
        return;
    }
    // reverse idx+1 to end;

    reverse(v.begin()+idx+1,v.end());

    // finding just greater element that idx element

    int j=-1;
    for(int i=idx;i<v.size();i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }

    // swap idx and j

    swap(v[idx],v[j]);
    cout<<"Your array:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main (){
    vector<int> v={3,2,1};
    int size=v.size();
    // finding factorial 

    int fact=1;
    for(int i=1;i<=size;i++){
        fact=fact*i;
    }

    // all permutation of array

    
}