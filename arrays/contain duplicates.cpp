#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> arr = {1, 2, 3, 4, 5, 3};
    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            cout << "Array contains duplicates." << endl;
            return 0;
        }
    }
    cout << "Array does not contain duplicates." << endl;
    return 0;
}