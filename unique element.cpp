// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main() {
    vector<int>v={1,2,3,4,1,2,9,78,1,9};
    unordered_map<int,int>freq;
    for(int x:v){
        freq[x]++;
        
    }
    for(int x:v){
        if(freq[x]==1){
            if(freq[x]!=-1)
            cout<<x<<" ";
            freq[x]=-1;
            break;
        }
    }
    

    return 0;