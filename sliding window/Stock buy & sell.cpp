#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int mx = INT_MIN;
    int mn = INT_MAX;
    int profit = 0;

    for(int i =0; i<n; i++) {
        mn = min(mn, prices[i]);
        mx = max(mx, prices[i] - mn);
    }
    return mx;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}