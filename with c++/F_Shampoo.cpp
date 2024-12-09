#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v, a, b, c;
    cin>> v >> a >> b >> c;
    while (true)
    {
        cout << v ;
        if (v<a)
        {
            cout << "F";
            break;
        }
        else
        {
            v = v-a;
        }
            
        
        if (v<b)
        {
            cout << "M";
            break;
        }   
        else 
        {
            v = v-b;
        }

        if (v<c)
        {
            cout << "T";
            break;
        }
        else
        {
            v = v-c;
        }
    }
    
    return 0;
}