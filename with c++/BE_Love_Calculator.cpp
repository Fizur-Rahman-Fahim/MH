#include <bits/stdc++.h>
using namespace std;

int number(int n)
{
    if(n<10)
    {
        return n;
    }
    else
    {
        int sum=0;
            while(n>0)
            {
                sum+=n%10;
                n/=10;
            }
        return number(sum);
    }
}

int name(string a)
{
    int sum=0;
    for(int i=0;i<a.length();i++)
    {
        if(toupper(a[i]) >=65 && toupper(a[i])<=90 )
        {
            sum+=toupper(a[i])-64;
        }
    }
    return number(sum);
}

int main()
{
    char a[30], b[30];
    while(gets(a))
    {
        gets(b);
        double i=name(a)/1.0;
        double j=name(b)/1.0;
        if (i < j)
            printf("%.2f %%\n", i * 100.0 / j);

        else
            printf("%.2f %%\n", j * 100.0 / i);
    }
}