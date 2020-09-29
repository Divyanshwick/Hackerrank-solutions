#include<iostream>
using namespace std;
int main() {
    int t;
    int n,m,s;
    cin >> t;
    while(t--) {
        cin >> n >> m >> s;
        int lp = (m-1+s)%(n);
        if(lp == 0) cout << n << endl;
        else cout << lp << endl;
    }
    return 0;
}
