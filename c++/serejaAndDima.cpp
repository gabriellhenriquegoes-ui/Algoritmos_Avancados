#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, sereja = 0, dima = 0, esq = 0, dir;
    vector<long long> nums;
    cin >> n;
    while(n--){
        cin >> x;
        nums.push_back(x);
    }
    dir = nums.size()-1;
    n = 0;
    while(dir>= esq){
        if(n%2 == 0){
            if(nums[esq]>nums[dir]){
                sereja += nums[esq];
                esq++;
            }
            else{
                sereja += nums[dir];
                dir--;
            }
        }
        else{
            if(nums[esq]>nums[dir]){
                dima += nums[esq];
                esq++;
            }
            else{
                dima += nums[dir];
                dir--;
            }
        }
        n++;
    }
    cout << sereja << " " << dima;
    return 0;
}