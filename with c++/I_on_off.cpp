#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x;
    cin >> n >> m >> x;
    
    if (n < m) {
        if (n <= x && x < m) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (x >= n || x < m) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}