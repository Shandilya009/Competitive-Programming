#include<iostream>
#include<vector>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    vector<int>arr={5,3,10,3};
    int n=arr.size();
    float kmin=INT_MIN;
    float kmax=INT_MAX;
    int f=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            kmax=min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmax<kmin){
            f=false;
            return 0;
        }
    } 
    if(f==false)cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout <<kmin;
        }
        else cout<<-1;

    }
    else{

        if(kmin-(int)kmin>0){
            kmin=kmin+1;
        }
    cout<<(int)kmin<<","<<(int)kmax;  
    }

}