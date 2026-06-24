
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
    vector<int>v={18,9,7,34,8};
    int n=v.size();
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(min>v[j]){
                min=v[j];
                mindx=j;
            }
          

        }
        swap(v[i],v[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
  
   
}