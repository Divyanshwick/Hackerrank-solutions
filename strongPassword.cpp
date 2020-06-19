#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin >> n;
    int flag[4]={0};
    string str;
    cin >> str;
        for(int i=0;i<n;i++){
            if(str[i]>=65 && str[i]<=90)
                flag[0]=1;
            else if(str[i]>=97 && str[i]<=122)
                flag[1]=1;
            else if(str[i]>=48 && str[i]<=57)
                flag[2]=1;
            else 
                flag[3]=1;
        }
        
        for(int i=0;i<4;i++)
            if(flag[i]==0)
                cnt++;
            
        if(n >= 6)
            cout << cnt;
        else if(n < 6){
            if((6-n) >= cnt)
                cout << 6-n;
            else cout << cnt;
            
        }

    
       
    return 0;
}
