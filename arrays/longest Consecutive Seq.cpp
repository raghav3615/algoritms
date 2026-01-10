#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxlen= 0;

        for (int num : s) {
            if(s.find(num-1)== s.end() ) {
                int rn = num;
                int len = 1;

                while(s.find(rn + 1) != s.end() ) {
                    rn++;
                    len++;
                }
                maxlen = max(maxlen, len);
            }
        }

        return maxlen;
    }
};