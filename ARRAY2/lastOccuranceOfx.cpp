#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v={1,3,2,4,1,5,2,1,4};
    // vind last occurnce of x
    int x=1;

    for (int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
}