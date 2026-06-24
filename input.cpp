#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){   
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    cout<<endl;
    int *ptr=a;
    for(int i=0;i<5;i++){
        cout<<*ptr;
        ptr++;
    }
    return 0;
}