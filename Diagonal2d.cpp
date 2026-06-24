
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
         for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if (i==j || (i+j)==n-1){
             
                cout<<arr[i][j];
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
             
 }