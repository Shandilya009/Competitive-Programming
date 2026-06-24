#include <bits/stdc++.h>
using namespace std;

int main() {

    string str = "111+222*3";
    string str1 = "";

    string num[100];
    string num1 = "";

    int result = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '+' || str[i] == '*' ||
           str[i] == '-' || str[i] == '/')
            str1 += str[i];
    }

    int j = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != '+' && str[i] != '*' &&
           str[i] != '-' && str[i] != '/') {
            num1 += str[i];
        }
        else {
            num[j++] = num1;
            num1 = "";
        }
    }

    num[j++] = num1;

    for(int i = 0; i < str1.length(); i++) {

        int a = stoi(num[i]);
        int b = stoi(num[i + 1]);

        if(str1[i] == '+')
            result = a + b;
        else if(str1[i] == '-')
            result = a - b;
        else if(str1[i] == '*')
            result = a * b;
        else if(str1[i] == '/')
            result = a / b;

        num[i + 1] = to_string(result);
    }

    cout << result;

    return 0;
}