#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,4,5,5,6,7};
    int k=3;
    int maxsum=0,maxind=0;
    for(int i=0;i<9-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxind=i;
        }
    }
    cout<<maxsum;
}