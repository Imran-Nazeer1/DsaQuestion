#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the string size:";
    cin>>n;
    char str[n];
    cout<<"Enter your string:";
    cin>>str;
    int i=0;
    while (str[i]!='\0')
    {
        if(i%2==0){
            str[i]='a';
        }
        i++;
    }
    cout<<str;
    
}