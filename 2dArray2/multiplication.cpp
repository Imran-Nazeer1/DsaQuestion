#include<bits/stdc++.h>
using namespace std;
int main (){
    int m;
    cout<<"Enter no of rows of 1st matrix:";
    cin>>m;
    int n;
    cout<<"Enter no of colom of 1st matrix:";
    cin>>n;
    int p;
    cout<<"Enter no of rows of 2nd matrix:";
    cin>>p;
    int q;
    cout<<"Enter no of colom of 2nd matrix:";
    cin>>q;

    if(n==p){//these two are col of 1st mat and row of 2nd mat need to be equal
        int a[m][n];//1st array
        cout<<"Enter the element of 1st array:";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        // second array 

        int b[p][q];
        cout<<"Enter the element of 2nd array:";
        for(int i=0;i<p;i++){//row
            for(int j=0;j<q;j++){//col
                cin>>b[i][j];
            }
        }
        cout<<endl;
        // printing both the array

        for(int i=0;i<m;i++){//row
            for(int j=0;j<n;j++){//col
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        for(int i=0;i<p;i++){//row
            for(int j=0;j<q;j++){//col
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        // multiplication

        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                //yha pr third for loop for traveling q ki row and col dono fix h 
                res[i][j]=0;

                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){//row
            for(int j=0;j<q;j++){//col
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else{
        cout<<"These two matrix cant be multiplied:";
    }
}