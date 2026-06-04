#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main (){
    vector<int > v={2,3,4,5,6,7,8};
    display(v);
    int size=v.size();
    vector<int> v2(size);
    int right=size-1;
    for(int i=0;i<v2.size();i++){
        v2[i]=v[right];
        right--;
    }
    // display v2
    display(v2);
}