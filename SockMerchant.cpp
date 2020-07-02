#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,j,i,cnt,Tcnt=0;
    cin >> n;
    int arr[n];
    
    for(i=0;i<n;cin >> arr[i++]);

    sort(arr,arr+n);
    
    for(i=0;i<n-1;i++){
        cnt=1;
        j=i+1;
        while(arr[i] == arr[j]){
            cnt++;
            j++;
        }
        i=j-1;
        Tcnt+=(cnt/2);
    }
    cout << Tcnt;
    return 0;
}

