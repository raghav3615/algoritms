// with STL

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     getline(cin, s);
//     s.erase(remove(s.begin(), s.end(), ' '), s.end());
//     cout << s;
// }



// without STL

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans;
    getline(cin, s);

    for (char c : s)
        if (c != ' ')
            ans += c;

    cout << ans;
}