#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i;
    long long arr[5],MinSum=0,MaxSum=0;;
    for(i=0;i<5;i++)
        cin >> arr[i];

    sort(arr,arr+5);

    for(i=0;i<4;i++)
        MinSum+=arr[i];
    
    for(i=1;i<5;i++)
        MaxSum+=arr[i];
    
    cout << MinSum << " " << MaxSum;

    return 0;
    
}
