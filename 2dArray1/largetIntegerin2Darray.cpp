#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][2]={{24,34},{21,45},{45,67}};
    int max=INT16_MIN;
    for (int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<"max in array is:"<<max;
}