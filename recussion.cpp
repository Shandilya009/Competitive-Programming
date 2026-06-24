#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)return ;
    cout<<"Good morning"<<endl;
    fun(n-1);
}
int main(){
    int x;
    cin>>x;
    fun(x);
}