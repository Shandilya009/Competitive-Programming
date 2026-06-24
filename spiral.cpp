
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    cout << "Enter rows: ";
    cin >> m;

    cout << "Enter cols: ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    // Input
    cout << "Enter matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int minr=0,maxr=m-1;
    int minc=0,maxc=n-1;

    cout<<"Spiral Print:\n";
    while(minr<=maxr && minc<=maxc){
        if(minr >maxr || minc>maxc) break;// alternate use tne=n*m and count++ mad if count>tne then break
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j];
           
        }
        minr++;
        if(minr >maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc];
        }
        maxc--;
        if(minr >maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i];
        }
        maxr--;
        if(minr >maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc];
        }
        minc++;

    }


}