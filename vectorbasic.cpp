#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(23);
    v.pop_back();
    for(int i=0;i<v.size();i++){
       cout<<v[i];
   }
    v.push_back(2);
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }}