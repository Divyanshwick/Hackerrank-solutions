#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int a,b,k;
    cin >> a >> b >> k;
    int cnt = 0;
    for(int i=a;i<=b;i++) {
        int temp = i;
        int rem = 0;
        int rev = 0;
        
        while(temp != 0) {
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp/=10;
        }

        if(abs(i - rev)%k == 0) cnt++;


    }
    cout << cnt << endl;
    return 0;
}
