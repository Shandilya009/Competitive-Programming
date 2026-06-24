#include <iostream>
#include <cmath>
using namespace std;

bool leap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

long long totalDays(int d, int m, int y) {
    long long days = d;

    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int i = 1; i < y; i++) {
        days += leap(i) ? 366 : 365;
    }

    for (int i = 1; i < m; i++) {
        days += month[i - 1];
        if (i == 2 && leap(y))
            days++;
    }
    return days;
}
int main() {
    int n;
    cin >> n;  
    int dd=n / 10000;
    int mm=(n / 100)%100;
    int yy=(n % 100)+2000;
    int dd1=24;
    int mm1=6;
    int yy1=2006;
    long long date1=totalDays(dd, mm, yy);
    long long date2=totalDays(dd1, mm1, yy1);
    cout << (abs(date1 - date2));

    return 0;
}