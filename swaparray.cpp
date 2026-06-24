#include <iostream>
using namespace std;
void swap(int a[],int n){
    a[3]=49;
}
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    display(arr,5);
    swap(arr,5);
    display(arr,5);
}