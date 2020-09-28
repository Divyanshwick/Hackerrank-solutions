#include<iostream>
using namespace std;

int main() {
    int t,n,k;
    cin >> t;
    while(t--) {
        int cnt = 0;
        cin >> n >> k;
        int arr[n] = {0};
        
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            
            if(arr[i] <= 0) cnt++;
            
        }
       
        if(cnt >= k) cout << "NO" << endl;
        else cout << "YES" << endl;


    }
    return 0;
}
