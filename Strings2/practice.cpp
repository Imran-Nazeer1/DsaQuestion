#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Raj  is a  bad boy";
    int n=str.length();
    int count =0;
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            cout<<str[i];
        }
        if(str[i]!=' ' && i==(n-1)) count++;
        else if(str[i]==' ' && str[i+1]!=' '){
            count++;
            cout<<endl;
            continue;
        }
    }
    cout<<endl;
    cout<<count;
}