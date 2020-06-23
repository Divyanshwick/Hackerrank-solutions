#include<bits/stdc++.h>
using namespace std;
int main(){

    int q,i,j;
    string s;
    string chk = "hackerrank";
    cin >> q;
    for(i=0;i<q;i++){
        cin >> s;
        int k = 0;
        for(j=0;j<s.length();j++){
            if(k < chk.length() && j < s.length() && chk[k] == s[j]) k++;
        }

        if(k == chk.length()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
