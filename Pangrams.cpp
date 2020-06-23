#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    char chk[27]={0};
    
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90) chk[s[i]-65] = 1;
        else if(s[i]>=97 && s[i]<=122) chk[s[i]-97] = 1;
        else if(s[i] == 32) chk[26] = 1;
        
    }
    
    for(int i=0;i<27;i++)
        if(chk[i] == 0) return "not pangram";
    
    return "pangram";
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
