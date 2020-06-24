#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    int flag = 0;
    ll j = s.length()-1;
    
    for(ll i=0;i<s.length()-1;i++,j--){
        if(abs(s[i+1]-s[i]) != abs(s[j] - s[j-1])){
            flag = 1;
            break;
        }

    }
    if(flag == 0) return "Funny";
    else return "Not Funny";    

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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
