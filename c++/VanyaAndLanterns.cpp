#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, l, x;
    double maior = 0, dif = 0;
    cin >> n >> l;
    vector<long long> nums;
    while(n--){
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    if(!ranges::contains(nums, 0)){
        dif = nums[0];
    }
    if(!ranges::contains(nums, l)){
        if(l-nums[nums.size()-1]>dif){
            dif = l - nums[nums.size()-1];
        }
    }
    for(int i = 1; i < nums.size(); i++){
        if(((double)nums[i]-nums[i-1])/2>dif){
            dif = ((double)nums[i]-nums[i-1])/2;
        }
    }
    cout << fixed << setprecision(10) << dif;
    return 0;
}