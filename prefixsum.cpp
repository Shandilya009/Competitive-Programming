#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,3,4,6,7,8,8};
    int n=v.size();
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
     for(int i=0;i<n;i++){
        int k=v[i];
        if((2*k)==v[n-1]){
            cout<<i;
            break;
        }
        
    }

}