#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }   
    
    sort(arr,arr+n);

    int dose = arr[n-1] - k;
    
    if(dose <= 0) cout << 0;
    else cout << dose << endl;
    
    return 0;
}
