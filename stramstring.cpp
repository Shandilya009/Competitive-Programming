#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string s = "shubham shandilya is a boy boy shubham";
    stringstream ss(s);

    string temp;
    vector<string> v;

    while(ss >> temp){
        v.push_back(temp);   
    }

    sort(v.begin(), v.end());

    int maxc = 1;
    int count = 1;

    // find max frequency
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxc = max(maxc, count);
    }

    // print result
    count = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }

        if(count == maxc){
            cout << v[i] << " " << maxc << endl;
        }
    }

    return 0;
}