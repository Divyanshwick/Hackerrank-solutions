#include<iostream>
using namespace std;
#define ll long int
int main(){
    ll n,k,b,sum=0,i;
    cin >> n >> k;
    ll arr[n];
    for(i=0;i<n;cin >> arr[i++]);
    cin >> b;
    ll ba;
    for(i=0;i<n;i++){
        if(i == k) continue;
        else{
            sum+=arr[i];
        }
    }
    ba = sum/2;
    if(ba == b) cout << "Bon Appetit";
    else cout << b-ba;
    
    return 0;    

}
