#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    stringstream ss(str);
    string word;
    int count =0;
    while (ss>>word)
    {
        cout<<word<<endl;
        count++;
    }
    cout<<count;
    
}