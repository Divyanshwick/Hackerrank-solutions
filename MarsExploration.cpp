#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int k,i,j;
    string check = "SOS";
    int cnt=0;
    int l=s.length();
    int r=l/3;
    char str[r][3];
    for(i=0,k=0;i<r;i++){
        if(k<l){
            for(j=0;j<3;j++){
                str[i][j] = s[k];
                k++;
            }
        }
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<3;j++){
            if(str[i][j] != check[j])
                cnt++;
        }
    }

    return cnt;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
