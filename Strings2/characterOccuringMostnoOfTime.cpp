#include<bits/stdc++.h>
using namespace std;
int main  (){
    string s;
    cout<<"Enter your string:";
    cin>>s;

    // array of 26 so all lowercase char ko usme add kr saku 

    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int asscii=(int)ch;
        arr[asscii-97]++;
    }

    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }

    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
}