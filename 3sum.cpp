#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"ENTER A NUMBER"<<endl;
    cin>>n;
    vector<int> v;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    vector<vector<int>> ans;

   sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i>0 && v[i]==v[i-1]) continue;
    int l=i+1;
    int r=n-1;
    while(l<r){
        sum=v[i]+v[l]+v[r];
    if(sum==0){
        ans.push_back({v[i],v[l],v[r]});
    
    while(l<r && v[l]==v[l+1]){
        l++;
    }
    while(l<r && v[r]==v[r-1]){
        r--;
    }
    i++;
    r--;
}

else if(sum<0){
    l++;
}

else{
    r--;
}
    }
}
for(int i = 0; i < ans.size(); i++) {
    for(int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}


}
