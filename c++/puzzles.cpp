#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, x, min = 1000;
    cin >> n >> m;
    vector<long long> nums;
    while(m--){
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i<=nums.size()-n; i++){
        if(nums[i+n-1]-nums[i]<min) min = nums[i+n-1]-nums[i];
    }
    cout << min << endl;
    return 0;
}