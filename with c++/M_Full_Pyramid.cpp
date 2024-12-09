#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        for (int j=n-i; j>1; j--)
        {
            cout << " ";
        }
        for (int j=0; j<=(2*i); j++)
        {
            if(j%2==0)
                cout << "*";
            else
                cout << " ";
        }
        cout<<endl;
    }
    return 0;
}