#include<bits/stdc++.h>
using namespace std;
int main (){
    stack<int> st;
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.size()<<endl;

    // map

    map<int ,int> m;
    m[0]=4;
    m[1]=5;
    m[4]=8;

    for (int i =0;i<m.size();i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    cout<<m.size();
}