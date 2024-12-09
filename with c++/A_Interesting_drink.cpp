#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int q;
    cin>>q;

    while(q--)
    {
        long long int m;
        cin>>m;
        int count=0;
        int p1=0, p2=n-1;
        while(p1<=p2)
        {
            if(a[p1++]<=m || a[p2--]<=m)
            {
                count++;
            }  
        }
        cout<<count<<endl;
    }
    return 0;
}