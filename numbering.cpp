
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
    vector<int>v={18,9,7,34,8};
    int n=v.size();
    int x=0;
    vector<int>v1(n,0);
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(v1[j]==1)continue;
            else{
                if(min>v[j]){
                    min=v[j];
                    mindx=j; 
            }
        }
    }
        v[mindx]=x;
        x++;
        v1[mindx]=1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}