#include<bits/stdc++.h>
using namespace std;
long long int m = 10e9+7 ;

int summ(long long int n){
long long int sum=0;

for(int i=1;i<=sqrt(n);i++){
    cout << sum<<i<<endl;
if(n%i==0){

if(n%i==i){
sum=sum+(i);
//cout<<i<<" ";

}
else{

   sum=sum+(i+n/i);
 //  cout<<i<<" "<<n/i;

}
}
}
return sum;
}


int main()
{
    
long long int n,sum=0;

cin>>n;

while(n--){
sum=sum+summ(n)+n;


}
 cout<<sum<<endl;


    return 0;
}