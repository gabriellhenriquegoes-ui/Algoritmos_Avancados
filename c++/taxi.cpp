#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c = 0, l = 0, r;
    cin >> a;
    vector<long long> nums;
    while(a--){
        cin >> b;
        if(b == 4){
            c++;
        }
        else{
            nums.push_back(b);
        }
    }
    sort(nums.begin(), nums.end());
    r = nums.size()-1;
    
    while(r>=l){
        c++;
        int ocupacao = nums[r];
        r--;
        while(r >= l && ocupacao+nums[l] <= 4){
            ocupacao += nums[l];
            l++;
        }
    }
    cout << c << '\n';
    return 0;
}