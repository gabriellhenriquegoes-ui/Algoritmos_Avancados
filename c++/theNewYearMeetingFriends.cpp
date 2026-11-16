#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> nums;
    long long a;
    for(int i = 0; i < 3; i++){
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    cout << (nums[1]-nums[0])+abs(nums[1]-nums[2]);
    return 0;
}