#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int sum) {
  
    int s = 0, e = 0;  
  
    vector<int> res;

    int curr = 0;
    for (int i = 0; i < arr.size(); i++) {
        curr += arr[i];


        if (curr >= sum) {
            e = i;

            while (curr > sum && s < e) {
                curr -= arr[s];
                ++s;
            }

            if (curr == sum) {
                res.push_back(s + 1);
                res.push_back(e + 1);
                return res;
            }
        }
    }

    return {-1};
}

int main() {
    vector<int> arr = {15, 2, 4, 8, 9, 5, 10, 23};
    int sum = 23;
    vector<int> res = subarraySum(arr, sum);
    for (auto i : res)
        cout << i << " ";
    return 0;
}