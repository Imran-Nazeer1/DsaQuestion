#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(3);
    v.push_back(54);
    v.push_back(56);

    for (auto x:v){
        cout<<x<<" ";
    }

    cout<<endl;

    v[3]=666;
    for (auto x:v){
        cout<<x<<" ";
    }

}