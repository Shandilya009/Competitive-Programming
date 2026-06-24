#include <iostream>
using namespace std;    
int main(){
    int arr1[3][2];
    int arr2[2][3];
    int n1,n2;
    if(sizeof(arr1[0])/sizeof(arr1[0][0])== sizeof(arr2)/sizeof(arr2[0])){
        cout<<"Enter elements of first matrix";
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter elements of second matrix";
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                cin>>arr2[i][j];
            }
        }
    }

    int res[3][3]={0};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<2;k++){
            res[i][j]+=(arr1[i][k]*arr2[k][i]);
        }
    }
}
for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}