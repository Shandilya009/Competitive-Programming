#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string str[]={"123", "021","0098","0009909","456","2901"};
    int max=stoi(str[0]);
    string  maxs=str[0];
    for(int i=0;i<5;i++){
        int x=stoi(str[i]);
        if(x>max) {
            max=x;
            maxs=str[i];
        }

    }
    cout<<max<<maxs;
  
}