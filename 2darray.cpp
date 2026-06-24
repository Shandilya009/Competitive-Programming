#include<iostream>
using namespace std;
int main(){
int arr[3][3]={{1,2,3},{2,3,4},{7,8,9}};
// int arr2[3][2]={1,2,3,4,5,6};
// int  arr1[][3]={12,32,23,23,23,23};
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 int arr[2][4];
 for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
 }
  for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j];
    }
    
 }
}