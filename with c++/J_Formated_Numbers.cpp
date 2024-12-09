#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    string ans;
    int count = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
        ans = s[i] + ans;
        count++;
        if (count == 3 && i != 0) {
            ans = ',' + ans;
            count = 0;
        }
    }
    cout << ans << endl;
    
    return 0;
}