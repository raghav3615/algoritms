#include <bits/stdtr1c++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int left = 0, right = s.length() - 1;
    
    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        } else if (!isalnum(s[right])) {
            right--;
        } else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    
    cout << s << endl;
    
    return 0;
}