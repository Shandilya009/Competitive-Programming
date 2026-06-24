#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(s.begin(),s.end());
    if (s==t) cout<<"same";
    else cout<<"diff";
        
    }


