#include <bits/stdc++.h>

using namespace std;
#define li long int

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int cnt=0;
    li i,j;
    for(i=0;i<s.length()-1;i++){
        for(j=i+1;j<s.length();j++){
            if(s[i] == s[j]) cnt++;
            else if(s[i] != s[j]){
                i=j-1;
                break;
            }
        }
        if(j == s.length())
            break;
    }
   
    return cnt;    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
