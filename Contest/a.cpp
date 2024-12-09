#include<bits/stdc++.h>
using namespace std;



long long int mod(int a, int b, int c){
    if(b==0){
        return 1;
    }
    else if(b % 2 == 1){
        int x = (a % b)%c;
        int y = (mod(a, b - 1, c))%c;
        return (x*y)%c;
       }
       else{
         //int v = (a%b)%c;
         int v = (mod(a, b/2,c))%c;
         return (v*v)%c;
       }

}


int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        long long int c = 10e+7;
        cin >> a >> b;
        cout << mod(a, b, c);
    }
}
