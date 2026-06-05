#include<bits/stdc++.h>
using namespace std;
void display (vector<int> v){
    cout<<"Your array:";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>& v){
    int count=0;
    for (int i=0;i<v.size();i++){
        if(v[i]==0) count++;
    }

    for (int i=0;i<v.size();i++){
        if(count){
            v[i]=0;
            count--;
        }
        else{
            v[i]=1;
        }
    }
}

void sort2(vector<int>& v){
    int slow=0;
    int fast=0;
    for (int i=0;i<v.size();i++){
        if(v[fast]==1){
            fast++;
        }
        else if(v[fast]==0){
            swap(v[slow],v[fast]);
            slow++;
            fast++;
        }
    }

}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    display(v);
    // method 1
    // sort(v);

    // method 2 

    sort2(v);
    display(v);
}