#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="shubhamshandilya";
    // int max=0;
    // for(int i=0;i<s.length();i++){
    //     char ch= s[i];
    //     int count=0;
    //     for(int j=0; j< s.length();j++){
    //         if(s[j]==s[i]){
    //             count++;
    //         }

    //     }
    //     // max=max(count ,max);
    //     if(count>max)max=count;
        
    // }
    // cout<<max;
    vector<int>ch(26,0);
    for(int i=0;i<s.length();i++){
        int asci=(int)s[i];
        ch[asci-97]++;

    }
    int max=0;
    for(int i=0;i<26;i++){
        if (max<ch[i]) max=ch[i];

    }
        for(int i=0;i<26;i++){
        if (max==ch[i]) {
            int asci=97+i;
            cout<<ch[i]<<" "<<(char)asci;

    }




}