
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
    vector<int>v={18,9,7,34,8};
    int k=2;
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    cout<<v[k-1];
   
}