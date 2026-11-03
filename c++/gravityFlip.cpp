#include <bits/stdc++.h>
using namespace std;

int main(){
    long long tam;
    cin >> tam;
    vector<long long> nums(tam);
    for(int i = 0; i<tam;i++){
        long long num;
        cin >> num;
        nums[i] = num;
    }
    ranges::sort(nums);
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}