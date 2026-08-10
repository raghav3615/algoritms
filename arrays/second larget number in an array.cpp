#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mx = INT_MIN;
    int sec_mx = INT_MIN;

    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        if(arr[i] > mx) {
            sec_mx = mx;
            mx = arr[i];
        } else if (arr[i] > sec_mx && arr[i] != mx) {
            sec_mx= arr[i];
        }
    }
    cout<< sec_mx<< " " <<mx;
    return 0;
}