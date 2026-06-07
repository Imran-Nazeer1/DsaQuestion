#include<bits/stdc++.h>
using namespace std;
void display (vector<int> v){
    cout<<"Your array:";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void dutchsort(vector<int>& v){
    // one pass m sort krna
    int left=0;
    int mid=0;
    int right=v.size()-1;
    while(mid<right){
        if(v[mid]==0){
            swap(v[left],v[mid]);
            left++;
            mid++;
        }
        else if(v[mid]==2){
            swap(v[mid],v[right]);
            right--;
        }
        else{
            mid++;
        }
    }
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
    vector<int> v={2,0,2,1,1,0,0,0,1,1,2,1,2,0};
    display(v);
    // sort(v);
    dutchsort(v);
    display(v);
}