#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int l=str.length();
    for(int i=0;i<l;){
        if(str[i] == str[i+1] && i > -1){
            str.erase(i,2);
            i--;
        }
        else i++;
    }
    
    if(str.length() > 0) cout << str << endl;
    else cout << "Empty String" << endl;
    
    return 0;
}
