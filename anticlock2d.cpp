#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    // Row-wise printing
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int arr1[3][3];

    // Column-wise printing (Transpose)
    for(int i=0;i<3;i++){          // columns become rows
        for(int j=0;j<3;j++){      // rows become columns
           arr1[i][j]= arr[j][i];
        }
    }
        for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j];
        }
    cout<<endl;
}

}