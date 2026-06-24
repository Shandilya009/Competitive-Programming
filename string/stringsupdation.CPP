#include<iostream>
#include<string>
using namespace std;
int main(){
    
    char s[6];
   
    cout<<"enter a ";
    for(int i=0;i<6;i++){
        cin>>s[i];
        
    }
  for(int i=0;i<6;i++){
    if(i%2==0)s[i]='o';
    
  }
  string str="shuham";
  str.push_back('m');
  cout <<str<<endl;

}

