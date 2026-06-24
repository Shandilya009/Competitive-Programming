#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m = 5;
    vector<vector<int>> v;

    for(int i = 0; i < m; i++) {
        vector<int> a(i+1);
        v.push_back(a);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;i++){
            if(i==j || j==0 ){
                v[i][j]=1;

            }
            else{
                v[i][j]=v[i-1][j]+ v[i-1][j-1];
            }
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<=i;i++){
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}