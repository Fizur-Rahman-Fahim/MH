#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,count=0;
    cin>>n>>m;
    for (int i=0;i<1000;i++)
    {
        for (int j=0;j<1000;j++)
        {
            a=i;
            b=j;
            int ans1=a*a+b ;
            int ans2=a+b*b ;
            if ( ans1 == n && ans2 == m )
            {
                count++;
            }
            else if ( ans1 > n || ans2 > m )
            {
                break;
            }
        }
    }
    
    cout<<count<<endl;

    return 0;
}