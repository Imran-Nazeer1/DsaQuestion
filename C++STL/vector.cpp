#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v1;
    // v1[0]=2;
    v1.push_back(5);

    // for each loop wo x m har array ke element ko store krta h then jo krna h usse krwao 
    for(int x:v1){
        cout<<x<<" "<<endl;
    }
    cout<<v1.size()<<endl;

    // size and initialise both at same time 

    vector<int> v2(5,10);
    for(int x:v2){
        cout<<x<<" "<<endl;
    }

    // 2d vector ko print krna
    vector<vector<int>> v3={{2,3,4,5},{3,4,3,4},{4,6,8,44}};
    cout<<"ALl item of 2d vector"<<endl;
    for(int i=0;i<v3.size();i++){
        for (int j=0;j<v3[i].size();j++){
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<v3.size()<<" "<<v3[1].size();

    // Method

    vector<int> v4={1,4,2,5,8,23,6,54};

    // sort function
    sort(v4.begin(),v4.end());
    for (int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
}