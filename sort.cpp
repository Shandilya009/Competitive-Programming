#include<iostream>
#include<vector>
using namespace std;
void sort1(vector<int>& v){
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noo++;            
        } 
   }
    for(int i=0;i<noz;i++){
        v[i]=0;

   }
   for(int i=noz;i<v.size();i++){
    v[i]=1;
   }
//     for(int i=0;i<v.size();i++){
//     cout<<v[i];
//    }
}
void sort(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==1 &&v[j]==0){
            v[i]=0;
            v[j]=1;
            j--;
            i++;

        } 
        if(v[i]==0)i++;
        if(v[j]==1)j--;
    }
}
int main(){
   vector <int> v;
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);
   v.push_back(0);
   v.push_back(1);
   v.push_back(0);
   v.push_back(1);
   for(int i=0;i<v.size();i++){
    cout<<v[i];
   }
   cout<<endl;
   
   sort(v);
   for(int i=0;i<v.size();i++){
    cout<<v[i];
   }

}