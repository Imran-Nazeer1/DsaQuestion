#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums ,int target){
    vector<pair<int,int>> v;
    for (int i=0;i<nums.size();i++){
        v.push_back({nums[i],i});
    }

    sort(v.begin(),v.end());

    for (auto x : v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    int size=(int)nums.size();
    int left=0;
    int right=size-1;

    while(left<right){
       int sum=v[left].first+v[right].first;
       if(sum==target){
        return {v[left].second,v[right].second};
       }
       else if(sum>target){
        right--;
       }
       else{
        left++;
       }
    }
    return {};
}
int main (){
    // pattern 1

    vector<int> num={23,43,32,45,1,3};
    for (auto x : num){
        cout<<x<<" ";
    }
    cout<<endl;
    // 
    int n=55;
    auto ans=twoSum(num,n);
    for (auto x : ans){
        cout<<x<<" ";
    }
}