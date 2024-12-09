#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string text;
    bool flag = true;

    while (getline(cin, text)) {
        for (size_t i = 0; i < text.length(); i++) {
            if (text[i] == '"') {
                if (flag)
                    cout << "``";
                else
                    cout << "''";

                flag = !flag;
            } else {
                cout << text[i];
            }
        }
        cout << endl;
    }
    return 0;
}
