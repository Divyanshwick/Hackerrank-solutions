#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,q,i,j;
    cin >> n >> q;
     vector<vector<int>>a(n);

     for(i=0;i<n;i++){
         int k;
         cin >> k;
         
         a[i].resize(k);
         
         for(j=0;j<k;j++){
             cin >> a[i][j];
         }
     }
     for( int b=0;b<q;b++){
     cin >> i >> j;
     cout << a[i][j] << "\n";
     }
     return 0;
} 


