#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[10000]; 
    int size = 0;  

    int number;
    while (cin >> number) 
    {
        int pos = size;
        while (pos > 0 && arr[pos - 1] > number) 
        {
            arr[pos] = arr[pos - 1];
            pos--;
        }
        arr[pos] = number;
        size++;

        if (size % 2 == 1) 
        {
            cout << arr[size / 2] << endl;
        } 
        else 
        {
            cout << (arr[size / 2] + arr[size / 2 - 1]) / 2 << endl;
        }
    }

    return 0;
}
