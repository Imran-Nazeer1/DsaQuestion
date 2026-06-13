#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cout<<"Enter your string:";
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u' ){
            c++;
        }
    }
    cout<<"Total no of vowel in string is:"<<c;
}