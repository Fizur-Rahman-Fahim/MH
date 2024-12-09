#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    
    for (int i=1; i<=n; i++)
    {
        int a = arr[i];
        int b = arr[a];
        int c = arr[b];
        if ( arr[c] == a )
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO";

    return 0;
}