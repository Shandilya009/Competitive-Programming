#include<iostream>
using namespace std;
bool fun(int n){
   if(n%2==0 || n==0) return false;
    fun(n/2);
    if(n==1) return true;
}
int main(){
    int x;
    cin>>x;
    cout<<fun(x);
}