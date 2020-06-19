#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string str;
    cin >> str;
    ll l = str.length();
    ll cnt = 1;
    for(ll i=0;i<l;i++){
        if(str[i] >= 65 && str[i] <= 90)
            cnt++;
    }
    cout << cnt << endl;
    return 0;

}
