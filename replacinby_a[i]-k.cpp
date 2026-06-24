
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main() {
    vector<int>v={18,9,7,34,8};
    int k=2;
    int n=v.size();
    float kmin=INT_MIN;
    float kmax=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1]){
        kmin=max(kmin,(v[i]+v[i+1])/2.0);
        }
        else {
            kmax=min(kmax,(v[i]+v[i+1])/2.0);
        }
      

    }
    if(kmax<kmin) cout<<-1;

    else cout<<kmin<<" "<<(int)kmax;
   
}