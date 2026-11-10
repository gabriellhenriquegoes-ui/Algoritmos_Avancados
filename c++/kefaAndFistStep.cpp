#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, seq, maior;
    seq = 1;
    maior = 1;
    cin >> a;
    vector<long long> nums;
    while(a--){
        long long b;
        cin >> b;
        nums.push_back(b);
    }
    for(int i = 1; i<nums.size(); i++){
        if(nums[i] >= nums[i-1]){
            seq++;
        }else{
            seq = 1 ;
        }
        if(seq> maior){
            maior = seq;
        }
    }
    cout << maior;
    return 0;
}