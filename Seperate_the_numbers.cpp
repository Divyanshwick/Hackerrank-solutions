#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;  
        long long int num1=0,num2=0,num3;
        int flag=0;
    for(int i=0;i<=str.size()/2;i++) {
        num1=num1*10+((int)str[i]-'0');
         num3=num1;
         flag=0;
         num2=0;
            for(int j=i+1;j<str.size();j++) {
               num2=num2*10+((int)str[j]-'0');
                if(num2==0 || (num2-num1)>1){flag=0; break;}
                if((num2-num1)==1){flag=1; num1=num2;num2=0; }
                else  { flag=0;  }

            }
            if(flag){cout<<"YES"<<" "<<num3<<endl; break;}

            num1=num3;

    }
    if(!flag)cout<<"NO"<<endl;
    }
   return 0;
  }
