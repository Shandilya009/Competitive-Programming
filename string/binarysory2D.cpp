#include <iostream>
#include<string.h>

using namespace std;

int main() 
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=arr.size();
    int n=arr[0].size();
    int target=7;
      int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / n;
            int col = mid % n;
            if (arr[row][col] == target)
                return true;
            else if (arr[row][col] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
// 
}