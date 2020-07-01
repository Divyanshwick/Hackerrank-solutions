#include<iostream>
using namespace std;
int main(){
    int n,d,m,sum;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;cin >> arr[i++]);
    cin >> d >> m;
    int cnt=0;
    if(n == 1 && m == 1){
        if(arr[0] == d)
            cout << 1;
    }
    else{
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i+1;j<=i+m-1;j++) 
                sum+=arr[j];
            if(arr[i]+sum == d) cnt++;
        }
        cout << cnt;
    }

}
