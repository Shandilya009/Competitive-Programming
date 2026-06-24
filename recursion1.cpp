#include<iostream>
using namespace std;
int print1(int a){
    if(a==0) return 0;
    print1(a-1);
    cout<<a;
    return 0;
}
int print(int a){
    if(a==0) return 0;
    cout<<a;
    return print(a-1);
}
int main(){
    int a;
    cin>>a;
    print1(a);
    print(a);
}