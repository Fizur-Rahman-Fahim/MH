#include<bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int array[x];

    for(int i = 0; i < x; i++) {
        cin >> array[i];
    }
    int c = 0;
    int sum = 0;
    for(int i = 0; i < x; i++){
        if(array[i] == y) c++;
        for(int j = i; j < x; j++){
            sum = sum + array[i] + array[j];
            if(sum == y){
                c++;
            }
            else if(array[i] + array[j] < y){
                j++;
                continue;
            }
        }
    }
    cout << c;
}