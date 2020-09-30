#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    string t;
    int k;
    cin >> s >> t >> k;
    int j=0,cnt=0,temp=0;

    if(s.length() > t.length()) {
        int j = 0;
        for(int i=0;i<s.length();i++) {
            if(t.length() > i) {
                if(s[i] != t[j++]) {
                    cnt++;
                    
                }
            } 
            
        }
        
        temp = cnt;
        cnt+=(s.length()-t.length());
        
        
        
        if(cnt > k) cout << "No";
        else cout << "Yes";
        
    } else if(s.length() == t.length()) {
        int j = 0;
       
        for(int i=0;i<s.length();i++) {
            if(s[i] != t[j++]) {
                cnt++;
            } 
        }
        if((s.length()-cnt >= k && cnt != 0) || (s.length() == k || t.length() == k)) cout << "No";
        else if(k < (cnt*2)) cout << "No";
        else cout << "Yes";

    } else if(s.length() < t.length()) {
        for(int i=0;i<s.length();i++) {
            if(s[i] != t[j++]) {
                cnt++;
            }
        }
        cnt+=(t.length() - s.length());
        if((s.length() == k || t.length() == k) || (k%(t.length()-s.length()) != 0)) cout << "No";
        else if(k < cnt) cout << "No";
        else cout << "Yes";
    } 

    return 0;
}
