#include<bits/stdc++.h>
using namespace std;
int main (){
    string s="DJFCZVNDXBDYZYFDX";
    string str;
    int asc=(int)'X';
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=(int)ch;
        if(ascii>=asc){
            str.push_back(ch);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
}