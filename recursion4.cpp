#include<iostream>
using namespace std;
int print1(int a,int b){
    if(a>b) return 0;
    print1(a+2,b);
    cout<<a;
    return 0;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    print1(a,b);
}