#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> arr = {1, 2, 3, 4, 5, 3};

    unordered_set<int> counter;
    for (int num : arr) {
        if (counter.find(num) != counter.end()) {
            cout << "Array contains duplicates." << endl;
            return 0;
        }
        counter.insert(num);
    }
    cout << "Array does not contain duplicates." << endl;
    return 0;
}