// Kadane's Algorithm to find the maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int mx = INT_MIN;
    int curr = 0;

    for (int i = 0; i < arr.size(); i++) {
        curr += arr[i];
        mx = max(mx, curr);
        if (curr < 0) {
            curr = 0;
        }
    }
    cout << "Maximum Subarray Sum: " << mx << endl;
    return 0;
}