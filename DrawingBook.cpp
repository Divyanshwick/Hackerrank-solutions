#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,p;
    cin >> n >> p;
    int totalSinglePage = n/2;
    int tofindSinglePage = p/2;
    int min = totalSinglePage - tofindSinglePage;
    if(min > tofindSinglePage) {
        min = tofindSinglePage;
    }

    cout << min;

    return 0;
    


}
