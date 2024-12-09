#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int casee = 1;
    while(t--)
    {
        // char c ;
        // cin>>c;
        int n;
        cin>>n;
        int sum = 0;
        for (int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if( x>0)
            {
                sum += x;
            }
            
        }
        cout<< "Case " << casee << ": "<<sum << endl;
        casee++;
    }
    return 0;
}