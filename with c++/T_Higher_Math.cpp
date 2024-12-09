#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas = 1;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if( a> b && a > c )
        {
            if (a*a == b*b + c*c)
            cout << "Case " << cas << ": "<< "yes" << endl;
            else
            cout << "Case " << cas << ": "<< "no" << endl;
        }
        else if( b > a && b > c )
        {
            if (b*b == a*a + c*c)
            cout << "Case " << cas << ": "<< "yes" << endl;
            else
            cout << "Case " << cas << ": "<< "no" << endl;
        }
        else
        {
            if (c*c == a*a + b*b)
            cout << "Case " << cas << ": "<< "yes" << endl;
            else
            cout << "Case " << cas << ": "<< "no" << endl;
        }
        cas++;
    }
    return 0;
}