// Optimal way to find leader in an array 

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 5, 8, 12, 11};
    int n = arr.size();
    int mx = arr[n-1];

    vector <int> leaders;
    leaders.push_back(mx);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] > mx) {
            mx = arr[i];
            leaders.push_back(mx);
        }
    }
    reverse(leaders.begin(), leaders.end());
    for(auto x: leaders) {
        cout << x << " ";
    }
    return 0;
}