#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >>arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i; j < n ; j++){
            cout << arr[j];
        }
        cout << endl;
    }
    return 0;
}