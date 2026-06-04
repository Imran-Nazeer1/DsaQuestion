#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v){
    cout<<"Your array:";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void rotate(vector<int> &v, int left, int right)
{
    while (left < right)
    {
        swap(v[left], v[right]);
        left++;
        right--;
    }
}
int main (){
    // rotate array by k
    vector<int> a={1,6,2,3,7,4};
    display(a);
    int k=3;
    int n=a.size();
    if (k>n) k=k%n;
    int remaining=n-k-1;
    rotate(a,0,remaining);
    rotate(a,remaining+1,a.size()-1);
    rotate(a,0,a.size()-1);
    display(a);

}