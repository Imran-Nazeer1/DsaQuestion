#include<bits/stdc++.h>
using namespace std;
void display (vector<int> v){
    cout<<"Your array:";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void merge(vector<int>& num1 , vector<int> num2){
    int first=num1.size()-1;
    int second=num2.size()-1;
    num1.resize(num1.size()+num2.size());
    int k=num1.size()-1;
    // sorting start

    while (first>=0 && second>=0)
    {
        if(num1[first]>num2[second]){
            num1[k]=num1[first];
            first--;
            k--;
        }
        else if (num1[first]<num2[second]){
            num1[k]=num2[second];
            second--;
            k--;
        }
        else if(num1[first]==num2[second]){
            num1[k]=num1[first];
            k--;
            num1[k]=num2[second];
            first--;
            second--;
            k--;
        }
    }
    while(first>=0){
        num1[k]=num1[first];
        first--;
        k--;
    }
    while(second>=0){
        num1[k]=num2[second];
        second--;
        k--;
    }
    return;
    
}
int main(){
    vector<int> num2={1,5,9};
    display(num2);
    vector<int> num1={2,4,5,6,7,8,9};
    display(num1);
    merge(num1,num2);
    display(num1);
}