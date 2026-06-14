#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cout<<"Enter your string:";
    cin>>s;
    int i=0;
    int count=0;
    while(s[i]!='\0' && s[i+1]!='\0'){
        if(s[i]!=s[i+1] && i==0) count++;
        else{
            if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
        }
        i++;
    }
    cout<<"count:"<<count;
}