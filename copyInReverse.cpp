#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1;
    int n;
    cout<<"Enter number";
    cin>>n;
    vector <int >v2;
    int n1;
    cout<<"Enter number";
    for(int i =0;i<n;i++){
        
        cin>>n1;
        v1.push_back(n1);

    }
    for(int i =0;i<n;i++){
        cout<<v1[i];
}
     for(int i = n - 1; i >= 0; i--) {
    v2.push_back(v1[i]);
}
for(int i =0;i<n;i++){
        cout<<v2[i];
}


}