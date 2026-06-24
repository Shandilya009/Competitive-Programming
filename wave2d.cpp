
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

    cout << "Wave Print:\n";

    // Wave print (row-wise)
    for(int i = 0; i < m; i++) {
        if(i % 2 == 0) {
            // left → right
            for(int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // right → left
            for(int j = n - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}