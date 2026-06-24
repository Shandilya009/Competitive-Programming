#include<iostream>
using namespace std;
int fun(int n){
   
    if(n==0 || n==1)return 1;
     return n* fun(n-1);
}
int main(){
    int x;
    cin>>x;
    cout<<fun(x);
}