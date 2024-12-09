#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
cin>>n>>k;

int a=5,sum=0;
k=240-k;


if(k<5 || n==0)
{
    cout<<0<<endl;
    return 0;
}
else{


    while(k>=a)
    {

    k=k-a;
    a=a+5;
    sum++;

    }
}
cout<<sum<<endl;
    return 0;
}