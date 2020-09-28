#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int arr[26];
    string str;
    
    for(int i=0;i<26;cin >> arr[i++]);

    cin >> str;
    int l = str.length();
    int heights[l] = {0};
    
    for(int i=0;i<l;i++) {
        heights[i] = arr[str[i] - 97];
    }

    sort(heights,heights+l);

    int area = heights[l-1] * l;
    
    cout << area << endl;

    return 0;

}
