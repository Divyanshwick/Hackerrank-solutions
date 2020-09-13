#include<bits/stdc++.h>
using namespace std;

int main() {
    int b,n,m;
    cin >> b >> n >> m;
    int key[n],usb[m],res = -1;
    
    for(int i=0;i<n;cin >> key[i++]);
    for(int i=0;i<m;cin >> usb[i++]);

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(key[i] + usb[j] <= b) {
                res = max(res,key[i]+usb[j]);
            }
        }
    }
    cout << res;
    return 0;
}
