#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    string str;
    cin >> str;
    cin >> k;
    k%=26;
    for(int i=0;i<n;i++){
        int temp=str[i];
        
        if(str[i]>=97 && str[i]<=122){
            temp+=k;
            if(temp > 122){
                str[i] = 96+(temp%122);
            }
            else str[i]+=k;
        }
        else if(str[i] >=65 && str[i] <= 90){
            temp+=k;
            if(temp > 90){
                str[i] = 64+(temp%90);
            }
            else str[i]+=k;

        }
    }
    cout << str;
    return 0;
}
