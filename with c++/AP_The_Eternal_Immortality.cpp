#include <bits/stdc++.h>
using namespace std;

long long int a,b,c=1;
int main()
{
    cin>>a>>b;
    for(b;b>a;b--)
    {
        c=c*b;
        c=c%10;
            if(c==0)
            {
                break;
            }
    }
    cout<<c<<endl;
}