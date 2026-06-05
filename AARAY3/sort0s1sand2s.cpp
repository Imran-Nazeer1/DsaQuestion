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
    int no0=0;
    int no1=0;
    int no2=0;
    for (int i=0;i<v.size();i++){
        if (v[i]==0) no0++;
        else if(v[i]==1) no1++;
        else if(v[i]==2) no2++;
    }
    for (int i=0;i<v.size();i++){
        if (no0){
            v[i]=0;
            no0--;
        }
        else if(no1){
            v[i]=1;
            no1--;
        }
        else if (no2){
            v[i]=2;
            no2--;
        }
    }
}
int main (){
    vector<int> v={2,0,2,1,1,0};
    display(v);
    sort(v);
    display(v);
}