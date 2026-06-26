#include<iostream>
#include<vector>
using namespace std;

void fun(vector<vector<int>>&arr,int a,int b,int val){
    for(int j=a;j<b;j++){
        arr[a][j]=val;
        arr[b-1][j]=val;
        arr[j][a]=val;
        arr[j][b-1]=val;
    }
}
int main(){
    int n=4;
    int x=1+(n-1)*2;
    vector<vector<int>>arr(x,vector<int>(x));
    int a=0;
    int b=x;
    for(int i=n;i>=1;i--){
        fun(arr,a,b,i);
        a++;
        b--;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}