#include<iostream>
using namespace std;
void fun(int n,char s,char h,char d){
    if (n==0)  return ;
fun(n-1,s,d,h);
cout<<s<<" "<<d ;
 fun(n-1,h,s,d);
}
int main(){ 
    int x;
    cin>>x;
fun(x,'A','B','C');
}