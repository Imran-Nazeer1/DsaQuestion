#include<bits/stdc++.h>
using namespace std;
int main (){
    string s ="Hello world";

    // printing all string element .
    for (auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    s[0]='a';
    cout<<s<<endl;

    cout<<s.find("world");
}