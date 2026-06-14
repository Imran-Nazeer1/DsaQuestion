#include<bits/stdc++.h>
using namespace std;
int main (){
    string str="Raghav is a math faculty. and is a dsa mentor as well";
    stringstream ss(str);
    string word;
    vector<string> v;
    while(ss>>word){
        v.push_back(word);
    }
    sort(v.begin(),v.end());
    int count=1;
    int max=1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]){
            count++;
        }
        else count=1;
        if(count>max){
            max=count;
        }
    }
    count=1;

    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]) count++;
        else count=1;
        if(count==max){
            cout<<v[i]<<" "<<max<<endl;
        }
    }
}