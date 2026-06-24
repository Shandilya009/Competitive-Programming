#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1;
    int n;
    cout<<"Enter number";
    cin>>n;
    int n1;
    cout<<"Enter number";
    for(int i =0;i<n;i++){
        
        cin>>n1;
        v1.push_back(n1);

    }

    for(int i =0;i<n;i++){
        cout<<v1[i];
}

int i=0;
int j= v1.size()-1;
int temp=0;
while(i<j){
    temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
    i++;
    j--;
}
cout<<endl;
   for(int i =0;i<n;i++){
        cout<<v1[i];
}
}