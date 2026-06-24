// // Online C++ compiler to run C++ program online
// #include <iostream>
// //#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr={1,1,1,2,2,3,1,1,3,3,4,5,6,6,8,6,5,4,4};
//     unordered_map<int,int>freq;
//     for(int x:arr){
//         freq[x]++;
//     }
    
//     sort(arr.begin(),arr.end(),[&](int a, int b){
//         if(freq[a]==freq[b]){
//             return a>b;
//         }
//         return freq[a]>freq[b];
//     });
 
// for (int i = 0; i < arr.size(); i++) {
//     if (freq[arr[i]] != -1) {
//         cout << arr[i] << " -> " << freq[arr[i]] << endl;
//         freq[arr[i]] = -1; // mark as printed
//     }
// }
        
//     }


    //#include <bits/stdc++.h>
    #include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    vector<char> arr = {'a','a','m','n','b','n'};

    unordered_map<char, int> freq;

    // Step 1: Count frequency
    for (auto ch : arr) {
        freq[ch]++;
    }

    // Step 2: Store unique characters
    vector<char> uniqueChars;
    for (auto &it : freq) {
        uniqueChars.push_back(it.first);
    }

    // Step 3: Sort based on frequency + value
    sort(uniqueChars.begin(), uniqueChars.end(), [&](char a, char b) {
        if (freq[a] == freq[b])
            return a > b;          // larger char first
        return freq[a] < freq[b];  // smaller frequency first
    });

    // Step 4: Print using auto
    cout << "Sorted unique characters: ";
    for (auto ch : uniqueChars) {
        cout << ch << " ";
    }

    cout << endl;

    return 0;
}