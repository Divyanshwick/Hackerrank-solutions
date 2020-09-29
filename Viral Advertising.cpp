#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int shared = 5,liked,total = 0;
    for(int i=1;i<=n;i++) {
        liked = floor(shared/2);
        total+=liked;
        shared = liked * 3;
    }

    cout << total << endl;
    return 0;

}
