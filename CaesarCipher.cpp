#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    string str;
    char temp;
    cin >> str;
    cin >> k;
    for(int i=0;i<n;i++){
        
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
            temp=str[i]+k;               
            if((temp>=90 && temp<97) || (temp>122)){
                str[i]+=(k-26);
            }
            else str[i]+=k;
            
        }
    }
    cout << str;
    return 0;
}
