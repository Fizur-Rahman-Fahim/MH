#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    
    if (n >= -2147483648 && n < 2147483648){
        cout<< "Yes" << endl;
    }
    else{
        cout<< "No" << endl;
    }
    return 0;
}