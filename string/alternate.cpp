#include<iostream>
using namespace std;
int main(){
    char str[5]={'a','e','i','o','u'};
 
    int ctr=0;
    for(int i=0;i<5;i++){
        if(i!=0 && i!=5-1 && str[i]==str[i-1] && str[i]==str[i+1]){
            ctr++;

        }
        else if(i==0 && str[i]!=str[i+1]){
            ctr++;
        }
        else if(i=5-1 && str[i]==str[i-1]){
            ctr++;
        }
    }

 

        
    }


