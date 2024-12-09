#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int n;
    cin >> n;
    while(n--){
        cin >> str;
        if(str.size() == 5) cout<< "Osthir Balok" << endl;
        else if(str.size() > 5) cout<< "she is nerd" << endl;
        else if(str.size() == 4) cout<< "he is nerd" << endl;
        else cout<< "sweet Girl" << endl;  
    }
    
}