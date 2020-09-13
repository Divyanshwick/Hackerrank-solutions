#include<bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    ostringstream str1;
    str1 << y;
    string year = str1.str();
    if(y <= 1917) {
        if(y%4 == 0) {
            cout << "12.09." + year;
        } else {
            cout << "13.09." + year;
        }
    } else if(y == 1918) {
        cout << "26.09.1918";
    } else if(y > 1918) {
        if(((y%4 == 0) && (y%100!= 0)) || (y%400 == 0)) {
            cout << "12.09." + year;
        } else {
            cout << "13.09." + year;
        }
    }
    return 0;
}
