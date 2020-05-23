#include<iostream>
using namespace std;
int main(){
    int s,t,a,b,i,cnt1=0,cnt2=0,m,n;
    cin >> s >> t >> a >> b >> m >> n;
    int apples[m],oranges[n];
    
   for(i=0;i<m;i++){
        cin >> apples[i];
        apples[i]+=a;
        if(apples[i]>=s && apples[i]<=t)
            cnt1++;
    }


    

    
}
