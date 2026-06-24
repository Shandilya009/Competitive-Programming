#include<iostream>
using namespace std;
int fun(int n){
    if(n==0) return 0;
    if(n<0 ) return 0;
    return fun(n-1)+fun(n-2)+fun(n-3);
    
}
int main(){
    int x;
    cin>>x;
    cout<<fun(x);
}