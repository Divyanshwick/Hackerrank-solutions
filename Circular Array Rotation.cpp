#include<iostream>
using namespace std;

int main() {
    long long int n,k,q,m;
    cin >> n >> k >> q;
    long long int arr[n];
    
    for(long long int i=0;i<n;cin >> arr[i++]);
    
    
    for(long long int i=0;i<k;i++) {
        long long int ls = arr[n-1];
            
        for(long long int j = n-1;j>0;j--) {
            arr[j] = arr[j-1];
        }
            
        arr[0] = ls;
    }
    
    while(q--) {
        cin >> m;
        cout << arr[m] << endl;
    }
   
    
    return 0;
}
