#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1=1, n2=1, ans;
    if ( n==1 || n==2){
        cout<<1<<endl;
        return 0;
    }
    int m = n-2;
    while(m--)
    {
        ans=n1+n2;
        n1=n2;
        n2=ans;
    }
    cout<<ans<<endl;

    return 0;
}