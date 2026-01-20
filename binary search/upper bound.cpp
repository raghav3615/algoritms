#include <bits/stdc++.h>
using namespace std;

class LowerBoundFinder {
public:
    int UpperBound(vector<int> arr, int n, int x) {
        int low = 0;           // Start of search range
        int high = n - 1;      // End of search range
        int ans = 0;           // Default to 0 (not found)

        // Binary search loop
        while (low <= high) {
            int mid = (low + high) / 2;  // Middle index

            if (arr[mid] > x) {
                ans = mid;           // Store possible answer
                high = mid - 1;      // Try to find smaller index on left side
            } else {
                low = mid + 1;       // Move right if current element is less than x
            }
        }
        return ans;  // Return the index of the lower bound
    }
};
